# **Finding Lane Lines on the Road** 

<img src="examples/laneLines_thirdPass.jpg" width="480" alt="Combined Image" />

## Overview
---

When we drive, we use our eyes to decide where to go.  The lines on the road that show us where the lanes are act as our constant reference for where to steer the vehicle.  Naturally, one of the first things we would like to do in developing a self-driving car is to automatically detect lane lines using an algorithm.

In this project you will detect lane lines in images using Python and OpenCV.  OpenCV means "Open-Source Computer Vision", which is a package that has many useful tools for analyzing images.  


## Pipeline
---

- Import the image
    -Obtain Image dimensions
- Convert to Gray scale
- Apply Canny edge detector
- Apply Region of Interest filtering
- Apply Gaussian smoothing. Right after canny?
- Apply hough transform
- Draw straight lines
    - Categorize lines by slope and x position
    - Apply unidimensional fitting
    - Obtain extreme points from the fitting equation
- Overlap lines with original image

## Shortcomings
- Left line tends to tighten. bug??
- Lines have differnt height. Lines are drawn in with fixed X not fixed y. Draw and cut?
- Refine code


## Improvements:

- Try to fit to a curve instead of a straight
- Improve image processing specially of shadows. Work on canny and Hough.
