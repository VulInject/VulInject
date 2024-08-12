static inline void FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2->VAR5.VAR6);
    if (VAR2->VAR7 != FUN3(VAR4) || VAR2->VAR8 != FUN4(VAR4))
    {
        FUN5(VAR2->VAR5.VAR6, VAR2->VAR7, VAR2->VAR8);
        VAR2->VAR9 = 1;
    }
}