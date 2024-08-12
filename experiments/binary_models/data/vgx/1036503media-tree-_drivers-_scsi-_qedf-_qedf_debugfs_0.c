void
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
char VAR7[32];
struct VAR8 *VAR9 = NULL;

FUN2(VAR2, VAR10, "");

sprintf(VAR7, "", VAR2->VAR11);
VAR2->VAR12 = FUN3(VAR7, VAR13);
if (!VAR2->VAR12)
return;


while (VAR4) {
if (!(VAR4->VAR14))
break;

VAR9 = FUN4(VAR4->VAR14, 0600,
VAR2->VAR12, VAR2,
VAR6);
if (!VAR9) {
FUN2(VAR2, VAR10,
"",
VAR4->VAR14);
FUN5(VAR2->VAR12);
return;
}
VAR4++;
VAR6++;
}
}