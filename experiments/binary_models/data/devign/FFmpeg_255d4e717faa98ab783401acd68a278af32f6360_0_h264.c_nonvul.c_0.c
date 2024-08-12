static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    unsigned int VAR6, VAR7 = FUN2(&VAR5->VAR8);
    VAR9 *VAR10;
    if (VAR7 >= VAR11)
    {
        FUN3(VAR2->VAR5.VAR12, VAR13, "", VAR7);
        return -1;
    }
    VAR6 = FUN2(&VAR5->VAR8);
    if (VAR6 >= VAR14 || VAR2->VAR15[VAR6] == NULL)
    {
        FUN3(VAR2->VAR5.VAR12, VAR13, "");
        return -1;
    }
    VAR10 = FUN4(sizeof(VAR9));
    if (VAR10 == NULL)
        return -1;
    VAR10->VAR16 = VAR6;
    VAR10->VAR17 = FUN5(&VAR5->VAR8);
    VAR10->VAR18 = FUN5(&VAR5->VAR8);
    VAR10->VAR19 = FUN2(&VAR5->VAR8) + 1;
    if (VAR10->VAR19 > 1)
    {
        VAR10->VAR20 = FUN2(&VAR5->VAR8);
        FUN3(VAR2->VAR5.VAR12, VAR13, "");
        switch (VAR10->VAR20)
        {
        case 0:
            | for (VAR21 = 0; VAR21 <= VAR22; VAR21++) | | | | VAR23[VAR21] | 1 | FUN6(VAR24) | break;
        case 2:
            | for (VAR21 = 0; VAR21 < VAR22; VAR21++) | | | | { | | | | VAR25[VAR21] | 1 | FUN6(VAR24) | | VAR26[VAR21] | 1 | FUN6(VAR24) | | } | | | break;
        case 3:
        case 4:
        case 5:
            | VAR27 | 1 | FUN7(1) | | VAR28 | 1 | FUN6(VAR24) | break;
        case 6:
            | VAR29 | 1 | FUN6(VAR24) | | for (VAR21 = 0; VAR21 <= VAR29; VAR21++ | | | |) | | | | VAR30[VAR21] | 1 | FUN7(VAR24) | break;
        }
    }
    VAR10->VAR31[0] = FUN2(&VAR5->VAR8) + 1;
    VAR10->VAR31[1] = FUN2(&VAR5->VAR8) + 1;
    if (VAR10->VAR31[0] - 1 > 32 - 1 || VAR10->VAR31[1] - 1 > 32 - 1)
    {
        FUN3(VAR2->VAR5.VAR12, VAR13, "");
        VAR10->VAR31[0] = VAR10->VAR31[1] = 1;
        goto VAR32;
    }
    VAR10->VAR33 = FUN5(&VAR5->VAR8);
    VAR10->VAR34 = FUN8(&VAR5->VAR8, 2);
    VAR10->VAR35 = FUN9(&VAR5->VAR8) + 26;
    VAR10->VAR36 = FUN9(&VAR5->VAR8) + 26;
    VAR10->VAR37[0] = FUN9(&VAR5->VAR8);
    VAR10->VAR38 = FUN5(&VAR5->VAR8);
    VAR10->VAR39 = FUN5(&VAR5->VAR8);
    VAR10->VAR40 = FUN5(&VAR5->VAR8);
    VAR10->VAR41 = 0;
    VAR2->VAR42 = -1;
    memcpy(VAR10->VAR43, VAR2->VAR15[VAR10->VAR16]->VAR43, sizeof(VAR10->VAR43));
    memcpy(VAR10->VAR44, VAR2->VAR15[VAR10->VAR16]->VAR44, sizeof(VAR10->VAR44));
    if (FUN10(&VAR5->VAR8) < VAR3)
    {
        VAR10->VAR41 = FUN5(&VAR5->VAR8);
        FUN11(VAR2, VAR2->VAR15[VAR10->VAR16], VAR10, 0, VAR10->VAR43, VAR10->VAR44);
        VAR10->VAR37[1] = FUN9(&VAR5->VAR8);
    }
    else
    {
        VAR10->VAR37[1] = VAR10->VAR37[0];
    }
    FUN12(VAR10, 0, VAR10->VAR37[0]);
    FUN12(VAR10, 1, VAR10->VAR37[1]);
    if (VAR10->VAR37[0] != VAR10->VAR37[1])
        VAR2->VAR10.VAR45 = 1;
    if (VAR5->VAR12->VAR46 & VAR47)
    {
        FUN3(VAR2->VAR5.VAR12, VAR48, "", VAR7, VAR10->VAR16, VAR10->VAR17 ? "" : "", VAR10->VAR19, VAR10->VAR31[0], VAR10->VAR31[1], VAR10->VAR33 ? "" : "", VAR10->VAR35, VAR10->VAR36, VAR10->VAR37[0], VAR10->VAR37[1], VAR10->VAR38 ? "" : "", VAR10->VAR39 ? "" : "", VAR10->VAR40 ? "" : "", VAR10->VAR41 ? "" : "");
    }
    FUN13(VAR2->VAR49[VAR7]);
    VAR2->VAR49[VAR7] = VAR10;
    return 0;
VAR32:
    FUN13(VAR10);
    return -1;
}