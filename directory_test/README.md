A Project with Directories

You can add the following for setting the build type

cmake -DCMAKE_BUILD_TYPE=Release ..
cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo ...
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")
set(CMAKE_BUILD_TYPE Debug)

For verbose compiling
make VERBOSE=1
You can also set CMAKE_VERBOSE_MAKEFILE to ON
