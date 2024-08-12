static int
FUN1(VAR1 *VAR2,
const char *VAR3,
int VAR4,
virCPUDefAddFeatureMode VAR5)
{
VAR6 *VAR7;

if (VAR2->VAR8 == VAR9)
VAR4 = -1;

if ((VAR7 = FUN2(VAR2, VAR3))) {
switch (VAR5) {
case VAR10:
return 0;

case VAR11:
VAR7->VAR4 = VAR4;
return 0;

case VAR12:
default:
FUN3(VAR13,
FUN4(""),
VAR3);
return -1;
}
}

FUN5(VAR2->VAR14, VAR2->VAR15, VAR2->VAR16, 1);
VAR2->VAR14[VAR2->VAR16].VAR3 = FUN6(VAR3);
VAR2->VAR14[VAR2->VAR16].VAR4 = VAR4;
VAR2->VAR16++;

return 0;
}