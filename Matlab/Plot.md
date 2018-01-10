# Plot
在matlab中画图用的指令是plot();

  - plot(x, y1, x, y2): 画出x和y1同时x和y2的图像
  - legend('y1', y2') : 标记y1和y2
  - xlable("string") : 标记x轴
  - ylable("string") : 标记y周
  - title("string") : 加入标题
  - 
  - subplot(row, col, pos) : 分割图像
  ```
  subplot(2, 2, 3)会把窗口切成4块(2 x 2)然后在左下角(第三个)画图
  subplot(3, 1, 3)会把窗口切成3块(3 x 1)然后在最后一个(第三个)画图
  ```
