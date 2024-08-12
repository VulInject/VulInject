static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    Jpeg2000T1Context VAR10;
    VAR11 *VAR12 = &VAR2->VAR12;
    for (VAR6 = 0; VAR6 < VAR2->VAR13; VAR6++)
    {
        VAR14 *VAR15 = VAR2->VAR4[VAR5].VAR15 + VAR6;
        FUN2(VAR2->VAR16, VAR17, "");
        if (VAR9 = FUN3(&VAR15->VAR18, VAR15->VAR19))
            return VAR9;
        FUN2(VAR2->VAR16, VAR17, "");
        for (VAR7 = 0; VAR7 < VAR12->VAR20; VAR7++)
        {
            VAR21 *VAR22 = VAR15->VAR22 + VAR7;
            for (VAR8 = 0; VAR8 < VAR22->VAR23; VAR8++)
            {
                VAR24 *VAR25 = VAR22->VAR25 + VAR8;
                VAR26 *VAR27 = VAR25->VAR27;
                int VAR28, VAR29, VAR30 = 0, VAR31, VAR32, VAR33, VAR34, VAR35, VAR36, VAR37;
                VAR35 = VAR8 == 0 ? 0 : VAR15->VAR22[VAR7 - 1].VAR38[1][1] - VAR15->VAR22[VAR7 - 1].VAR38[1][0];
                VAR34 = VAR35;
                VAR36 = FUN4(FUN5(VAR25->VAR38[1][0] + 1, VAR25->VAR39) << VAR25->VAR39, VAR25->VAR38[1][1]) - VAR25->VAR38[1][0] + VAR35;
                if (VAR25->VAR38[0][0] == VAR25->VAR38[0][1] || VAR25->VAR38[1][0] == VAR25->VAR38[1][1])
                    continue;
                VAR37 = VAR8 + (VAR7 > 0);
                for (VAR29 = 0; VAR29 < VAR27->VAR40; VAR29++)
                {
                    if (VAR7 == 0 || VAR8 == 1)
                        VAR31 = 0;
                    else
                        VAR31 = VAR15->VAR22[VAR7 - 1].VAR38[0][1] - VAR15->VAR22[VAR7 - 1].VAR38[0][0];
                    VAR32 = VAR31;
                    VAR33 = FUN4(FUN5(VAR25->VAR38[0][0] + 1, VAR25->VAR41) << VAR25->VAR41, VAR25->VAR38[0][1]) - VAR25->VAR38[0][0] + VAR31;
                    for (VAR28 = 0; VAR28 < VAR27->VAR42; VAR28++, VAR30++)
                    {
                        int VAR43, VAR44;
                        if (VAR12->VAR45 == VAR46)
                        {
                            for (VAR43 = VAR35; VAR43 < VAR36; VAR43++)
                            {
                                int *VAR47 = VAR10.VAR48[VAR43 - VAR35];
                                for (VAR44 = VAR31; VAR44 < VAR33; VAR44++)
                                {
                                    *VAR47++ = VAR15->VAR19[(VAR15->VAR38[0][1] - VAR15->VAR38[0][0]) * VAR43 + VAR44] << VAR49;
                                }
                            }
                        }
                        else
                        {
                            for (VAR43 = VAR35; VAR43 < VAR36; VAR43++)
                            {
                                int *VAR47 = VAR10.VAR48[VAR43 - VAR35];
                                for (VAR44 = VAR31; VAR44 < VAR33; VAR44++)
                                {
                                    *VAR47 = (VAR15->VAR19[(VAR15->VAR38[0][1] - VAR15->VAR38[0][0]) * VAR43 + VAR44]);
                                    *VAR47 = (VAR50)*VAR47 * (VAR50)(16384 * 65536 / VAR25->VAR51) >> 14 - VAR49;
                                    VAR47++;
                                }
                            }
                        }
                        FUN6(VAR2, &VAR10, VAR27->VAR52 + VAR30, VAR4, VAR33 - VAR31, VAR36 - VAR35, VAR37, VAR12->VAR20 - VAR7 - 1);
                        VAR31 = VAR33;
                        VAR33 = FUN4(VAR33 + (1 << VAR25->VAR41), VAR25->VAR38[0][1] - VAR25->VAR38[0][0] + VAR32);
                    }
                    VAR35 = VAR36;
                    VAR36 = FUN4(VAR36 + (1 << VAR25->VAR39), VAR25->VAR38[1][1] - VAR25->VAR38[1][0] + VAR34);
                }
            }
        }
        FUN2(VAR2->VAR16, VAR17, "");
    }
    FUN2(VAR2->VAR16, VAR17, "");
    FUN7(VAR2, VAR4);
    if (VAR9 = FUN8(VAR2, VAR4, VAR5))
        return VAR9;
    FUN2(VAR2->VAR16, VAR17, "");
    return 0;
}