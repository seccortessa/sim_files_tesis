%% ECG
alphaP= 0.6; %Valor de magnitud pico onda P
alphaQ=-5;  %Valor de magnitud pico onda Q
picoR=18;  %Valor de magnitud pico onda R
alphaS=-7.5; %Valor de magnitud pico onda S
alphaT=0.75*0.5; %Valor de magnitud pico onda T
thetaT = 4*pi/6; % Angulo donde se ubica la onda T
omegaECG=8; %Frecuencia angular ECG
gananciaOut= 0.7;  %Valor para escalar salida del modelo
offsetMaxFinder= gananciaOut*0.0045/0.7; %Offset para buscador de max en frec cardiaca
%%% TEMP
inTemp= 1;
K= 36.5;   %Valor final de temp
tiempoEstablecimiento=2;  %tiempo para estado estable del modelo
tau=tiempoEstablecimiento/5; 
%%Presion
Re0=0.0055222;
Ra=0.025;
Rlv=0.41279; 
Rv=0.02;
Ce=1.69;Ca=2;Cv=15;
c6=1;c3=0.000498; c2=4.0153; c1=0.01; Ed=0.0655;
Es0=0.57; Rem=10.009; epsilon=0.00001; A1=0.40341; c4=150; c5=18.445;
omega0=8.37;
Tsys= 0.3333*2*pi/omega0;
Tdia= (1-0.3333)*2*pi/omega0;
Tpresion =Tsys+Tdia;
offs = 0;
%% CO2
phi=32; %valor max de saturacion
tau1=0.2; %tiempo subida inspiracion
tau2=0.1; %tiempo subida espiracion
d=2;  %Periodo
alphaCo2=1;  % Factor de relacion de magnitudes
%% Ventilacion
Ci=0.1;
Ri=16.41;
tf = 4; %duración total del ciclo
T= tf;
ti=2;  %tiempo de inspiración
A = exp(ti/(Ri*Ci));
B= exp(tf/(Ri*Ci));
Vt= 1.03;
Pex= -(Vt*A)/(Ci*(A-B));
Ve0= (Pex*Ci*(A-1))+(Vt*A);
D= exp(-ti/(Ri*Ci));
Pset= Pex +(Vt/(D*(A-1)*Ci));


