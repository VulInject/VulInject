static int FUN1(unsigned int VAR1, unsigned int VAR2,
unsigned int VAR3, int VAR4, int VAR5, VAR6 *VAR7)
{
VAR6 *VAR8;

FUN2(VAR1);


if (!FUN3(VAR2, VAR3))
return VAR9.read(VAR1, VAR2, VAR3, VAR4, VAR5, VAR7);


if (VAR4 >= 0x70)
VAR8 = &VAR10;
else {
switch (VAR3) {
case  0x8:
VAR8 = FUN4(VAR11 ? VAR12 : VAR13, VAR4);
break;
case  0x9:
VAR8 = FUN4(VAR11 ? VAR14 : VAR15, VAR4);
break;
case  0xa:
VAR8 = VAR11 ? FUN4(VAR16, VAR4) : &VAR17;
break;
case 0x78:
VAR8 = FUN4(VAR18, VAR4);
break;
case 0x7b:
VAR8 = FUN4(VAR19, VAR4);
break;
case 0x7c:
VAR8 = FUN4(VAR20, VAR4);
break;
case 0x7d:
VAR8 = FUN4(VAR21, VAR4);
break;
default:
VAR8 = &VAR17;
break;
}
}
switch (VAR5) {
case 1:
*VAR7 = *(VAR22 *)VAR8;
break;
case 2:
*VAR7 = *(VAR23 *)VAR8;
break;
case 4:
*VAR7 = *VAR8;
break;
default:
FUN5();
}

return 0;
}