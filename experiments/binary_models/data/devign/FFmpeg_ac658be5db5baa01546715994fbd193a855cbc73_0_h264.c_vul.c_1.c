static inline int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    int VAR5, VAR6;
    int VAR7, VAR8;
    VAR9 *VAR10;
    VAR5 = FUN2(&VAR4->VAR11, 8);
    FUN3(&VAR4->VAR11);
    FUN3(&VAR4->VAR11);
    FUN3(&VAR4->VAR11);
    FUN3(&VAR4->VAR11);
    FUN2(&VAR4->VAR11, 4);
    VAR6 = FUN2(&VAR4->VAR11, 8);
    VAR7 = FUN4(&VAR4->VAR11);
    VAR10 = &VAR2->VAR12[VAR7];
    VAR10->VAR5 = VAR5;
    VAR10->VAR6 = VAR6;
    if (VAR10->VAR5 >= 100)
    {
        if (FUN4(&VAR4->VAR11) == 3)
            FUN3(&VAR4->VAR11);
        FUN4(&VAR4->VAR11);
        FUN4(&VAR4->VAR11);
        VAR10->VAR13 = FUN3(&VAR4->VAR11);
        FUN5(VAR2, VAR10, NULL, 1, VAR10->VAR14, VAR10->VAR15);
    }
    else
        VAR10->VAR16 = 0;
    VAR10->VAR17 = FUN4(&VAR4->VAR11) + 4;
    VAR10->VAR18 = FUN4(&VAR4->VAR11);
    if (VAR10->VAR18 == 0)
    {
        VAR10->VAR19 = FUN4(&VAR4->VAR11) + 4;
    }
    else if (VAR10->VAR18 == 1)
    {
        VAR10->VAR20 = FUN3(&VAR4->VAR11);
        VAR10->VAR21 = FUN6(&VAR4->VAR11);
        VAR10->VAR22 = FUN6(&VAR4->VAR11);
        VAR10->VAR23 = FUN4(&VAR4->VAR11);
        for (VAR8 = 0; VAR8 < VAR10->VAR23; VAR8++)
            VAR10->VAR24[VAR8] = FUN6(&VAR4->VAR11);
    }
    if (VAR10->VAR18 > 2)
    {
        FUN7(VAR2->VAR4.VAR25, VAR26, "", VAR10->VAR18);
        return -1;
    }
    VAR10->VAR27 = FUN4(&VAR4->VAR11);
    if (VAR10->VAR27 > VAR28 - 2)
    {
        FUN7(VAR2->VAR4.VAR25, VAR26, "");
    }
    VAR10->VAR29 = FUN3(&VAR4->VAR11);
    VAR10->VAR30 = FUN4(&VAR4->VAR11) + 1;
    VAR10->VAR31 = FUN4(&VAR4->VAR11) + 1;
    if ((unsigned)VAR10->VAR30 >= VAR32 / 16 || (unsigned)VAR10->VAR31 >= VAR32 / 16 || FUN8(NULL, 16 * VAR10->VAR30, 16 * VAR10->VAR31))
        return -1;
    VAR10->VAR33 = FUN3(&VAR4->VAR11);
    if (!VAR10->VAR33)
        VAR10->VAR34 = FUN3(&VAR4->VAR11);
    else
        VAR10->VAR34 = 0;
    VAR10->VAR35 = FUN3(&VAR4->VAR11);
    if (VAR10->VAR34)
        FUN7(VAR2->VAR4.VAR25, VAR26, "");
    if (!VAR10->VAR35 && VAR10->VAR34)
        FUN7(VAR2->VAR4.VAR25, VAR26, "");
    VAR10->VAR36 = FUN3(&VAR4->VAR11);
    if (VAR10->VAR36)
    {
        VAR10->VAR37 = FUN4(&VAR4->VAR11);
        VAR10->VAR38 = FUN4(&VAR4->VAR11);
        VAR10->VAR39 = FUN4(&VAR4->VAR11);
        VAR10->VAR40 = FUN4(&VAR4->VAR11);
        if (VAR10->VAR37 || VAR10->VAR39)
        {
            FUN7(VAR2->VAR4.VAR25, VAR26, "");
        }
    }
    else
    {
        VAR10->VAR37 = VAR10->VAR38 = VAR10->VAR39 = VAR10->VAR40 = 0;
    }
    VAR10->VAR41 = FUN3(&VAR4->VAR11);
    if (VAR10->VAR41)
        FUN9(VAR2, VAR10);
    if (VAR4->VAR25->VAR42 & VAR43)
    {
        FUN7(VAR2->VAR4.VAR25, VAR44, "", VAR7, VAR10->VAR5, VAR10->VAR6, VAR10->VAR18, VAR10->VAR27, VAR10->VAR30, VAR10->VAR31, VAR10->VAR33 ? "" : (VAR10->VAR34 ? "" : ""), VAR10->VAR35 ? "" : "", VAR10->VAR37, VAR10->VAR38, VAR10->VAR39, VAR10->VAR40, VAR10->VAR41 ? "" : "");
    }
    return 0;
}