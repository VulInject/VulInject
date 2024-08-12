static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = &VAR11->VAR14;
    int VAR15, VAR16, VAR17;
    if (VAR2->VAR18 & VAR19)
    {
        VAR15 = VAR9;
    }
    else
    {
        VAR15 = FUN2(VAR11, VAR8, VAR9);
        if (FUN3(VAR14, VAR15, &VAR8, &VAR9) < 0)
        {
            *VAR6 = NULL;
            *VAR7 = 0;
            return VAR9;
        }
    }
    if (!FUN4(VAR8, VAR9, &VAR16, &VAR17, &VAR11->VAR20))
    {
        VAR2->VAR16 = VAR16;
        VAR4->VAR17 = VAR17;
    }
    else
        VAR2->VAR16 = 0;
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR15;
}