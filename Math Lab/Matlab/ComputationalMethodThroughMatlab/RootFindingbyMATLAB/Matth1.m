y=@(x) x^3-x-1
x1=input('Enter first guess:'); x2=input('Enter second guess:'); if (y(x1)*y(x2))>0
fprintf('no roots exist between the given intervals \n');
return;
%here, return keyword terminates the program i.e., if it is encountered no any line of code below it is executed.
end
if y(x1)==0
    fprintf(' %f is one of the root', x1);
    return ;
elseif y(x2)==0
    fprintf(' %f is one of the root', x2);
    return ;
end
for i=1:100 xh=(x1+x2)/2
    if y(x1)*y(xh)<0
    x2=xh; 
    else x1=xh end
if abs(y(x1))<0.0001
break;
end
end
fprintf(' the root is %f \n, x1);
