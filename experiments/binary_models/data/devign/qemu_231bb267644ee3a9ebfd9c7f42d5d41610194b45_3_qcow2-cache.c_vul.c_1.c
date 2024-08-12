static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = 0;
    if (!VAR4->VAR10[VAR5].VAR11 || !VAR4->VAR10[VAR5].VAR12)
    {
        return 0;
    }
    FUN2(FUN3(), VAR4 == VAR7->VAR13, VAR5);
    if (VAR4->VAR14)
    {
        VAR9 = FUN4(VAR2, VAR4);
    }
    else if (VAR4->VAR15)
    {
        VAR9 = FUN5(VAR2->VAR16);
        if (VAR9 >= 0)
        {
            VAR4->VAR15 = false;
        }
    }
    if (VAR9 < 0)
    {
        return VAR9;
    }
    if (VAR4 == VAR7->VAR17)
    {
        VAR9 = FUN6(VAR2, VAR18 & ~VAR19, VAR4->VAR10[VAR5].VAR12, VAR7->VAR20);
    }
    else if (VAR4 == VAR7->VAR13)
    {
        VAR9 = FUN6(VAR2, VAR18 & ~VAR21, VAR4->VAR10[VAR5].VAR12, VAR7->VAR20);
    }
    else
    {
        VAR9 = FUN6(VAR2, VAR18, VAR4->VAR10[VAR5].VAR12, VAR7->VAR20);
    }
    if (VAR9 < 0)
    {
        return VAR9;
    }
    if (VAR4 == VAR7->VAR17)
    {
        FUN7(VAR2->VAR16, VAR22);
    }
    else if (VAR4 == VAR7->VAR13)
    {
        FUN7(VAR2->VAR16, VAR23);
    }
    VAR9 = FUN8(VAR2->VAR16, VAR4->VAR10[VAR5].VAR12, VAR4->VAR10[VAR5].VAR24, VAR7->VAR20);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    VAR4->VAR10[VAR5].VAR11 = false;
    return 0;
}