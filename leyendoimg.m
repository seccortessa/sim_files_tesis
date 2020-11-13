bebeimg = imread('bebeas.jpg');
bebe2 = imread('redbaby.jpg');
bebe3 = imread('bluebaby.jpg');

red_i=flipud(bebeimg(:,:,1).');
green_i=flipud(bebeimg(:,:,2).');
blue_i=flipud(bebeimg(:,:,3).');


red = imresize(red_i,[750 483]);
green = imresize(green_i,[750 483]) ;
blue = imresize(blue_i,[750 483]) ;



red_i2=rot90(bebe2(:,:,1),2);
green_i2=rot90(bebe2(:,:,2),2);
blue_i2=rot90(bebe2(:,:,3),2);

red2 = imresize(red_i2,[750 483]);
green2 = imresize(green_i2,[750 483]) ;
blue2 = imresize(blue_i2,[750 483]) ;


red_i3=rot90(bebe3(:,:,1),2);
green_i3=rot90(bebe3(:,:,2),2);
blue_i3=rot90(bebe3(:,:,3),2);

red3 = imresize(red_i3,[750 483]);
green3 = imresize(green_i3,[750 483]) ;
blue3 = imresize(blue_i3,[750 483]) ;
