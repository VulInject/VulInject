static inline bool FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR7;
u32 VAR8 = (VAR6->VAR9 + 1) & (VAR10 - 1);

if (VAR8 == VAR6->VAR11) {
VAR2->VAR12.VAR13++;
return false;
}

if (FUN2(FUN3(VAR4->VAR14)))
return false;

VAR6->VAR7[VAR6->VAR9] = *VAR4;
VAR6->VAR9 = VAR8;
return true;
}