# Questions

## Setup

### What is the difference between git and github?

- Git is a tool for version control
- GitHub is a web-plattform where you can host git repositories

### Name 3 benefits of a version control system:

- Enables Developers to work on the same codebase simultaneously
- The history of all changes is tracked, simplifies version changing
- Error reccovery is simplified as you can easily change to a stable version

### Name 3 alternatives to git:

- SVN
- Perforce
- TFVC

### Name 2 differences between git and other version control systems:

- Git is distributed, every developer has a complete copy of the entire system including its history
- Git is quicker and more efficient, especially when it comes to branching and merging

### Name known issues related to game engines (Unreal, Unity) and version control systems:

- Game Engines have large, binary assets which are challenging to version and slow down the repository
- Those non code files are also very difficult to merge 
- The larger the repository grows the slower it gets, especially game projects can grow into huge sizes

## Logging

### Describe a logging system with your own words:

- A logging system is a tool that makes it possible to easily record events happening inside a system
- Data like errors, user actions, warnings and performance metrics is collected and stored in logs
- Logs are informative statements written to a file, database or console
- They often include:
  - Level of severity like 'info', 'debug', 'warn', 'error', ...
  - A formatted message that describes the event
  - Colorcoding for easier identification of important logs, like 'error' or 'fatal'
  - Runtime data like variables, parameters and timestamps
- Depending on the circumstances (Debug, Release) different log levels might be visible

### What is the difference between git submodules and git subtrees?

- Git submodules
  - integrate another repository by referencing it
  - needs to be loaded seperately and updated manually
  - good for standalone dependencies that don't change often
- Git subtrees 
  - integrate another repository by copying its content into a directory
  - no seperate loading and changes can be pushed or fetched with a single command
  - good if dependency is integral part or updated frequently

### What is a build system in C++? Name 3 build systems:

- A build system is a set of tools and processes which helps automating compilation, linking and packaging of executables
- Dependencies can also be managed
- Can set a correct compile order and generates a the final build product
- Optimization can also be configured
- Examples:  
  - Bazel
  - CMake
  - Premake

### What is a package manager in C++? Name 3 package manager:

- A package manager helps handling dependencies
- The process of installing, updating, configuring and managing libraries and dependencies is automated
- Examples:
  - vcpkg
  - Conan 
  - Hunter
