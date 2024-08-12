static inline void FUN1(VAR1 *VAR2, int VAR3, target_ulong VAR4)
{
    VAR5 *VAR6;
    VAR6 = VAR2->VAR6;
    if ((VAR6->VAR7 & VAR8) == (VAR4 & VAR8))
    {
        if (VAR3 == 0)
            FUN2(FUN3(VAR6));
        else
            FUN4(FUN3(VAR6));
        FUN5(VAR4);
        FUN6();
        FUN7((long)VAR6 + VAR3);
        if (VAR2->VAR9)
            FUN8();
        FUN9();
    }
    else
    {
        FUN5(VAR4);
        FUN6();
        FUN10();
        if (VAR2->VAR9)
            FUN8();
        FUN9();
    }
}