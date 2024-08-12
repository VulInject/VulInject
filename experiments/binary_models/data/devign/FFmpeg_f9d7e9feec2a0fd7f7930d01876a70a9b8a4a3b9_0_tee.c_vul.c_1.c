static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    unsigned VAR6 = 0, VAR7;
    const char *VAR8 = VAR2->VAR8;
    char *VAR9[VAR10];
    int VAR11;
    while (*VAR8)
    {
        if (VAR6 == VAR10)
        {
            FUN2(VAR2, VAR12, "", VAR10);
            VAR11 = VAR13;
            goto VAR14;
        }
        if (!(VAR9[VAR6++] = FUN3(&VAR8, VAR15)))
        {
            VAR11 = FUN4(VAR16);
            goto VAR14;
        }
        if (strspn(VAR8, VAR15))
            VAR8++;
    }
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        if ((VAR11 = FUN5(VAR2, VAR9[VAR7], &VAR4->VAR9[VAR7])) < 0)
            goto VAR14;
        FUN6(&VAR4->VAR9[VAR7], VAR2, VAR17);
        FUN7(&VAR9[VAR7]);
    }
    VAR4->VAR6 = VAR6;
    for (VAR7 = 0; VAR7 < VAR2->VAR18; VAR7++)
    {
        int VAR19, VAR20 = 0;
        for (VAR19 = 0; VAR19 < VAR4->VAR6; VAR19++)
            VAR20 += VAR4->VAR9[VAR19].VAR21[VAR7] >= 0;
        if (!VAR20)
            FUN2(VAR2, VAR22, ""
                                        "",
                   VAR7);
    }
    return 0;
VAR14:
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
        FUN7(&VAR9[VAR7]);
    FUN8(VAR2);
    return VAR11;
}