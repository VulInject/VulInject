static int FUN1(VAR1 *VAR2, VAR3 *VAR4) 
{
int VAR5 = VAR4->VAR5;
int VAR6;


FUN2(VAR7, VAR5);
VAR6 = FUN3(VAR5+1);

switch (VAR6 & 0x03) {
case 0:
VAR4->VAR8 = 0x3e8;
break;
case 1:
VAR4->VAR8 = 0x2e8;
break;
case 2:
VAR4->VAR8 = 0x3f8;
break;
case 3:
VAR4->VAR8 = 0x2f8;
break;
}
VAR4->VAR9 = VAR4->VAR8;
FUN4("", VAR10,
VAR4->VAR8);


FUN2(VAR11, VAR5);
VAR6 = FUN3(VAR5+1);

switch (VAR6 & 0x07) {
case 0:
VAR4->VAR12 = -1;
break;
case 1:
VAR4->VAR12 = 3;
break;
case 2:
VAR4->VAR12 = 4;
break;
case 3:
VAR4->VAR12 = 5;
break;
case 4:
VAR4->VAR12 = 7;
break;
case 5:
VAR4->VAR12 = 9;
break;
case 6:
VAR4->VAR12 = 11;
break;
case 7:
VAR4->VAR12 = 15;
break;
}
FUN4("", VAR10, VAR4->VAR12);


switch ((VAR6 >> 3) & 0x03) {
case 0:
VAR4->VAR13 = -1;
break;
case 1:
VAR4->VAR13 = 0;
break;
case 2:
VAR4->VAR13 = 1;
break;
case 3:
VAR4->VAR13 = 3;
break;
}
FUN4("", VAR10, VAR4->VAR13);


FUN2(VAR14, VAR5);
VAR6 = FUN3(VAR5+1);

VAR4->VAR15 = VAR6 & 0x01;
VAR4->VAR16 = !((VAR6 >> 1) & 0x01);

return 0;
}