# CS217-RayTracing
Project for CS217 GPU architecture. A basic cuda version raytracing program

## How to run
Please make sure [CMake](https://cmake.org/) is installed on your machine. 

Enter the root of this project, using following commands to compile:
```bash
make clean
make build
```

After compile, you will have two executable in **buil** fold. Using this command to 
run the test program:
```bash
./build/TestRT
```

This program will add new file named "test.jpg" in **result** fold. There will be 
a blue sphere on the green background.


## 11.13.2020
Set up framework

## 11.14.2020
Update camera.h and ray.h

## 11.15.2020
Finished basic ray tracing program. See usage 

## Reference 
https://in1weekend.blogspot.com/2016/01/ray-tracing-in-one-weekend.html

https://news.developer.nvidia.com/ray-tracing-essentials-part-1-basics-of-ray-tracing/

https://developer.nvidia.com/blog/accelerated-ray-tracing-cuda/
