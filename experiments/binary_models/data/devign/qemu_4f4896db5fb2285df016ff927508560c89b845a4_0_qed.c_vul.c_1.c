static void FUN1(VAR1 *VAR2, uint64_t VAR3, size_t VAR4)
{
    if (VAR2->VAR5 & VAR6)
    {
        struct VAR7 *VAR8 = VAR2->VAR9->VAR8;
        if (!VAR8->VAR10)
        {
            VAR8->VAR10 = FUN2(VAR2->VAR11.VAR12, VAR8->VAR13);
            memset(VAR8->VAR10, 0, VAR8->VAR13);
        }
    }
    VAR2->VAR14 = VAR3;
    FUN3(&VAR2->VAR15, VAR2->VAR9, VAR2->VAR16, VAR4);
    FUN4(VAR2, 0);
}