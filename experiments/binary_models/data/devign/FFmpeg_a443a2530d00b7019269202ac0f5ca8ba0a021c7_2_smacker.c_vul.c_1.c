static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8 = (VAR7 *)VAR2->VAR9;
    VAR10 *VAR11, *VAR12[7];
    int VAR13, VAR14;
    int VAR15;
    VAR8->VAR16 = FUN2(VAR6);
    if (VAR8->VAR16 != FUN3('', '', '', '') && VAR8->VAR16 != FUN3('', '', '', ''))
        VAR8->VAR17 = FUN2(VAR6);
    VAR8->VAR18 = FUN2(VAR6);
    VAR8->VAR19 = FUN2(VAR6);
    VAR8->VAR20 = (VAR21)FUN2(VAR6);
    VAR8->VAR22 = FUN2(VAR6);
    for (VAR13 = 0; VAR13 < 7; VAR13++)
        VAR8->VAR23[VAR13] = FUN2(VAR6);
    VAR8->VAR24 = FUN2(VAR6);
    VAR8->VAR25 = FUN2(VAR6);
    VAR8->VAR26 = FUN2(VAR6);
    VAR8->VAR27 = FUN2(VAR6);
    VAR8->VAR28 = FUN2(VAR6);
    for (VAR13 = 0; VAR13 < 7; VAR13++)
        VAR8->VAR29[VAR13] = FUN2(VAR6);
    VAR8->VAR30 = FUN2(VAR6);
    if (VAR8->VAR19 > 0xFFFFFF)
    {
        FUN4(VAR2, VAR31, "", VAR8->VAR19);
        VAR8->VAR32 = FUN5(VAR8->VAR19 * 4);
        VAR8->VAR33 = FUN5(VAR8->VAR19);
        VAR8->VAR34 = (VAR8->VAR16 != FUN3('', '', '', ''));
        for (VAR13 = 0; VAR13 < VAR8->VAR19; VAR13++)
        {
            VAR8->VAR32[VAR13] = FUN2(VAR6);
            for (VAR13 = 0; VAR13 < VAR8->VAR19; VAR13++)
            {
                VAR8->VAR33[VAR13] = FUN6(VAR6);
                VAR11 = FUN7(VAR2, 0);
                if (!VAR11)
                    VAR8->VAR35 = VAR11->VAR36;
                VAR11->VAR37->VAR17 = VAR8->VAR17;
                VAR11->VAR37->VAR18 = VAR8->VAR18;
                VAR11->VAR37->VAR38 = VAR39;
                VAR11->VAR37->VAR40 = VAR41;
                VAR11->VAR37->VAR42 = VAR43;
                VAR11->VAR37->VAR44 = VAR8->VAR34;
                if (VAR8->VAR20 < 0)
                    VAR8->VAR20 = -VAR8->VAR20;
                else
                    VAR8->VAR20 *= 100;
                VAR15 = 100000;
                FUN8(&VAR15, &VAR8->VAR20, VAR15, VAR8->VAR20, (1UL << 31) - 1);
                FUN9(VAR11, 33, VAR8->VAR20, VAR15);
                for (VAR13 = 0; VAR13 < 7; VAR13++)
                {
                    VAR8->VAR45[VAR13] = -1;
                    if ((VAR8->VAR29[VAR13] & 0xFFFFFF) && !(VAR8->VAR29[VAR13] & VAR46))
                    {
                        VAR12[VAR13] = FUN7(VAR2, 0);
                        VAR8->VAR45[VAR13] = VAR12[VAR13]->VAR36;
                        FUN9(VAR12[VAR13], 33, VAR8->VAR20, VAR15);
                        VAR12[VAR13]->VAR37->VAR40 = VAR47;
                        VAR12[VAR13]->VAR37->VAR42 = (VAR8->VAR29[VAR13] & VAR48) ? VAR49 : VAR50;
                        VAR12[VAR13]->VAR37->VAR44 = 0;
                        VAR12[VAR13]->VAR37->VAR51 = (VAR8->VAR29[VAR13] & VAR52) ? 2 : 1;
                        VAR12[VAR13]->VAR37->VAR53 = VAR8->VAR29[VAR13] & 0xFFFFFF;
                        VAR12[VAR13]->VAR37->VAR54 = (VAR8->VAR29[VAR13] & VAR55) ? 16 : 8;
                        if (VAR12[VAR13]->VAR37->VAR54 == 16 && VAR12[VAR13]->VAR37->VAR42 == VAR50)
                            VAR12[VAR13]->VAR37->VAR42 = VAR56;
                        VAR11->VAR37->VAR57 = FUN5(VAR8->VAR24 + 16);
                        VAR11->VAR37->VAR58 = VAR8->VAR24 + 16;
                        if (!VAR11->VAR37->VAR57)
                        {
                            FUN4(VAR2, VAR31, "", VAR8->VAR24 + 16);
                            FUN10(VAR8->VAR32);
                            FUN10(VAR8->VAR33);
                            VAR14 = FUN11(VAR6, VAR11->VAR37->VAR57 + 16, VAR11->VAR37->VAR58 - 16);
                            if (VAR14 != VAR11->VAR37->VAR58 - 16)
                            {
                                FUN10(VAR8->VAR32);
                                FUN10(VAR8->VAR33);
                                return VAR59;
                                ((VAR21 *)VAR11->VAR37->VAR57)[0] = FUN12(VAR8->VAR25);
                                ((VAR21 *)VAR11->VAR37->VAR57)[1] = FUN12(VAR8->VAR26);
                                ((VAR21 *)VAR11->VAR37->VAR57)[2] = FUN12(VAR8->VAR27);
                                ((VAR21 *)VAR11->VAR37->VAR57)[3] = FUN12(VAR8->VAR28);
                                VAR8->VAR60 = -1;
                                VAR8->VAR61 = FUN13(VAR6);
                                return 0