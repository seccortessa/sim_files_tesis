bebeimg = imread('bebeas.jpg');
bebe2 = imread('redbaby.jpg');
bebe3 = imread('bluebaby.jpg');

% red_i=flipud(bebeimg(:,:,1).');
% green_i=flipud(bebeimg(:,:,2).');
% blue_i=flipud(bebeimg(:,:,3).');


red = imresize(flipud(bebeimg(:,:,1).'),[750 483]);
green = imresize(flipud(bebeimg(:,:,2).'),[750 483]) ;
blue = imresize(flipud(bebeimg(:,:,3).'),[750 483]) ;



% red_i2=rot90(bebe2(:,:,1),2);
% green_i2=rot90(bebe2(:,:,2),2);
% blue_i2=rot90(bebe2(:,:,3),2);

red2 = imresize(rot90(bebe2(:,:,1),2),[750 483]);
green2 = imresize(rot90(bebe2(:,:,2),2),[750 483]) ;
blue2 = imresize(rot90(bebe2(:,:,3),2),[750 483]) ;


% red_i3=rot90(bebe3(:,:,1),2);
% green_i3=rot90(bebe3(:,:,2),2);
% blue_i3=rot90(bebe3(:,:,3),2);

red3 = imresize(rot90(bebe3(:,:,1),2),[750 483]);
green3 = imresize(rot90(bebe3(:,:,2),2),[750 483]) ;
blue3 = imresize(rot90(bebe3(:,:,3),2),[750 483]) ;
