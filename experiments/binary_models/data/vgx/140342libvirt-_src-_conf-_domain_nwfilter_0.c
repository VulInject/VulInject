static void
FUN1(virConnectPtr VAR1,
VAR2 *VAR3)
{
virNWFilterBindingPtr VAR4;

if (!VAR3->VAR5)
return;

VAR4 = FUN2(VAR1, VAR3->VAR5);
if (!VAR4)
return;

FUN3(VAR4);

FUN4(VAR4);
}