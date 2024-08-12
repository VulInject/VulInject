static bool
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR4->VAR6;

if (!FUN2(VAR2, &VAR4->VAR7, &VAR4->VAR8))
return false;
if (!FUN3(VAR2, &VAR4->VAR9))
return false;
if (!FUN4(VAR2, &VAR4->VAR10))
return false;
if (FUN5(VAR2, &VAR4->VAR11) < 0)
return false;
if (FUN6(VAR2, &VAR4->VAR12) < 0)
return false;
if (FUN6(VAR2, &VAR4->VAR13) < 0)
return false;

FUN7(VAR6);
VAR6->VAR14 = VAR15;
VAR6->VAR16  = VAR17;

return true;
}