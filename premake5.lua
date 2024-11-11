workspace "Foxin"
	architecture "x64"
	
	configurations 
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "Foxin"
	location "Foxin"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files 
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/Vendor/spdlog/include"
	}

	buildoptions "/utf-8"

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"FX_PLATFORM_WINDOWS",
			"FX_BUILD_DLL"
		}

		postbuildcommands
		{
			"{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox"
		}

	filter "configurations:Debug"
		defines "FX_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "FX_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "FX_DIST"
		optimize "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files 
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"Foxin/Vendor/spdlog/include",
		"Foxin/src"
	}

	buildoptions "/utf-8"

	links 
	{
		"Foxin"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"FX_PLATFORM_WINDOWS;"
		}

	filter "configurations:Debug"
		defines "FX_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "FX_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "FX_DIST"
		optimize "On"