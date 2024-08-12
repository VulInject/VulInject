int FUN1(struct VAR1 *VAR2)
{
VAR3 *VAR4 = (void *)(long)VAR2->VAR4;
VAR3 *VAR5 = (void *)(long)VAR2->VAR5;
int VAR6 = 0;

switch (FUN2(VAR2)) {
case 54:

VAR6 = 256; 
break;
case 9000:

if (VAR5 + 1 > VAR4)
return VAR7;

switch (VAR5[0]) {
case 0:
VAR6 = 10;
break;
case 1:
VAR6 = 4100;
break;
case 2:
VAR6 = 8200;
break;
default:
return VAR7;
}
break;
default:
VAR6 = 20;
break;
}
if (FUN3(VAR2, 0 - VAR6))
return VAR7;
return VAR8;
}