bebeimg = imread('bebeas.jpg');
bebe2 = imread('victoriatetero.jpg');
bebe3 = imread('victoriafoto.jpg');

red_i=bebeimg(:,:,1).';
green_i=bebeimg(:,:,2).';
blue_i=bebeimg(:,:,3).';


red = imresize(red_i,[750 483]);
green = imresize(green_i,[750 483]) ;
blue = imresize(blue_i,[750 483]) ;



red_i2=bebe2(:,:,1).';
green_i2=bebe2(:,:,2).';
blue_i2=bebe2(:,:,3).';

red2 = imresize(red_i2,[750 483]);
green2 = imresize(green_i2,[750 483]) ;
blue2 = imresize(blue_i2,[750 483]) ;


red_i3=bebe3(:,:,1).';
green_i3=bebe3(:,:,2).';
blue_i3=bebe3(:,:,3).';

red3 = imresize(red_i3,[750 483]);
green3 = imresize(green_i3,[750 483]) ;
blue3 = imresize(blue_i3,[750 483]) ;
