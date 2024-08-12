static int FUN1(struct VAR1 *VAR2, unsigned long VAR3,
bool VAR4)
{
struct VAR5 *VAR5;
struct VAR6 *VAR7, *VAR8 = FUN2(-VAR9);
int VAR10 = 0;


VAR5 = FUN3(VAR2);
if (FUN4(VAR5)) {
VAR10 = FUN5(VAR5);
FUN6(VAR2, "", VAR11, VAR10);
return VAR10;
}

FUN7(&VAR5->VAR12);


FUN8(VAR7, &VAR5->VAR13, VAR14) {
if (VAR7->VAR15 == VAR3) {
VAR8 = VAR7;
break;
}
}

if (FUN4(VAR8)) {
VAR10 = FUN5(VAR8);
goto VAR16;
}


if (VAR8->VAR17 == VAR4)
goto VAR16;

VAR8->VAR17 = VAR4;


if (VAR4)
FUN9(&VAR5->VAR18, VAR19,
VAR8);
else
FUN9(&VAR5->VAR18,
VAR20, VAR8);

VAR16:
FUN10(&VAR5->VAR12);
FUN11(VAR5);
return VAR10;
}