# New Project

cmake project template

## Build ##
```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

## Run the Tests ##
Output logs: `build/Testing/Temporary/*`
```bash
cd build
ctest
```

