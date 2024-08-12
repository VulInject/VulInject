static void FUN1(VAR1 *VAR2, bool VAR3)
{
    uint64_t VAR4 = FUN2(VAR2, VAR5);
    FUN3(VAR3);
    if (VAR3)
    {
        VAR2->VAR6 = VAR4 & FUN4(VAR2->VAR7);
        VAR2->VAR8 = 1UL << ((VAR4 & VAR9) + 8);
        VAR2->VAR10 = true;
        FUN5(VAR2->VAR6, VAR2->VAR8);
        FUN6(VAR2, VAR11, 0, VAR12);
        if (VAR2->VAR13 != 0)
        {
            FUN7(VAR2->VAR13);
            if (!(FUN8(VAR2, VAR14) & VAR15))
            {
                FUN9(VAR2);
            }
        }
    }
    else
    {
        if (FUN10(VAR2))
        {
            FUN11(VAR2, VAR16, 0);
            VAR2->VAR17 = 0;
            VAR2->VAR10 = false;
            FUN6(VAR2, VAR11, VAR12, 0);
        }
        else
        {
            FUN12(VAR2->VAR17, VAR2->VAR13, VAR2->VAR18);
        }
    }
}