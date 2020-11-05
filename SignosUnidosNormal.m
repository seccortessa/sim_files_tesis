%% ECG
picoR=18;  %Valor de magnitud pico onda R
gananciaOut= 0.7;  %Valor para escalar salida del modelo
offsetMaxFinder= (picoR)*gananciaOut*0.0045/0.7; %Offset para buscador de max en frec cardiaca
%%% TEMP
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
%% CO2
phi=35; %valor max de saturacion
tau1=0.2; %tiempo subida inspiracion
tau2=0.1; %tiempo subida espiracion
d=2;  %Periodo
alphaCo2=1;  % Factor de relacion de magnitudes
%% Ventilacion
A = 3.383;
B= 11.4448;
Ci=0.1;
D=0.2956;
Pex= 4.3222;
Pset= 18.9445;
Ri= 16.41;
tf = 4; %duración total del ciclo
T= tf;
ti=2;  %tiempo de inspiración
Ve0=4.5145;
Vt= 1.03;


