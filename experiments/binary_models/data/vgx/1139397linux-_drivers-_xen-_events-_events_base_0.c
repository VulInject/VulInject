int FUN1(unsigned VAR1,
unsigned VAR2, int VAR3, char *VAR4)
{
int VAR5;
struct physdev_irq VAR6;
int VAR7;

FUN2(&VAR8);

VAR5 = FUN3(VAR1);
if (VAR5 != -1) {
FUN4("",
VAR9, VAR5, VAR1);
goto VAR10;
}

VAR5 = FUN5(VAR1);
if (VAR5 < 0)
goto VAR10;

VAR6.VAR5 = VAR5;
VAR6.VAR11 = 0;


if (FUN6() &&
FUN7(VAR12, &VAR6)) {
FUN8(VAR5);
VAR5 = -VAR13;
goto VAR10;
}

VAR7 = FUN9(VAR5, 0, VAR2, VAR1, VAR14,
VAR3 ? VAR15 : 0);
if (VAR7 < 0) {
FUN10(VAR5);
VAR5 = VAR7;
goto VAR10;
}

FUN11(VAR5);

if (VAR3)
FUN12(VAR5, &VAR16,
VAR17, VAR4);
else
FUN12(VAR5, &VAR16,
VAR18, VAR4);

VAR10:
FUN13(&VAR8);

return VAR5;
}