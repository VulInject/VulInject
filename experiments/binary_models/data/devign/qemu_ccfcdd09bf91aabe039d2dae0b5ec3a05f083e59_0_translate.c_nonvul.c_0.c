static inline void FUN1(VAR1 *VAR2, int VAR3, target_ulong VAR4, target_ulong VAR5)
{
    int VAR6, VAR7;
    if (VAR2->VAR8)
    {
        FUN2(VAR2);
        VAR6 = FUN3();
        FUN4(VAR2, VAR3, VAR6);
        FUN5(VAR2, VAR9);
        FUN6(VAR2, 0, VAR5);
        FUN7(VAR6);
        FUN6(VAR2, 1, VAR4);
        VAR2->VAR10 = VAR11;
    }
    else
    {
        VAR6 = FUN3();
        VAR7 = FUN3();
        FUN4(VAR2, VAR3, VAR6);
        FUN8(VAR5);
        FUN9(VAR7);
        FUN7(VAR6);
        FUN8(VAR4);
        FUN7(VAR7);
        FUN10(VAR2);
    }
}