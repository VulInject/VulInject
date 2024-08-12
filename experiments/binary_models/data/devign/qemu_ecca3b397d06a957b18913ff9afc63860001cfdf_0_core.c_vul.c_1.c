static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    int VAR5;
    if (VAR2 == -VAR6)
    {
        return;
    }
    FUN2(FUN3(VAR4->VAR7), &VAR4->VAR8);
    VAR4->VAR9 = NULL;
    VAR4->VAR10 &= ~VAR11;
    if (VAR2 != 0)
    {
        if (FUN4(VAR4, -VAR2, VAR12))
        {
            return;
        }
    }
    VAR5 = VAR4->VAR13;
    if (VAR5 > VAR4->VAR14)
    {
        VAR5 = VAR4->VAR14;
    }
    VAR4->VAR13 -= VAR5;
    FUN5(VAR4, FUN6(VAR4) + VAR5);
    if (VAR4->VAR13 == 0)
    {
        FUN7(VAR4);
    }
    else
    {
        int VAR15 = VAR4->VAR13;
        if (VAR15 > VAR4->VAR14)
        {
            VAR15 = VAR4->VAR14;
        }
        FUN8(VAR4, VAR4->VAR16, VAR15 * VAR17, VAR18);
    }
    if (VAR19 && ((++VAR4->VAR20 % 16) == 0))
    {
        FUN9(VAR4->VAR21, FUN10(VAR22) + (FUN11() / 1000));
    }
    else
    {
        FUN12(VAR4->VAR23);
    }
}