static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = &VAR11->VAR14;
    int VAR15;
    if (!VAR11->VAR16)
    {
        FUN2(VAR4->VAR17 == VAR18);
        VAR11->VAR16 = (VAR4->VAR19 < 8000) ? VAR20 : VAR21;
        VAR11->VAR22 = VAR4->VAR23;
    }
    if (!VAR11->VAR24)
        VAR11->VAR24 = VAR11->VAR16;
    if (VAR11->VAR24 <= VAR9)
    {
        VAR15 = VAR11->VAR24;
        VAR11->VAR24 = 0;
    }
    else
    {
        VAR15 = VAR25;
        VAR11->VAR24 -= VAR9;
    }
    if (FUN3(VAR14, VAR15, &VAR8, &VAR9) < 0 || !VAR9)
    {
        *VAR6 = NULL;
        *VAR7 = 0;
        return VAR9;
    }
    VAR2->VAR22 = VAR11->VAR22;
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR15;
}