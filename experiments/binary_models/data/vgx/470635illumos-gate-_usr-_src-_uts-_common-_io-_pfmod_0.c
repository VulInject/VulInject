static int
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
struct	VAR5	*VAR6 = (struct VAR5 *)VAR2->VAR7;
VAR3	*VAR8, *VAR9;
struct	packdesc	VAR10;
int	VAR11;

FUN2(VAR6);

switch (FUN3(VAR4)) {
case VAR12:
case VAR13:

for (VAR9 = VAR4; VAR4 && (FUN3(VAR4) == VAR12); VAR4 = VAR4->VAR14)
;


if (VAR4 == NULL) {
FUN4(VAR2, VAR9);
break;
}


VAR8 = VAR4->VAR14;
VAR11 = VAR6->VAR15;
if (VAR8 && (FUN5(VAR8) < VAR11)) {
int VAR16 = FUN6(VAR8);


if (FUN7(VAR8, FUN8(VAR11, VAR16)) == 0) {
FUN9(VAR9);
break;
}
}


if (((VAR17)VAR4->VAR18 & (sizeof (VAR19) - 1)) ||
(VAR8 != NULL &&
((VAR17)VAR8->VAR18 & (sizeof (VAR19) - 1)))) {
FUN9(VAR9);
break;
}


VAR10.VAR20 = (VAR19 *)VAR4->VAR18;
VAR10.VAR21 = (VAR4->VAR22 - VAR4->VAR18) / sizeof (VAR19);
if (VAR8) {
VAR10.VAR23 = (VAR19 *)VAR8->VAR18;
VAR10.VAR24 = (VAR8->VAR22 - VAR8->VAR18) /
sizeof (VAR19);
} else {
VAR10.VAR23 = NULL;
VAR10.VAR24 = 0;
}


if (FUN10(&VAR10, VAR6))
FUN4(VAR2, VAR9);
else
FUN9(VAR9);

break;

default:
FUN4(VAR2, VAR4);
break;
}
return (0);
}