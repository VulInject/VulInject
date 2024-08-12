static int FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3 != VAR4)
return 0;
if (!VAR2->VAR5 || !VAR2->VAR6)
return -1;

struct VAR7 *VAR8 = VAR2->VAR6;

if (!FUN2(VAR8->VAR9, "") && !FUN2(VAR8->VAR9, ""))
return 0;

struct VAR10 *VAR11 = VAR2->VAR5;
FUN3(VAR11, VAR12);
FUN4(VAR13, "");

return 0;
}