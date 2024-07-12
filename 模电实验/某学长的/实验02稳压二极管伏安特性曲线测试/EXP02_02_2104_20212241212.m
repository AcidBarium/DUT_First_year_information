name='EXP02_02_2104_20212241212.xlsx';
a=xlsread(name,'D1:D49');
x=a';
c=xlsread(name,'E1:E49');
y=c';
plot(x,y,'b-o'),grid on;
title('仿真的稳压二极管1N4735A的伏安特性曲线（MATLAB生成，48个数据点）');
legend('1N4735 IV Curve');
xlabel('电压Ud(V)');
ylabel('电流Id(mA)');