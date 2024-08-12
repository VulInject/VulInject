static unsigned int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    unsigned int VAR8 = FUN2(VAR6);
    if (VAR7 == VAR9 || VAR7 == VAR10)
    {
        FUN3(VAR2, VAR4, VAR6);
    }
    else if (VAR7 == VAR11)
    {
        FUN4(VAR2, VAR4, VAR6);
    }
    else
    {
        FUN5(VAR2->VAR12, VAR13, "", VAR7);
        VAR4->VAR14 = 0;
        return FUN2(VAR6) - VAR8;
    }
    if (FUN6(VAR6))
    {
        int VAR15 = FUN7(VAR6, 4);
        if (VAR15 == 15)
            VAR15 += FUN7(VAR6, 8);
        VAR15 <<= 3;
        while (VAR15 > 7)
        {
            VAR15 -= 2;
            FUN8(VAR2, VAR4, VAR6, FUN7(VAR6, 2), &VAR15);
        }
    }
    return FUN2(VAR6) - VAR8;
}