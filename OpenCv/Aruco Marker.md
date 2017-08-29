# Print the Aruco Marker

```
#include "opencv2\core.hpp"
#include "opencv2\highgui.hpp"
#include "opencv2\imgcodecs.hpp"
#include "opencv2\imgproc.hpp"
#include "opencv2\calib3d.hpp"
#include "opencv2\aruco.hpp"

#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;
using namespace cv;

void createArucoMarker() {
	Mat output;

	Ptr<aruco::Dictionary> markerDic = aruco::getPredefinedDictionary(aruco::PREDEFINED_DICTIONARY_NAME::DICT_4X4_50);

	for (int i = 0; i < 50; i++) {
		aruco::drawMarker(markerDic, i, 500, output, 1);

		ostringstream convert;
		string fileName = "4 x 4 Marker_";
		convert << fileName << i << ".jpg";
		imwrite(convert.str(), output);
	}

}

int main() {
	createArucoMarker();
}
```
