%% Exponential Moving Average Filter
% IIR low pass filter
clc;clear;

Fc = 5; % Cutoff frequency
Fs= 1000; % Sampling frequency
T = 1/Fs; % Sampling interval
%% Input Signal
t = 0:T:1 - T;  

tau = 1/(2*pi*Fc); 
alpha =  T / (T + tau);
a = (2*tau - T)/(2*tau + T);
b = T/(2*tau + T);

sig = @(t) 10 + 5*sin(50*t) + 5*sin(500*t);
x = sig(t);

L = length(x);

y_prev = 0 ;    
y = zeros(size(x));
%% Filter implementation

% using forward euler
% for i = 1:L
%     x_new = x(i);
%     y_new= alpha*x_new + (1-alpha)*y_prev;
%     y_prev = y_new;
% 
%     y(i) = y_new;
% end

% using backward euler
% for i = 1:L
%     x_new = x(i);
%     y_new= (alpha/(1 + alpha))*x_new + (1/(1+alpha))*y_prev;
%     y_prev = y_new;
% 
%     y(i) = y_new;
% end

% using trapezoidal euler
x_prev = 0;
for i = 1:L
    x_new = x(i);
    y_new = a*y_prev + b*(x_new + x_prev);

    y(i) = y_new;
    y_prev = y_new;
    x_prev = x_new;
end

%% Plots
figure;
subplot(2,1,1);
plot(t,x);
title('Original Signal');
xlabel('Time (s)'); ylabel('Amplitude');

subplot(2,1,2);
plot(t,y);
title('Filtered Signal');
xlabel('Time (s)'); ylabel('Amplitude');

