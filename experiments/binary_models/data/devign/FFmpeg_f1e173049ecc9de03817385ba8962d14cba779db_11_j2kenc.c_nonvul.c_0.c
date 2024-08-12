static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    Jpeg2000T1Context VAR10;
    VAR11 *VAR12 = &VAR2->VAR12;
    for (VAR6 = 0; VAR6 < VAR2->VAR13; VAR6++)
    {
        VAR14 *VAR15 = VAR2->VAR4[VAR5].VAR15 + VAR6;
        VAR10.VAR16 = (1 << VAR12->VAR17) + 2;
        FUN2(VAR2->VAR18, VAR19, "");
        if ((VAR9 = FUN3(&VAR15->VAR20, VAR15->VAR21)) < 0)
            return VAR9;
        FUN2(VAR2->VAR18, VAR19, "");
        for (VAR7 = 0; VAR7 < VAR12->VAR22; VAR7++)
        {
            VAR23 *VAR24 = VAR15->VAR24 + VAR7;
            for (VAR8 = 0; VAR8 < VAR24->VAR25; VAR8++)
            {
                VAR26 *VAR27 = VAR24->VAR27 + VAR8;
                VAR28 *VAR29 = VAR27->VAR29;
                int VAR30, VAR31, VAR32 = 0, VAR33, VAR34, VAR35, VAR36, VAR37, VAR38, VAR39;
                VAR37 = VAR8 == 0 ? 0 : VAR15->VAR24[VAR7 - 1].VAR40[1][1] - VAR15->VAR24[VAR7 - 1].VAR40[1][0];
                VAR36 = VAR37;
                VAR38 = FUN4(FUN5(VAR27->VAR40[1][0] + 1, VAR27->VAR41) << VAR27->VAR41, VAR27->VAR40[1][1]) - VAR27->VAR40[1][0] + VAR37;
                if (VAR27->VAR40[0][0] == VAR27->VAR40[0][1] || VAR27->VAR40[1][0] == VAR27->VAR40[1][1])
                    continue;
                VAR39 = VAR8 + (VAR7 > 0);
                for (VAR31 = 0; VAR31 < VAR29->VAR42; VAR31++)
                {
                    if (VAR7 == 0 || VAR8 == 1)
                        VAR33 = 0;
                    else
                        VAR33 = VAR15->VAR24[VAR7 - 1].VAR40[0][1] - VAR15->VAR24[VAR7 - 1].VAR40[0][0];
                    VAR34 = VAR33;
                    VAR35 = FUN4(FUN5(VAR27->VAR40[0][0] + 1, VAR27->VAR17) << VAR27->VAR17, VAR27->VAR40[0][1]) - VAR27->VAR40[0][0] + VAR33;
                    for (VAR30 = 0; VAR30 < VAR29->VAR43; VAR30++, VAR32++)
                    {
                        int VAR44, VAR45;
                        if (VAR12->VAR46 == VAR47)
                        {
                            for (VAR44 = VAR37; VAR44 < VAR38; VAR44++)
                            {
                                int *VAR48 = VAR10.VAR49 + (VAR44 - VAR37) * VAR10.VAR16;
                                for (VAR45 = VAR33; VAR45 < VAR35; VAR45++)
                                {
                                    *VAR48++ = VAR15->VAR21[(VAR15->VAR40[0][1] - VAR15->VAR40[0][0]) * VAR44 + VAR45] << VAR50;
                                }
                            }
                        }
                        else
                        {
                            for (VAR44 = VAR37; VAR44 < VAR38; VAR44++)
                            {
                                int *VAR48 = VAR10.VAR49 + (VAR44 - VAR37) * VAR10.VAR16;
                                for (VAR45 = VAR33; VAR45 < VAR35; VAR45++)
                                {
                                    *VAR48 = (VAR15->VAR21[(VAR15->VAR40[0][1] - VAR15->VAR40[0][0]) * VAR44 + VAR45]);
                                    *VAR48 = (VAR51)*VAR48 * (VAR51)(16384 * 65536 / VAR27->VAR52) >> 15 - VAR50;
                                    VAR48++;
                                }
                            }
                        }
                        FUN6(VAR2, &VAR10, VAR29->VAR53 + VAR32, VAR4, VAR35 - VAR33, VAR38 - VAR37, VAR39, VAR12->VAR22 - VAR7 - 1);
                        VAR33 = VAR35;
                        VAR35 = FUN4(VAR35 + (1 << VAR27->VAR17), VAR27->VAR40[0][1] - VAR27->VAR40[0][0] + VAR34);
                    }
                    VAR37 = VAR38;
                    VAR38 = FUN4(VAR38 + (1 << VAR27->VAR41), VAR27->VAR40[1][1] - VAR27->VAR40[1][0] + VAR36);
                }
            }
        }
        FUN2(VAR2->VAR18, VAR19, "");
    }
    FUN2(VAR2->VAR18, VAR19, "");
    FUN7(VAR2, VAR4);
    if ((VAR9 = FUN8(VAR2, VAR4, VAR5)) < 0)
        return VAR9;
    FUN2(VAR2->VAR18, VAR19, "");
    return 0;
}