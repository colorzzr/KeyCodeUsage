# Operation on Pixel
`variable.at<>(row, col)` --- allow opencv to access to specific pixel[row][col]

inside `<>` is for template because differ piture has different number for color

Gray has only black whtie -> `<unsign int>`

Full-color has three channels -> `<Vecb>` (vecter  bit):

:+1:note here use `cv::` can see all the vector type, but without it the code still work

- varible.at<Vecb>(row, col)[0] (Blue channel)
- varible.at<Vecb>(row, col)[1] (Green channel)
- varible.at<Vecb>(row, col)[2] (Red channel)

Example:
```
Mat test = imread("hhh.jpg", CV_LOAD_IMAGE_COLOR);

	for (int row = 0; row < test.rows; row++) {
		for (int col = 0; col < test.cols; col++) {
			test.at<Vec3b>(row, col)[0] = test.at<Vec3b>(row, col)[0] * 0;
		}
	}

	imshow("test", test);
	waitKey();
```
