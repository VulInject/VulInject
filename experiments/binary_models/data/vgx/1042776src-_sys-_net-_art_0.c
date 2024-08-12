void
FUN1(void *VAR1)
{
struct VAR2 *VAR3, *VAR4;

FUN2(&VAR5);
VAR3 = VAR6;
VAR6 = NULL;
FUN3(&VAR5);

while (VAR3 != NULL) {
VAR4 = VAR3->VAR7;

if (VAR3->VAR8 == 0)
FUN4(VAR3, "");
else
FUN4(FUN5(VAR3), "");

switch (FUN6(VAR3->VAR9)) {
case FUN6(4):
FUN7(&VAR10, VAR3->VAR11);
break;
case FUN6(8):
FUN7(&VAR12, VAR3->VAR11);
break;
default:
FUN8("", VAR3->VAR9);
}

FUN7(&VAR13, VAR3);

VAR3 = VAR4;
}
}


void
FUN9(struct VAR2 *VAR3, int VAR14, struct VAR15 *VAR16,
struct VAR15 *new)
{
struct VAR15		*VAR17, *VAR18;
int			 VAR19 = VAR14;

FUN10(VAR14 < VAR3->VAR20);

VAR21:
VAR19 <<= 1;
if (VAR19 < VAR3->VAR20)
goto VAR22;


while (1) {
VAR17 = FUN11(&VAR3->VAR11[VAR19].VAR17);
if (!FUN12(VAR17)) {
VAR18 = FUN11(&FUN13(VAR17)->VAR23);
if (VAR18 == VAR16) {
FUN14(&FUN13(VAR17)->VAR23,
new);
}
} else if (VAR17 == VAR16) {
FUN14(&VAR3->VAR11[VAR19].VAR17, new);
}
if (VAR19 % 2)
goto VAR24;
VAR19++;
}

VAR22:
VAR17 = FUN11(&VAR3->VAR11[VAR19].VAR17);
if (VAR17 == VAR16)
goto VAR21;
VAR25:
if (VAR19 % 2)
goto VAR24;
VAR19++;
goto VAR22;
VAR24:
VAR19 >>= 1;
FUN14(&VAR3->VAR11[VAR19].VAR17, new);


if (VAR19 != VAR14)
goto VAR25;
}