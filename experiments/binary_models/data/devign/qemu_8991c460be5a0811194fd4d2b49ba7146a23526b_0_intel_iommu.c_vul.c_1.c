static void FUN1(VAR1 *VAR2, bool VAR3)
{
    uint64_t VAR4 = FUN2(VAR2, VAR5);
    FUN3(VAR3);
    if (VAR3)
    {
        if (FUN4(VAR2))
        {
            VAR2->VAR6 = VAR4 & VAR7;
            VAR2->VAR8 = 1UL << ((VAR4 & VAR9) + 8);
            VAR2->VAR10 = true;
            FUN5(VAR2->VAR6, VAR2->VAR8);
            FUN6(VAR2, VAR11, 0, VAR12);
        }
        else
        {
            FUN7(VAR2->VAR13);
        }
    }
    else
    {
        if (FUN8(VAR2))
        {
            FUN9(VAR2, VAR14, 0);
            VAR2->VAR15 = 0;
            VAR2->VAR10 = false;
            FUN6(VAR2, VAR11, VAR12, 0);
        }
        else
        {
            FUN10(VAR2->VAR15, VAR2->VAR13, VAR2->VAR16);
        }
    }
}