x=[1.3350;1.6820;2.1810;2.5000;2.9760;3.5790;4.2360;];

y=[10.3200;9.1090;7.3540;6.2310;4.5610;2.4450;0.1060;];

[a,b]=createFit(y,x);
hold on;


y2=1:0.01:4.5;

x2=15-3.5*y2;

plot(x2,y2);

legend('原始数据', '拟合曲线','理论');
hold off;

