static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9, *VAR10[7];
    int VAR11, VAR12;
    int VAR13;
    VAR6->VAR14 = FUN2(VAR4);
    if (VAR6->VAR14 != FUN3('', '', '', '') && VAR6->VAR14 != FUN3('', '', '', ''))
        VAR6->VAR15 = FUN2(VAR4);
    VAR6->VAR16 = FUN2(VAR4);
    VAR6->VAR17 = FUN2(VAR4);
    VAR6->VAR18 = (VAR19)FUN2(VAR4);
    VAR6->VAR20 = FUN2(VAR4);
    if (VAR6->VAR20 & VAR21)
        VAR6->VAR17++;
    for (VAR11 = 0; VAR11 < 7; VAR11++)
        VAR6->VAR22[VAR11] = FUN2(VAR4);
    VAR6->VAR23 = FUN2(VAR4);
    if (VAR6->VAR23 >= VAR24 / 4)
    {
        FUN4(VAR2, VAR25, "");
        VAR6->VAR26 = FUN2(VAR4);
        VAR6->VAR27 = FUN2(VAR4);
        VAR6->VAR28 = FUN2(VAR4);
        VAR6->VAR29 = FUN2(VAR4);
        for (VAR11 = 0; VAR11 < 7; VAR11++)
        {
            VAR6->VAR30[VAR11] = FUN5(VAR4);
            VAR6->VAR31[VAR11] = FUN6(VAR4);
            VAR6->VAR32 = FUN2(VAR4);
            if (VAR6->VAR17 > 0xFFFFFF)
            {
                FUN4(VAR2, VAR25, "" VAR33 "", VAR6->VAR17);
                VAR6->VAR34 = FUN7(VAR6->VAR17, sizeof(*VAR6->VAR34));
                VAR6->VAR35 = FUN8(VAR6->VAR17);
                if (!VAR6->VAR34 || !VAR6->VAR35)
                {
                    FUN9(&VAR6->VAR34);
                    FUN9(&VAR6->VAR35);
                    return FUN10(VAR36);
                    VAR6->VAR37 = (VAR6->VAR14 != FUN3('', '', '', ''));
                    for (VAR11 = 0; VAR11 < VAR6->VAR17; VAR11++)
                    {
                        VAR6->VAR34[VAR11] = FUN2(VAR4);
                        for (VAR11 = 0; VAR11 < VAR6->VAR17; VAR11++)
                        {
                            VAR6->VAR35[VAR11] = FUN6(VAR4);
                            VAR9 = FUN11(VAR2, NULL);
                            if (!VAR9)
                                return FUN10(VAR36);
                            VAR6->VAR38 = VAR9->VAR39;
                            VAR9->VAR40->VAR15 = VAR6->VAR15;
                            VAR9->VAR40->VAR16 = VAR6->VAR16;
                            VAR9->VAR40->VAR41 = VAR42;
                            VAR9->VAR40->VAR43 = VAR44;
                            VAR9->VAR40->VAR45 = VAR46;
                            VAR9->VAR40->VAR47 = VAR6->VAR14;
                            if (VAR6->VAR18 < 0)
                                VAR6->VAR18 = -VAR6->VAR18;
                            else
                                VAR6->VAR18 *= 100;
                            VAR13 = 100000;
                            FUN12(&VAR13, &VAR6->VAR18, VAR13, VAR6->VAR18, (1UL << 31) - 1);
                            FUN13(VAR9, 33, VAR6->VAR18, VAR13);
                            VAR9->VAR48 = VAR6->VAR17;
                            for (VAR11 = 0; VAR11 < 7; VAR11++)
                            {
                                VAR6->VAR49[VAR11] = -1;
                                if (VAR6->VAR30[VAR11])
                                {
                                    VAR10[VAR11] = FUN11(VAR2, NULL);
                                    if (!VAR10[VAR11])
                                        return FUN10(VAR36);
                                    VAR6->VAR49[VAR11] = VAR10[VAR11]->VAR39;
                                    VAR10[VAR11]->VAR40->VAR43 = VAR50;
                                    if (VAR6->VAR31[VAR11] & VAR51)
                                    {
                                        VAR10[VAR11]->VAR40->VAR45 = VAR52;
                                    }
                                    else if (VAR6->VAR31[VAR11] & VAR53)
                                    {
                                        VAR10[VAR11]->VAR40->VAR45 = VAR54;
                                    }
                                    else if (VAR6->VAR31[VAR11] & VAR55)
                                    {
                                        VAR10[VAR11]->VAR40->VAR45 = VAR56;
                                        VAR10[VAR11]->VAR40->VAR47 = FUN3('', '', '', '');
                                    }
                                    else
                                    {
                                        VAR10[VAR11]->VAR40->VAR45 = VAR57;
                                        if (VAR6->VAR31[VAR11] & VAR58)
                                        {
                                            VAR10[VAR11]->VAR40->VAR59 = 2;
                                            VAR10[VAR11]->VAR40->VAR60 = VAR61;
                                        }
                                        else
                                        {
                                            VAR10[VAR11]->VAR40->VAR59 = 1;
                                            VAR10[VAR11]->VAR40->VAR60 = VAR62;
                                            VAR10[VAR11]->VAR40->VAR63 = VAR6->VAR30[VAR11];
                                            VAR10[VAR11]->VAR40->VAR64 = (VAR6->VAR31[VAR11] & VAR65) ? 16 : 8;
                                            if (VAR10[VAR11]->VAR40->VAR64 == 16 && VAR10[VAR11]->VAR40->VAR45 == VAR57)
                                                VAR10[VAR11]->VAR40->VAR45 = VAR66;
                                            FUN13(VAR10[VAR11], 64, 1, VAR10[VAR11]->VAR40->VAR63 * VAR10[VAR11]->VAR40->VAR59 * VAR10[VAR11]->VAR40->VAR64 / 8);
                                            if (FUN14(VAR9->VAR40, VAR6->VAR23 + 16))
                                            {
                                                FUN4(VAR2, VAR25, "" VAR33 "", VAR6->VAR23 + 16);
                                                FUN9(&VAR6->VAR34);
                                                FUN9(&VAR6->VAR35);
                                                return FUN10(VAR36);
                                                VAR12 = FUN15(VAR4, VAR9->VAR40->VAR67 + 16, VAR9->VAR40->VAR68 - 16);
                                                if (VAR12 != VAR9->VAR40->VAR68 - 16)
                                                {
                                                    FUN9(&VAR6->VAR34);
                                                    FUN9(&VAR6->VAR35);
                                                    return FUN10(VAR69);
                                                    ((VAR19 *)VAR9->VAR40->VAR67)[0] = FUN16(VAR6->VAR26);
                                                    ((VAR19 *)VAR9->VAR40->VAR67)[1] = FUN16(VAR6->VAR27);
                                                    ((VAR19 *)VAR9->VAR40->VAR67)[2] = FUN16(VAR6->VAR28);
                                                    ((VAR19 *)VAR9->VAR40->VAR67)[3] = FUN16(VAR6->VAR29);
                                                    VAR6->VAR70 = -1;
                                                    VAR6->VAR71 = FUN17(VAR4);
                                                    return 0