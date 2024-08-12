static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int *VAR11)
{
    int VAR12 = 0;
    int VAR13, VAR14, VAR15, VAR16, VAR17;
    int VAR18, VAR19;
    int VAR20, VAR21;
    switch (VAR10)
    {
    case VAR22:
        FUN2(VAR2->VAR23, VAR24, "");
        VAR17 = 1;
        for (VAR14 = VAR5; VAR17 && VAR14 < VAR8; VAR14++)
        {
            VAR17 = 0;
            for (VAR13 = 0; VAR13 < VAR7; VAR13++)
            {
                for (VAR15 = VAR6; VAR15 < VAR9; VAR15++)
                {
                    VAR25 *VAR26 = VAR4->VAR26 + VAR15;
                    VAR27 *VAR28 = VAR4->VAR28 + VAR15;
                    if (VAR14 < VAR26->VAR29)
                    {
                        VAR30 *VAR31 = VAR4->VAR32[VAR15].VAR33 + VAR14;
                        VAR17 = 1;
                        for (VAR16 = 0; VAR16 < VAR31->VAR34 * VAR31->VAR35; VAR16++)
                            if ((VAR12 = FUN3(VAR2, VAR4, VAR11, VAR26, VAR31, VAR16, VAR13, VAR28->VAR36 + (VAR14 ? 3 * (VAR14 - 1) + 1 : 0), VAR28->VAR37)) < 0)
                                return VAR12;
                    }
                }
            }
        }
        break;
    case VAR38:
        FUN2(VAR2->VAR23, VAR24, "");
        for (VAR13 = 0; VAR13 < VAR7; VAR13++)
        {
            VAR17 = 1;
            for (VAR14 = VAR5; VAR17 && VAR14 < VAR8; VAR14++)
            {
                VAR17 = 0;
                for (VAR15 = VAR6; VAR15 < VAR9; VAR15++)
                {
                    VAR25 *VAR26 = VAR4->VAR26 + VAR15;
                    VAR27 *VAR28 = VAR4->VAR28 + VAR15;
                    if (VAR14 < VAR26->VAR29)
                    {
                        VAR30 *VAR31 = VAR4->VAR32[VAR15].VAR33 + VAR14;
                        VAR17 = 1;
                        for (VAR16 = 0; VAR16 < VAR31->VAR34 * VAR31->VAR35; VAR16++)
                            if ((VAR12 = FUN3(VAR2, VAR4, VAR11, VAR26, VAR31, VAR16, VAR13, VAR28->VAR36 + (VAR14 ? 3 * (VAR14 - 1) + 1 : 0), VAR28->VAR37)) < 0)
                                return VAR12;
                    }
                }
            }
        }
        break;
    case VAR39:
        FUN2(VAR2->VAR23, VAR24, "");
        for (VAR15 = VAR6; VAR15 < VAR9; VAR15++)
        {
            VAR40 *VAR32 = VAR4->VAR32 + VAR15;
            VAR25 *VAR26 = VAR4->VAR26 + VAR15;
            VAR27 *VAR28 = VAR4->VAR28 + VAR15;
            VAR20 = 32;
            VAR21 = 32;
            for (VAR14 = VAR5; VAR14 < FUN4(VAR26->VAR29, VAR8); VAR14++)
            {
                uint8_t VAR41 = VAR26->VAR29 - 1 - VAR14;
                VAR30 *VAR31 = VAR32->VAR33 + VAR14;
                VAR20 = FUN4(VAR20, VAR31->VAR42 + VAR41);
                VAR21 = FUN4(VAR21, VAR31->VAR43 + VAR41);
            }
            VAR20 = 1 << VAR20;
            VAR21 = 1 << VAR21;
            for (VAR19 = VAR4->VAR44[1][0]; VAR19 < VAR4->VAR44[1][1]; VAR19 = (VAR19 / VAR21 + 1) * VAR21)
            {
                for (VAR18 = VAR4->VAR44[0][0]; VAR18 < VAR4->VAR44[0][1]; VAR18 = (VAR18 / VAR20 + 1) * VAR20)
                {
                    for (VAR14 = VAR5; VAR14 < FUN4(VAR26->VAR29, VAR8); VAR14++)
                    {
                        unsigned VAR45, VAR46;
                        uint8_t VAR41 = VAR26->VAR29 - 1 - VAR14;
                        VAR30 *VAR31 = VAR32->VAR33 + VAR14;
                        int VAR47 = VAR18 / VAR2->VAR48[VAR15];
                        int VAR49 = VAR19 / VAR2->VAR50[VAR15];
                        if (VAR49 % (1 << (VAR31->VAR43 + VAR41)) && VAR19 != VAR4->VAR44[1][0])
                            continue;
                        if (VAR47 % (1 << (VAR31->VAR42 + VAR41)) && VAR18 != VAR4->VAR44[0][0])
                            continue;
                        VAR45 = FUN5(VAR47, VAR41) >> VAR31->VAR42;
                        VAR46 = FUN5(VAR49, VAR41) >> VAR31->VAR43;
                        VAR45 -= FUN5(VAR32->VAR51[0][0], VAR41) >> VAR31->VAR42;
                        VAR46 -= FUN5(VAR32->VAR51[1][0], VAR41) >> VAR31->VAR43;
                        VAR16 = VAR45 + VAR31->VAR34 * VAR46;
                        if (VAR45 >= VAR31->VAR34 || VAR46 >= VAR31->VAR35)
                        {
                            FUN2(VAR2->VAR23, VAR52, "", VAR45, VAR46, VAR31->VAR34, VAR31->VAR35);
                            continue;
                        }
                        for (VAR13 = 0; VAR13 < VAR7; VAR13++)
                        {
                            if ((VAR12 = FUN3(VAR2, VAR4, VAR11, VAR26, VAR31, VAR16, VAR13, VAR28->VAR36 + (VAR14 ? 3 * (VAR14 - 1) + 1 : 0), VAR28->VAR37)) < 0)
                                return VAR12;
                        }
                    }
                }
            }
        }
        break;
    case VAR53:
        FUN2(VAR2->VAR23, VAR52, "");
        VAR17 = 1;
        for (VAR14 = VAR5; VAR17 && VAR14 < VAR8; VAR14++)
        {
            VAR17 = 0;
            VAR20 = 30;
            VAR21 = 30;
            for (VAR15 = VAR6; VAR15 < VAR9; VAR15++)
            {
                VAR40 *VAR32 = VAR4->VAR32 + VAR15;
                VAR25 *VAR26 = VAR4->VAR26 + VAR15;
                if (VAR14 < VAR26->VAR29)
                {
                    uint8_t VAR41 = VAR26->VAR29 - 1 - VAR14;
                    VAR30 *VAR31 = VAR32->VAR33 + VAR14;
                    VAR20 = FUN4(VAR20, VAR31->VAR42 + VAR41);
                    VAR21 = FUN4(VAR21, VAR31->VAR43 + VAR41);
                }
            }
            VAR20 = 1 << VAR20;
            VAR21 = 1 << VAR21;
            for (VAR19 = VAR4->VAR44[1][0]; VAR19 < VAR4->VAR44[1][1]; VAR19 = (VAR19 / VAR21 + 1) * VAR21)
            {
                for (VAR18 = VAR4->VAR44[0][0]; VAR18 < VAR4->VAR44[0][1]; VAR18 = (VAR18 / VAR20 + 1) * VAR20)
                {
                    for (VAR15 = VAR6; VAR15 < VAR9; VAR15++)
                    {
                        VAR40 *VAR32 = VAR4->VAR32 + VAR15;
                        VAR25 *VAR26 = VAR4->VAR26 + VAR15;
                        VAR27 *VAR28 = VAR4->VAR28 + VAR15;
                        uint8_t VAR41 = VAR26->VAR29 - 1 - VAR14;
                        VAR30 *VAR31 = VAR32->VAR33 + VAR14;
                        unsigned VAR45, VAR46;
                        int VAR47 = VAR18 / VAR2->VAR48[VAR15];
                        int VAR49 = VAR19 / VAR2->VAR50[VAR15];
                        if (VAR14 >= VAR26->VAR29)
                            continue;
                        if (VAR49 % (1 << (VAR31->VAR43 + VAR41)) && VAR19 != VAR4->VAR44[1][0])
                            continue;
                        if (VAR47 % (1 << (VAR31->VAR42 + VAR41)) && VAR18 != VAR4->VAR44[0][0])
                            continue;
                        VAR45 = FUN5(VAR47, VAR41) >> VAR31->VAR42;
                        VAR46 = FUN5(VAR49, VAR41) >> VAR31->VAR43;
                        VAR45 -= FUN5(VAR32->VAR51[0][0], VAR41) >> VAR31->VAR42;
                        VAR46 -= FUN5(VAR32->VAR51[1][0], VAR41) >> VAR31->VAR43;
                        VAR16 = VAR45 + VAR31->VAR34 * VAR46;
                        VAR17 = 1;
                        if (VAR45 >= VAR31->VAR34 || VAR46 >= VAR31->VAR35)
                        {
                            FUN2(VAR2->VAR23, VAR52, "", VAR45, VAR46, VAR31->VAR34, VAR31->VAR35);
                            continue;
                        }
                        for (VAR13 = 0; VAR13 < VAR7; VAR13++)
                        {
                            if ((VAR12 = FUN3(VAR2, VAR4, VAR11, VAR26, VAR31, VAR16, VAR13, VAR28->VAR36 + (VAR14 ? 3 * (VAR14 - 1) + 1 : 0), VAR28->VAR37)) < 0)
                                return VAR12;
                        }
                    }
                }
            }
        }
        break;
    case VAR54:
        FUN2(VAR2->VAR23, VAR52, "");
        VAR20 = 32;
        VAR21 = 32;
        for (VAR15 = VAR6; VAR15 < VAR9; VAR15++)
        {
            VAR40 *VAR32 = VAR4->VAR32 + VAR15;
            VAR25 *VAR26 = VAR4->VAR26 + VAR15;
            VAR27 *VAR28 = VAR4->VAR28 + VAR15;
            for (VAR14 = VAR5; VAR14 < FUN4(VAR26->VAR29, VAR8); VAR14++)
            {
                uint8_t VAR41 = VAR26->VAR29 - 1 - VAR14;
                VAR30 *VAR31 = VAR32->VAR33 + VAR14;
                VAR20 = FUN4(VAR20, VAR31->VAR42 + VAR41);
                VAR21 = FUN4(VAR21, VAR31->VAR43 + VAR41);
            }
        }
        VAR20 = 1 << VAR20;
        VAR21 = 1 << VAR21;
        for (VAR19 = VAR4->VAR44[1][0]; VAR19 < VAR4->VAR44[1][1]; VAR19 = (VAR19 / VAR21 + 1) * VAR21)
        {
            for (VAR18 = VAR4->VAR44[0][0]; VAR18 < VAR4->VAR44[0][1]; VAR18 = (VAR18 / VAR20 + 1) * VAR20)
            {
                for (VAR15 = VAR6; VAR15 < VAR9; VAR15++)
                {
                    VAR40 *VAR32 = VAR4->VAR32 + VAR15;
                    VAR25 *VAR26 = VAR4->VAR26 + VAR15;
                    VAR27 *VAR28 = VAR4->VAR28 + VAR15;
                    int VAR47 = VAR18 / VAR2->VAR48[VAR15];
                    int VAR49 = VAR19 / VAR2->VAR50[VAR15];
                    for (VAR14 = VAR5; VAR14 < FUN4(VAR26->VAR29, VAR8); VAR14++)
                    {
                        unsigned VAR45, VAR46;
                        uint8_t VAR41 = VAR26->VAR29 - 1 - VAR14;
                        VAR30 *VAR31 = VAR32->VAR33 + VAR14;
                        if (VAR49 % (1 << (VAR31->VAR43 + VAR41)) && VAR19 != VAR4->VAR44[1][0])
                            continue;
                        if (VAR47 % (1 << (VAR31->VAR42 + VAR41)) && VAR18 != VAR4->VAR44[0][0])
                            continue;
                        VAR45 = FUN5(VAR47, VAR41) >> VAR31->VAR42;
                        VAR46 = FUN5(VAR49, VAR41) >> VAR31->VAR43;
                        VAR45 -= FUN5(VAR32->VAR51[0][0], VAR41) >> VAR31->VAR42;
                        VAR46 -= FUN5(VAR32->VAR51[1][0], VAR41) >> VAR31->VAR43;
                        VAR16 = VAR45 + VAR31->VAR34 * VAR46;
                        if (VAR45 >= VAR31->VAR34 || VAR46 >= VAR31->VAR35)
                        {
                            FUN2(VAR2->VAR23, VAR52, "", VAR45, VAR46, VAR31->VAR34, VAR31->VAR35);
                            continue;
                        }
                        for (VAR13 = 0; VAR13 < VAR7; VAR13++)
                        {
                            if ((VAR12 = FUN3(VAR2, VAR4, VAR11, VAR26, VAR31, VAR16, VAR13, VAR28->VAR36 + (VAR14 ? 3 * (VAR14 - 1) + 1 : 0), VAR28->VAR37)) < 0)
                                return VAR12;
                        }
                    }
                }
            }
        }
        break;
    default:
        break;
    }
    return VAR12;
}