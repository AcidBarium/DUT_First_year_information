name='EXP02_02_2104_20212241212_10.xlsx';
a=xlsread(name,'C1:C11');
x=a';
c=xlsread(name,'D1:D11');
y=c';
plot(x,y,'b-o'),grid on;
title('仿真的稳压二极管1N4735A的伏安特性曲线(MATLAB生成，10组数据点）');
legend('1N4735 IV Curve');
xlabel('电压Ud(V)');
ylabel('电流Id(mA)');