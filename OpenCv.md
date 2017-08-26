# SetUp
去我的电脑-属性-环境变量

加入OpenCV build的路径为新的variable

然后选择path（路径）-编辑 加入OpenCv文件夹下的x64\cv14\bin

之后保存保存保存， 重启电脑


打开VS 新建project 把模式调成x64

在project的属性里点C\C++的第一个（外部依赖项目录 additional include directory）点击编辑

加入openCV下的include文件夹

接着去链接器-常规（link-general）的附加库目录（additional library directory）点击编辑

加入openCV下的x64\vc14\lib文件夹

接着去链接器-输入（link-input）的附加依赖项（additional dependence） 点击编辑

加入lib下的opencv_worldXXXd.lib（要打全名即.lib其中XXX为opencv的版本）




#command

all function and class are under the `cv namespace`

Mat varible = imread("fileName", flag); --- allow opencv to read image under the project folder and store in varible

imshow("name", variable(matrix));

