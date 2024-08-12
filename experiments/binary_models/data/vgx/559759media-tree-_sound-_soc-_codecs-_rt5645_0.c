static int FUN1(struct VAR1 *VAR2,
struct VAR1 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2->VAR6);
unsigned int VAR7, VAR8, VAR9;

switch (VAR2->VAR8) {
case 0:
VAR7 = VAR10;
VAR8 = 0;
break;
case 1:
VAR7 = VAR10;
VAR8 = 4;
break;
case 3:
VAR7 = VAR11;
VAR8 = 0;
break;
case 8:
VAR7 = VAR11;
VAR8 = 4;
break;
case 9:
VAR7 = VAR11;
VAR8 = 8;
break;
case 10:
VAR7 = VAR11;
VAR8 = 12;
break;
default:
return 0;
}

VAR9 = (FUN3(VAR5, VAR7) >> VAR8) & 0xf;
switch (VAR9) {
case 1:
case 2:
case 3:
case 4:
return 1;
default:
return 0;
}

}