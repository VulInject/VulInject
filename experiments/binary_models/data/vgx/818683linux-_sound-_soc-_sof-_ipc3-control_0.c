static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7;


FUN2(VAR6, &VAR2->VAR8, VAR9)
if (VAR6->VAR10 == VAR4->VAR10) {

VAR7 = FUN3(VAR6, true, false);
if (VAR7 < 0) {
FUN4(VAR2->VAR11,
"",
VAR6->VAR10, VAR4->VAR12->VAR13);
return VAR7;
}


if (VAR4->VAR14)
continue;

VAR7 = FUN3(VAR6, false, false);
if (VAR7 < 0)
FUN5(VAR2->VAR11,
"",
VAR6->VAR10, VAR4->VAR12->VAR13);
}

return 0;
}