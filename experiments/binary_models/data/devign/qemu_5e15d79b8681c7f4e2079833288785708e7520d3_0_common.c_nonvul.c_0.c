int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7, void **VAR8, size_t VAR9, off_t VAR10, const char *VAR11)
{
    int VAR12 = 0;
    VAR13 *VAR14 = VAR4->VAR14;
    if (!VAR14->VAR15 && VAR9 && VAR4->VAR16 & VAR17)
    {
        int VAR18 = 0;
        if (VAR4->VAR16 & VAR19)
        {
            VAR18 |= VAR20;
        }
        if (VAR4->VAR16 & VAR21)
        {
            VAR18 |= VAR22;
        }
        *VAR8 = FUN2(NULL, VAR9, VAR18, VAR23, VAR14->VAR24, VAR4->VAR25 + VAR10);
        if (*VAR8 == VAR26)
        {
            *VAR8 = NULL;
            VAR12 = -VAR27;
            goto VAR28;
        }
        FUN3(VAR7, VAR2, VAR11, VAR9, *VAR8);
        FUN4(VAR7);
    }
    else
    {
    VAR28:
        FUN5(VAR7, VAR2, VAR11, 0);
    }
    FUN6(VAR6, VAR10, VAR7);
    return VAR12;
}