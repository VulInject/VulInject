static int FUN1(int *VAR1, int *VAR2, int **VAR3, const char *VAR4, void *VAR5)
{
    VAR6 *VAR7, *VAR8, *VAR9;
    size_t VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    if ((VAR11 = FUN2(VAR4, &VAR7, &VAR10, 0, VAR5)) < 0)
        return VAR11;
    VAR14 = 0;
    for (VAR12 = 0; VAR12 < VAR10; VAR12++)
    {
        if (VAR7[VAR12] == '')
        {
            if (*VAR2 == VAR15)
            {
                FUN3(VAR5, VAR16, "");
                return VAR17;
            }
            ++(*VAR2);
            *VAR1 = FUN4(*VAR1, VAR14);
            VAR14 = 0;
        }
        else if (VAR14 == VAR15)
        {
            FUN3(VAR5, VAR16, "");
            return VAR17;
        }
        VAR14++;
    }
    if (*VAR2 > (VAR18 / sizeof(int) / *VAR1))
    {
        FUN3(VAR5, VAR16, "", *VAR2, *VAR1);
        return VAR17;
    }
    if (!(*VAR3 = FUN5(sizeof(int) * *VAR2, *VAR1)))
        return FUN6(VAR19);
    VAR8 = VAR7;
    VAR9 = VAR7 + VAR10 - 1;
    for (VAR12 = 0; VAR12 < *VAR2; VAR12++)
    {
        for (VAR13 = 0;; VAR13++)
        {
            if (VAR8 > VAR9 || *VAR8 == '')
            {
                VAR8++;
                break;
            }
            else
                (*VAR3)[*VAR1 * VAR12 + VAR13] = !!FUN7(*(VAR8++));
        }
    }
    FUN8(VAR7, VAR10);
    {
        char *VAR20;
        if (!(VAR20 = FUN9(*VAR1 + 1)))
            return FUN6(VAR19);
        for (VAR12 = 0; VAR12 < *VAR2; VAR12++)
        {
            for (VAR13 = 0; VAR13 < *VAR1; VAR13++)
                VAR20[VAR13] = (*VAR3)[VAR12 * *VAR1 + VAR13] ? '' : '';
            VAR20[VAR13] = 0;
            FUN3(VAR5, VAR21, "", VAR12, VAR20);
        }
        FUN10(VAR20);
    }
    return 0;
}