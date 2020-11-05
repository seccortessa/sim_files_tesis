%% ECG (no segmento ST y R peq)
alphaP= 0.6; %Valor de magnitud pico onda P
alphaQ=-5;  %Valor de magnitud pico onda Q
picoR=10;  %Valor de magnitud pico onda R
alphaS=-7.5; %Valor de magnitud pico onda S
alphaT=0.75*0.5; %Valor de magnitud pico onda T
thetaT = pi/3; % Angulo donde se ubica la onda T
omegaECG=8; %Frecuencia angular ECG
gananciaOut= 0.7;  %Valor para escalar salida del modelo
offsetMaxFinder= (picoR)*gananciaOut*0.0045/0.7; %Offset para buscador de max en frec cardiaca
%%% TEMP (fiebre)
inTemp= 1.05;
K= 36.5;   %Valor final de temp
tiempoEstablecimiento=2;  %tiempo para estado estable del modelo
tau=tiempoEstablecimiento/5; 
%%Presion
Re0=0.0160;
Ra=0.06;
Rlv=1.2; 
Rv=0.016;
Ce=1.5;Ca=1.5;Cv=50;
c6=7.5;c3=0.01; c2=6; c1=0.1; Ed=0.06;
Es0=3; Rem=10; epsilon=0.00001; A1=0.5; c4=500; c5=18.4207;
omega0=7.54;
Tsys= 0.2778;%0.3333*2*pi/omega0;
Tdia= 0.5555;%(1-0.3333)*2*pi/omega0;
Tpresion =Tsys+Tdia;
%% CO2 (baja saturacion)
phi=15; %valor max de saturacion
tau1=0.2; %tiempo subida inspiracion
tau2=0.1; %tiempo subida espiracion
d=2;  %Periodo
alphaCo2=1;  % Factor de relacion de magnitudes
%% Ventilacion (mayor frec)
Ci=0.1;
Ri= 16.41;
tf = 2; %duración total del ciclo
T= tf;
ti=1;  %tiempo de inspiración
A = exp(ti/(Ri*Ci));
B= exp(tf/(Ri*Ci));
Vt= 0.5;  %% valor maximo de onda de respiracion. Volumen aire en litros
Pex= -(Vt*A)/(Ci*(A-B));
Ve0= (Pex*Ci*(A-1))+(Vt*A);
D= exp(-ti/(Ri*Ci));
Pset= Pex+(Vt/(D*(A-1)*Ci));


