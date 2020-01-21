# New Project

cmake project template

## Build ##
```bash
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release .. && make
cd ..
```

## Run the Tests ##
Output logs: `build/Testing/Temporary/*`
```bash
cd build
ctest
```

