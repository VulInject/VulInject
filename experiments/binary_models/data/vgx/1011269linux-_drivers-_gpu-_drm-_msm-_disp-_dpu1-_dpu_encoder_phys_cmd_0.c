static void FUN1(
struct VAR1 *VAR2)
{
struct VAR3 *VAR4;

if (!VAR2->VAR5) {
FUN2("", VAR2 != NULL);
return;
}

FUN3(VAR2, VAR2->VAR6);

FUN4(VAR2);

if (!FUN5(VAR2))
return;

VAR4 = VAR2->VAR7;
VAR4->VAR8.FUN6(VAR4, VAR2->VAR6);
}