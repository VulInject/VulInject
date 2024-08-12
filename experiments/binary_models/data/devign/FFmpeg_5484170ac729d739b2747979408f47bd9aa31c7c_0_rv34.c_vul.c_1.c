static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR9;
    int VAR10 = 0;
    FUN2(VAR9);
    FUN3(VAR9);
    if (VAR11 && (VAR9->VAR2->VAR12 & VAR13))
        FUN4(&VAR9->VAR14->VAR15, VAR16, 0);
    if (VAR9->VAR17 == VAR18 || VAR9->VAR19)
    {
        *VAR4 = VAR9->VAR14->VAR15;
        VAR10 = 1;
    }
    else if (VAR9->VAR20 != NULL)
    {
        *VAR4 = VAR9->VAR20->VAR15;
        VAR10 = 1;
    }
    if (VAR10)
        FUN5(VAR9, VAR4);
    return VAR10;