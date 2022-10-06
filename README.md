# HSE. Object-Oriented Programming. C++ Final Project.

Hello my fellow classmates 👋
This project is a C++ final project from the Object Oriented Programming course.

## Build

You have to have [OpenCV installed](https://docs.opencv.org/4.x/d7/d9f/tutorial_linux_install.html) on your computer.

From `src` folder:

```
mkdir build
cd build

cmake ..
make -j7

./bin/runner
```

## What will you see?

The project structure is quite basic and exactly the same as was introduced in the course.

The main folder is the `project` folder. There you will find two subfolders: `include` with headers and `src` with implementations.

You may find that the following classes have been introduced:

- Color: the abstract color class. Treats all colors as unsigned 32 bits integers. Provides two methods: deepCopy and getValue. 
  - RgbColor: treats colors as unsigned 32 bits integer: bits [0-7] are unused (can be potentially used for alpha channel), bits [8-15] are for Red channel, [16-23] are for Green, and [24-31] are for Blue.
  - BwColor: uses the same 32 bits integers, however, all of bits are unused, except [16-23].
- Shape
  - Circle: takes square area and checks if a dot is within the circle;
  - Rectange: consists of 2 triangles;
  - Triangle: uses sweep lines algorithm to render the triangles. The algorithm fills the triangle row-by-row (row is a horizontal row of pixels).
- RenderingUtils: the main utility in the project as provides useful methods to "draw" circles, rectanges, and triangles. 
- Point

## Test samples

This section provides code samples to draw some pictures and either check my implementation or test/compare yours.

You can find actual code samples by **clicking on the images**.

### Default set

This is basic examples from the class.

| Mushroom  | House |
| ------------- | ------------- |
| [![code](examples/mushroom/image.png)](examples/mushroom/code.cpp) | [![code](examples/house/image.png)](examples/house/code.cpp) |

### Abstractions set

I took the liberty of providing more examples to test the code. Hopefully, you'll find them useful.

| Semi Circle | Two Dots |
| ------------- | ------------- |
| [![code](examples/semi_circle/image.png)](examples/semi_circle/code.cpp) | [![code](examples/two_dots/image.png)](examples/two_dots/code.cpp) |

| Motion | Concentric Suns |
| ------------- | ------------- |
| [![code](examples/motion/image.png)](examples/motion/code.cpp) | [![code](examples/concentric_suns/image.png)](examples/concentric_suns/code.cpp) |

### Text set

This test sample was a nightmare, therefore this is the only test in this set 😅 

| Alex |
| ------------- |
| [![code](examples/alex/image.png)](examples/alex/code.cpp) |
