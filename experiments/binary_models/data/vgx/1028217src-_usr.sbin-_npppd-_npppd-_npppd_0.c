static void
FUN1(VAR1 *VAR2)
{
int VAR3;
int VAR4;

VAR4 = 0;

if (!FUN2(&VAR2->VAR5))
VAR4 |= 1;
if (!FUN3(&VAR2->VAR6))
VAR4 |= 1;
if (VAR4 != 0) {
FUN4(VAR2);
return;
}
for (VAR3 = FUN5(VAR2->VAR7) - 1; VAR3 >= 0; VAR3--) {
FUN6(&VAR2->VAR7[VAR3]);
}
VAR2->VAR8 = 1;
}