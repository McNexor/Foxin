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

### What is the difference between a dynamic linked library and a static library?

1. **Static Library**:
   - **Definition**: A collection of precompiled code linked into the executable at compile time.
   - **Key Characteristics**:
     - The code is copied directly into the application's binary during compilation.
     - Larger executable size due to embedded library code.
     - No dependency on external files at runtime.
   - **Advantages**:
     - No runtime dependencies.
     - Improved performance since no dynamic linking occurs at runtime.
   - **Disadvantages**:
     - Larger file size.
     - Updating the library requires recompiling the application.

2. **Dynamic Linked Library (DLL)**:
   - **Definition**: A library loaded into memory and linked to the application at runtime.
   - **Key Characteristics**:
     - Code remains in separate files, loaded as needed.
     - Executable size is smaller.
   - **Advantages**:
     - Smaller binary size.
     - Shared libraries reduce memory usage when multiple applications use the same library.
     - Updating the library doesn’t require recompilation.
   - **Disadvantages**:
     - Requires all linked libraries to be present at runtime.
     - Potential versioning issues (e.g., "DLL Hell").

---

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
---

### What is a Design Pattern?
A **design pattern** is a reusable solution to a common problem in software design. It is a template or guideline rather than a finished implementation, helping developers solve design challenges efficiently while promoting code readability, maintainability, and scalability.

---

### Name and Describe 2 Design Patterns
1. **Singleton Pattern**:
   - **Definition**: Ensures that a class has only one instance and provides a global point of access to it.
   - **Use Cases**:
     - Managing shared resources like database connections or configuration settings.
   - **Implementation**:
     - The class maintains a private static instance of itself and provides a public static method to access it.
   - **Advantages**:
     - Controlled access to a single instance.
   - **Disadvantages**:
     - Can introduce global state, making testing harder.

2. **Factory Pattern**:
   - **Definition**: The Factory Pattern defines an interface or method for creating objects, but allows subclasses or derived classes to decide which specific object to instantiate. It delegates the responsibility of object creation to a factory class.
   - **Use Cases**:
     - When the exact type of object to be created isn’t known until runtime.
     - When object creation involves complex logic that is better centralized.
     - When you want to decouple object creation from the main application logic.
   - **Implementation**:
     - A factory method or class contains the logic to create and return different types of objects based on input parameters or configuration.
     - The client interacts with the factory instead of directly instantiating objects.
   - **Advantages**:
     - Centralizes object creation logic, improving maintainability.
     - Adds flexibility for introducing new object types without modifying client code.
     - Promotes loose coupling between the client and the specific classes of objects.
   - **Disadvantages**:
     - May introduce unnecessary complexity if overused or for simple use cases.
     - Managing multiple factory classes can become cumbersome.

### What is a Precompiled Header?  
A **precompiled header (PCH)** is a file that contains compiled versions of frequently used headers in a program. It helps speed up compilation by avoiding redundant processing of commonly included files (e.g., standard library headers) every time the source files are compiled. Instead, the precompiled version is reused.  

#### Pros:
1. **Faster Compilation**: Speeds up build times, especially in large projects.
2. **Centralized Includes**: Consolidates common headers, reducing clutter in individual source files.
3. **Consistency**: Ensures all included headers in a project are processed the same way.

#### Cons:
1. **Dependency Management**: Changes to the PCH file require recompilation of all dependent files.
2. **Debugging Complexity**: Errors in the PCH file can be harder to trace due to the large scope.
3. **Increased Memory Usage**: Larger projects may experience higher memory demands during compilation.

---

### Describe the Layer of Abstraction in Your Own Words  
A **layer of abstraction** is a way of hiding complexity by defining interfaces or levels that separate different functionalities. Each layer provides a simplified view of the underlying implementation, allowing users or systems to interact with it without needing to understand the details of how it works.  

For example, in a software application, the hardware is abstracted by the operating system, and the operating system is abstracted by high-level application programming interfaces (APIs).  

Abstraction improves modularity and allows developers to focus on high-level design without being bogged down by low-level details.

---

### SOLID Principles  
The **SOLID** principles are five design principles intended to make software more maintainable, scalable, and robust.  

1. **S - Single Responsibility Principle (SRP)**:  
   - **Definition**: A class should have only one reason to change, meaning it should perform a single, well-defined responsibility.  
   - **Example**: A `User` class should manage user-related data only, while a `UserManager` handles user operations like saving or loading data.

2. **O - Open/Closed Principle (OCP)**:  
   - **Definition**: Classes should be open for extension but closed for modification.  
   - **Example**: Instead of modifying an existing `Shape` class to support a new shape, create a new subclass (e.g., `Circle`, `Rectangle`).

3. **L - Liskov Substitution Principle (LSP)**:  
   - **Definition**: Subtypes must be substitutable for their base types without altering the program's behavior.  
   - **Example**: If a `Rectangle` class is inherited by a `Square`, the `Square` must still behave correctly as a `Rectangle`.

4. **I - Interface Segregation Principle (ISP)**:  
   - **Definition**: A class should not be forced to implement interfaces it doesn’t use.  
   - **Example**: Instead of one large interface for `Printer`, create smaller ones like `Printable` and `Scannable`.

5. **D - Dependency Inversion Principle (DIP)**:  
   - **Definition**: High-level modules should not depend on low-level modules. Both should depend on abstractions.  
   - **Example**: Instead of a `Car` class directly depending on a `GasEngine` class, it should depend on an `Engine` interface, allowing substitution with an `ElectricEngine`.
