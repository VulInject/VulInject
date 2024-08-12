static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
int VAR6;


switch (VAR3 & VAR7) {
case VAR8:
break;
case VAR9:
VAR5->VAR10 = 1; 
break;
default:
return -VAR11;
}


switch (VAR3 & VAR12) {
case VAR13:
VAR5->VAR14 = 0;
VAR5->VAR15 = 1;
break;
case VAR16:
VAR5->VAR14 = 1;
VAR5->VAR15 = 0;
break;
case VAR17:
VAR5->VAR14 = 1;
VAR5->VAR15 = 1;
break;
case VAR18:
default:
VAR5->VAR14 = 0;
VAR5->VAR15 = 0;
break;
}

if (FUN3(VAR5)) {
if (VAR5->VAR19)
FUN4(VAR2->VAR20, VAR5, 0, 1, 1,
VAR21);
else
FUN4(VAR2->VAR20, VAR5, 1, 1, 0,
VAR22);
}


if (FUN5(VAR5))
VAR6 = FUN6(VAR5);
else
VAR6 = FUN7(VAR5, VAR3 & VAR23);

return VAR6;
}