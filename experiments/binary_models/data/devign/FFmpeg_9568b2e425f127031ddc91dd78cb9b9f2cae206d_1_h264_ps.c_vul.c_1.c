int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9;
    const VAR10 *VAR11;
    unsigned int VAR12 = FUN2(VAR2);
    VAR13 *VAR14;
    int VAR15;
    int VAR16;
    int VAR17;
    if (VAR12 >= VAR18)
    {
        FUN3(VAR4, VAR19, "", VAR12);
        return VAR20;
        VAR9 = FUN4(sizeof(*VAR14));
        if (!VAR9)
            return FUN5(VAR21);
        VAR14 = (VAR13 *)VAR9->VAR22;
        VAR14->VAR23 = VAR2->VAR24 - VAR2->VAR25;
        if (VAR14->VAR23 > sizeof(VAR14->VAR22))
        {
            FUN3(VAR4, VAR26, ""
                                          "" VAR27 "" VAR27 "",
                   VAR14->VAR23, sizeof(VAR14->VAR22));
            VAR14->VAR23 = sizeof(VAR14->VAR22);
            memcpy(VAR14->VAR22, VAR2->VAR25, VAR14->VAR23);
            VAR14->VAR28 = FUN6(VAR2);
            if ((unsigned)VAR14->VAR28 >= VAR29 || !VAR6->VAR30[VAR14->VAR28])
            {
                FUN3(VAR4, VAR19, "", VAR14->VAR28);
                VAR11 = (const VAR10 *)VAR6->VAR30[VAR14->VAR28]->VAR22;
                if (VAR11->VAR31 > 14)
                {
                    FUN3(VAR4, VAR19, "", VAR11->VAR31);
                }
                else if (VAR11->VAR31 == 11 || VAR11->VAR31 == 13)
                {
                    FUN3(VAR4, VAR19, "", VAR11->VAR31);
                    VAR17 = VAR32;
                    VAR14->VAR33 = FUN7(VAR2);
                    VAR14->VAR34 = FUN7(VAR2);
                    VAR14->VAR35 = FUN2(VAR2) + 1;
                    if (VAR14->VAR35 > 1)
                    {
                        VAR14->VAR36 = FUN2(VAR2);
                        FUN3(VAR4, VAR19, "");
                        switch (VAR14->VAR36)
                        {
                        case 0:
                            | for (VAR37 = 0; VAR37 <= VAR38; VAR37++) | | | | VAR39[VAR37] | 1 | FUN8(VAR40) | break;
                        case 2:
                            | for (VAR37 = 0; VAR37 < VAR38; VAR37++){ | | | | VAR41[VAR37] | 1 | FUN8(VAR40) | | VAR42[VAR37] | 1 | FUN8(VAR40) | | } | | | break;
                        case 3:
                        case 4:
                        case 5:
                            | VAR43 | 1 | FUN9(1) | | VAR44 | 1 | FUN8(VAR40) | break;
                        case 6:
                            | VAR45 | 1 | FUN8(VAR40) | | for (VAR37 = 0; VAR37 <= VAR45; VAR37++) | | | | VAR46[VAR37] | 1 | FUN9(VAR40) | break;
                            VAR14->VAR47[0] = FUN2(VAR2) + 1;
                            VAR14->VAR47[1] = FUN2(VAR2) + 1;
                            if (VAR14->VAR47[0] - 1 > 32 - 1 || VAR14->VAR47[1] - 1 > 32 - 1)
                            {
                                FUN3(VAR4, VAR19, "");
                                VAR15 = 6 * (VAR11->VAR31 - 8);
                                VAR14->VAR48 = FUN7(VAR2);
                                VAR14->VAR49 = FUN10(VAR2, 2);
                                VAR14->VAR50 = FUN11(VAR2) + 26 + VAR15;
                                VAR14->VAR51 = FUN11(VAR2) + 26 + VAR15;
                                VAR14->VAR52[0] = FUN11(VAR2);
                                if (VAR14->VAR52[0] < -12 || VAR14->VAR52[0] > 12)
                                {
                                    VAR14->VAR53 = FUN7(VAR2);
                                    VAR14->VAR54 = FUN7(VAR2);
                                    VAR14->VAR55 = FUN7(VAR2);
                                    VAR14->VAR56 = 0;
                                    memcpy(VAR14->VAR57, VAR11->VAR57, sizeof(VAR14->VAR57));
                                    memcpy(VAR14->VAR58, VAR11->VAR58, sizeof(VAR14->VAR58));
                                    VAR16 = VAR7 - FUN12(VAR2);
                                    if (VAR16 > 0 && FUN13(VAR11, VAR4))
                                    {
                                        VAR14->VAR56 = FUN7(VAR2);
                                        FUN14(VAR2, VAR11, VAR14, 0, VAR14->VAR57, VAR14->VAR58);
                                        VAR14->VAR52[1] = FUN11(VAR2);
                                    }
                                    else
                                    {
                                        VAR14->VAR52[1] = VAR14->VAR52[0];
                                        FUN15(VAR14, 0, VAR14->VAR52[0], VAR11->VAR31);
                                        FUN15(VAR14, 1, VAR14->VAR52[1], VAR11->VAR31);
                                        FUN16(VAR14, VAR11);
                                        if (VAR14->VAR52[0] != VAR14->VAR52[1])
                                            VAR14->VAR59 = 1;
                                        if (VAR4->VAR60 & VAR61)
                                        {
                                            FUN3(VAR4, VAR62, "", VAR12, VAR14->VAR28, VAR14->VAR33 ? "" : "", VAR14->VAR35, VAR14->VAR47[0], VAR14->VAR47[1], VAR14->VAR48 ? "" : "", VAR14->VAR50, VAR14->VAR51, VAR14->VAR52[0], VAR14->VAR52[1], VAR14->VAR53 ? "" : "", VAR14->VAR54 ? "" : "", VAR14->VAR55 ? "" : "", VAR14->VAR56 ? "" : "");
                                            FUN17(VAR6, VAR12);
                                            VAR6->VAR63[VAR12] = VAR9;
                                            return 0;
                                        VAR64:
                                            FUN18(&VAR9);
                                            return VAR17;