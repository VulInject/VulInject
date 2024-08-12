FUN1 (VAR1 *VAR2,
HalDeviceStoreForeachFn VAR3,
gpointer VAR4)
{
VAR5 *VAR6;

FUN2 (VAR2 != NULL);
FUN2 (VAR3 != NULL);

for (VAR6 = VAR2->VAR7; VAR6 != NULL; VAR6 = VAR6->VAR8) {
VAR9 *VAR10 = FUN3 (VAR6->VAR11);
gboolean VAR12;

VAR12 = FUN4 (VAR2, VAR10, VAR4);

if (VAR12 == VAR13)
return;
}
}