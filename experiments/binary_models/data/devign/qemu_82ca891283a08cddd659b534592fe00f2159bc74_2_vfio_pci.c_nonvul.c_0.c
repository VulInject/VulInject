static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, void **VAR6, size_t VAR7, off_t VAR8, const char *VAR9)
{
    int VAR10 = 0;
    if (VAR11 && VAR7 && VAR2->VAR12 & VAR13)
    {
        int VAR14 = 0;
        if (VAR2->VAR12 & VAR15)
        {
            VAR14 |= VAR16;
        }
        if (VAR2->VAR12 & VAR17)
        {
            VAR14 |= VAR18;
        }
        *VAR6 = FUN2(NULL, VAR7, VAR14, VAR19, VAR2->VAR20, VAR2->VAR21 + VAR8);
        if (*VAR6 == VAR22)
        {
            *VAR6 = NULL;
            VAR10 = -VAR23;
            goto VAR24;
        }
        FUN3(VAR5, VAR9, VAR7, *VAR6);
    }
    else
    {
    VAR24:
        FUN4(VAR5, VAR9, 0);
    }
    FUN5(VAR4, VAR8, VAR5);
    return VAR10;
}