int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    unsigned int VAR6 = FUN2(&VAR5->VAR7);
    VAR8 *VAR9;
    const int VAR10 = 6 * (VAR2->VAR11.VAR12 - 8);
    int VAR13;
    if (VAR6 >= VAR14)
    {
        FUN3(VAR2->VAR5.VAR15, VAR16, "", VAR6);
        return -1;
    }
    VAR9 = FUN4(sizeof(VAR8));
    if (VAR9 == NULL)
        return -1;
    VAR9->VAR17 = FUN5(&VAR5->VAR7);
    if ((unsigned)VAR9->VAR17 >= VAR18 || VAR2->VAR19[VAR9->VAR17] == NULL)
    {
        FUN3(VAR2->VAR5.VAR15, VAR16, "");
        goto VAR20;
    }
    VAR9->VAR21 = FUN6(&VAR5->VAR7);
    VAR9->VAR22 = FUN6(&VAR5->VAR7);
    VAR9->VAR23 = FUN2(&VAR5->VAR7) + 1;
    if (VAR9->VAR23 > 1)
    {
        VAR9->VAR24 = FUN2(&VAR5->VAR7);
        FUN3(VAR2->VAR5.VAR15, VAR16, "");
        switch (VAR9->VAR24)
        {
        case 0:
            | for (VAR25 = 0; VAR25 <= VAR26; VAR25++) | | | | VAR27[VAR25] | 1 | FUN7(VAR28) | break;
        case 2:
            | for (VAR25 = 0; VAR25 < VAR26; VAR25++) | | | | { | | | | VAR29[VAR25] | 1 | FUN7(VAR28) | | VAR30[VAR25] | 1 | FUN7(VAR28) | | } | | | break;
        case 3:
        case 4:
        case 5:
            | VAR31 | 1 | FUN8(1) | | VAR32 | 1 | FUN7(VAR28) | break;
        case 6:
            | VAR33 | 1 | FUN7(VAR28) | | for (VAR25 = 0; VAR25 <= VAR33; VAR25++ | | | |) | | | | VAR34[VAR25] | 1 | FUN8(VAR28) | break;
        }
    }
    VAR9->VAR35[0] = FUN2(&VAR5->VAR7) + 1;
    VAR9->VAR35[1] = FUN2(&VAR5->VAR7) + 1;
    if (VAR9->VAR35[0] - 1 > 32 - 1 || VAR9->VAR35[1] - 1 > 32 - 1)
    {
        FUN3(VAR2->VAR5.VAR15, VAR16, "");
        goto VAR20;
    }
    VAR9->VAR36 = FUN6(&VAR5->VAR7);
    VAR9->VAR37 = FUN9(&VAR5->VAR7, 2);
    VAR9->VAR38 = FUN10(&VAR5->VAR7) + 26 + VAR10;
    VAR9->VAR39 = FUN10(&VAR5->VAR7) + 26 + VAR10;
    VAR9->VAR40[0] = FUN10(&VAR5->VAR7);
    VAR9->VAR41 = FUN6(&VAR5->VAR7);
    VAR9->VAR42 = FUN6(&VAR5->VAR7);
    VAR9->VAR43 = FUN6(&VAR5->VAR7);
    VAR9->VAR44 = 0;
    VAR2->VAR45 = -1;
    memcpy(VAR9->VAR46, VAR2->VAR19[VAR9->VAR17]->VAR46, sizeof(VAR9->VAR46));
    memcpy(VAR9->VAR47, VAR2->VAR19[VAR9->VAR17]->VAR47, sizeof(VAR9->VAR47));
    VAR13 = VAR3 - FUN11(&VAR5->VAR7);
    if (VAR13 > 0 && FUN12(VAR2, VAR9))
    {
        VAR9->VAR44 = FUN6(&VAR5->VAR7);
        FUN13(VAR2, VAR2->VAR19[VAR9->VAR17], VAR9, 0, VAR9->VAR46, VAR9->VAR47);
        VAR9->VAR40[1] = FUN10(&VAR5->VAR7);
    }
    else
    {
        VAR9->VAR40[1] = VAR9->VAR40[0];
    }
    FUN14(VAR9, 0, VAR9->VAR40[0], VAR2->VAR11.VAR12);
    FUN14(VAR9, 1, VAR9->VAR40[1], VAR2->VAR11.VAR12);
    if (VAR9->VAR40[0] != VAR9->VAR40[1])
        VAR9->VAR48 = 1;
    if (VAR5->VAR15->VAR49 & VAR50)
    {
        FUN3(VAR2->VAR5.VAR15, VAR51, "", VAR6, VAR9->VAR17, VAR9->VAR21 ? "" : "", VAR9->VAR23, VAR9->VAR35[0], VAR9->VAR35[1], VAR9->VAR36 ? "" : "", VAR9->VAR38, VAR9->VAR39, VAR9->VAR40[0], VAR9->VAR40[1], VAR9->VAR41 ? "" : "", VAR9->VAR42 ? "" : "", VAR9->VAR43 ? "" : "", VAR9->VAR44 ? "" : "");
    }
    FUN15(VAR2->VAR52[VAR6]);
    VAR2->VAR52[VAR6] = VAR9;
    return 0;
VAR20:
    FUN15(VAR9);
    return -1;
}