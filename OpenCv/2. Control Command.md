# Basic Control Command

all function and class are under the `cv namespace`

`Mat varible = imread("fileName", flag);` --- allow opencv to read image under the project folder and store in varible

`imshow("name", variable(matrix));` --- allow the window to show the image

`imwrite("outputfilename", variable);` --- allow opencv to output a image

`nameWindow("windowName", flag);` --- allow opencv to create a empty window 

`resizeWindow("windowName", long, width);` --- allow the opencv to resize the window with given long*width;

`moveWindow("windowName", long, width);` --- allow the opencv to move the existing window to the give place

`waitKey();` --- wait user to press the key then continue

Example:
