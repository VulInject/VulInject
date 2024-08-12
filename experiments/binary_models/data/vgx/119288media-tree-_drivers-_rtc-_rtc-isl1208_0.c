static VAR1
FUN1(int VAR2, void *VAR3)
{
unsigned long VAR4 = VAR5 + FUN2(1000);
struct VAR6 *VAR7 = VAR3;
struct VAR8 *VAR9 = FUN3(VAR7);
int VAR10 = 0, VAR11, VAR12;


while (1) {
VAR11 = FUN4(VAR7);
if (VAR11 >= 0)
break;

if (FUN5(VAR5, VAR4)) {
FUN6(&VAR7->VAR13, "",
VAR14);
return VAR11;
}
}

if (VAR11 & VAR15) {
FUN7(&VAR7->VAR13, "");

FUN8(VAR9, 1, VAR16 | VAR17);


VAR11 &= ~VAR15;
VAR11 = FUN9(VAR7, VAR18, VAR11);
if (VAR11 < 0)
FUN6(&VAR7->VAR13, "",
VAR14);
else
VAR10 = 1;


VAR12 = FUN10(VAR7, 0);
if (VAR12)
return VAR12;
}

return VAR10 ? VAR19 : VAR20;
}