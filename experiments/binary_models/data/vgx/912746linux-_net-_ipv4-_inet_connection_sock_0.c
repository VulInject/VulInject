static inline int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
kuid_t VAR5 = FUN2(VAR4);

if (VAR2->VAR6 <= 0)
return 0;
if (!VAR4->VAR7)
return 0;
if (FUN3(VAR4->VAR8))
return 0;
if (!FUN4(VAR2->VAR9, VAR5))
return 0;

if (VAR2->VAR6 == VAR10)
return 1;
if (VAR2->VAR11 == VAR12)
return FUN5(&VAR2->VAR13,
FUN6(VAR4),
VAR2->VAR14,
VAR4->VAR15,
VAR2->VAR16,
FUN7(VAR4), true, false);
return FUN8(VAR2->VAR14, VAR4->VAR15,
FUN7(VAR4), true, false);
}