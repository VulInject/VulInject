VAR1 FUN1(VAR2 *VAR3)
{
guint VAR4, VAR5, VAR6 = 0;


if (VAR3->VAR7) {
return VAR8;
}

VAR4 = (VAR9)strlen(VAR3->VAR10);


if (VAR4 < 3) {

return VAR11;
}

if (VAR4 >= 512) {

return VAR11;
}


if (VAR3->VAR10[0] != '') {
return VAR11;
}


for (VAR5=VAR4-1; VAR5 > 2; VAR5--) {
if (VAR3->VAR10[VAR5] == '') {
VAR6 = VAR5;
break;
}
else {
switch (VAR3->VAR10[VAR5]) {
case '':
VAR3->VAR12 = VAR8;
break;
case '':
VAR3->VAR13 = VAR8;
break;
case '':
VAR3->VAR14 = VAR8;
break;
case '':
VAR3->VAR15 = VAR8;
break;

default:



FUN2("", VAR3->VAR10[VAR5]);
break;
}
}
}
if (VAR6 == 0) {

return VAR11;
}


VAR3->VAR7 = (VAR16*)FUN3(VAR6);
memcpy(VAR3->VAR7, VAR3->VAR10+1, VAR6 - 1);
VAR3->VAR7[VAR6-1] = '';
VAR3->VAR17 = VAR8;
VAR3->VAR18 = VAR6 - 1;

return VAR8;
}