static inline int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    unsigned int VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    VAR12 *VAR13;
    VAR5 = FUN2(&VAR4->VAR14, 8);
    FUN3(&VAR4->VAR14);
    FUN3(&VAR4->VAR14);
    FUN3(&VAR4->VAR14);
    FUN3(&VAR4->VAR14);
    FUN2(&VAR4->VAR14, 4);
    VAR6 = FUN2(&VAR4->VAR14, 8);
    VAR7 = FUN4(&VAR4->VAR14);
    VAR13 = FUN5(VAR2, (void **)VAR2->VAR15, VAR7, VAR16, sizeof(VAR12), "");
    if (VAR13 == NULL)
        return -1;
    VAR13->VAR5 = VAR5;
    VAR13->VAR6 = VAR6;
    memset(VAR13->VAR17, 16, sizeof(VAR13->VAR17));
    memset(VAR13->VAR18, 16, sizeof(VAR13->VAR18));
    VAR13->VAR19 = 0;
    if (VAR13->VAR5 >= 100)
    {
        VAR13->VAR20 = FUN4(&VAR4->VAR14);
        if (VAR13->VAR20 == 3)
            FUN3(&VAR4->VAR14);
        FUN4(&VAR4->VAR14);
        FUN4(&VAR4->VAR14);
        VAR13->VAR21 = FUN3(&VAR4->VAR14);
        FUN6(VAR2, VAR13, NULL, 1, VAR13->VAR17, VAR13->VAR18);
    }
    else
    {
        VAR13->VAR20 = 1;
    }
    VAR13->VAR22 = FUN4(&VAR4->VAR14) + 4;
    VAR13->VAR23 = FUN4(&VAR4->VAR14);
    if (VAR13->VAR23 == 0)
    {
        VAR13->VAR24 = FUN4(&VAR4->VAR14) + 4;
    }
    else if (VAR13->VAR23 == 1)
    {
        VAR13->VAR25 = FUN3(&VAR4->VAR14);
        VAR13->VAR26 = FUN7(&VAR4->VAR14);
        VAR13->VAR27 = FUN7(&VAR4->VAR14);
        VAR8 = FUN4(&VAR4->VAR14);
        if (VAR8 >= sizeof(VAR13->VAR28) / sizeof(VAR13->VAR28[0]))
        {
            FUN8(VAR2->VAR4.VAR29, VAR30, "", VAR8);
            return -1;
        }
        VAR13->VAR31 = VAR8;
        for (VAR11 = 0; VAR11 < VAR13->VAR31; VAR11++)
            VAR13->VAR28[VAR11] = FUN7(&VAR4->VAR14);
    }
    else if (VAR13->VAR23 != 2)
    {
        FUN8(VAR2->VAR4.VAR29, VAR30, "", VAR13->VAR23);
        return -1;
    }
    VAR8 = FUN4(&VAR4->VAR14);
    if (VAR8 > VAR32 - 2 || VAR8 >= 32)
    {
        FUN8(VAR2->VAR4.VAR29, VAR30, "");
        return -1;
    }
    VAR13->VAR33 = VAR8;
    VAR13->VAR34 = FUN3(&VAR4->VAR14);
    VAR9 = FUN4(&VAR4->VAR14) + 1;
    VAR10 = FUN4(&VAR4->VAR14) + 1;
    if (VAR9 >= VAR35 / 16 || VAR10 >= VAR35 / 16 || FUN9(NULL, 16 * VAR9, 16 * VAR10))
    {
        FUN8(VAR2->VAR4.VAR29, VAR30, "");
        return -1;
    }
    VAR13->VAR9 = VAR9;
    VAR13->VAR10 = VAR10;
    VAR13->VAR36 = FUN3(&VAR4->VAR14);
    if (!VAR13->VAR36)
        VAR13->VAR37 = FUN3(&VAR4->VAR14);
    else
        VAR13->VAR37 = 0;
    VAR13->VAR38 = FUN3(&VAR4->VAR14);
    if (VAR13->VAR37)
        FUN8(VAR2->VAR4.VAR29, VAR30, "");
    VAR13->VAR39 = FUN3(&VAR4->VAR14);
    if (VAR13->VAR39)
    {
        VAR13->VAR40 = FUN4(&VAR4->VAR14);
        VAR13->VAR41 = FUN4(&VAR4->VAR14);
        VAR13->VAR42 = FUN4(&VAR4->VAR14);
        VAR13->VAR43 = FUN4(&VAR4->VAR14);
        if (VAR13->VAR40 || VAR13->VAR42)
        {
            FUN8(VAR2->VAR4.VAR29, VAR30, "");
        }
        if (VAR13->VAR41 >= 8 || VAR13->VAR43 >= (8 >> !VAR13->VAR36))
        {
            FUN8(VAR2->VAR4.VAR29, VAR30, "");
        }
    }
    else
    {
        VAR13->VAR40 = VAR13->VAR41 = VAR13->VAR42 = VAR13->VAR43 = 0;
    }
    VAR13->VAR44 = FUN3(&VAR4->VAR14);
    if (VAR13->VAR44)
        FUN10(VAR2, VAR13);
    if (VAR4->VAR29->VAR45 & VAR46)
    {
        FUN8(VAR2->VAR4.VAR29, VAR47, "", VAR7, VAR13->VAR5, VAR13->VAR6, VAR13->VAR23, VAR13->VAR33, VAR13->VAR9, VAR13->VAR10, VAR13->VAR36 ? "" : (VAR13->VAR37 ? "" : ""), VAR13->VAR38 ? "" : "", VAR13->VAR40, VAR13->VAR41, VAR13->VAR42, VAR13->VAR43, VAR13->VAR44 ? "" : "", ((const char *[]){"", "", "", ""})[VAR13->VAR20]);
    }
    return 0;
}