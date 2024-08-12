static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int *VAR14, int *VAR15)
{
    VAR16 *VAR17 = VAR2->VAR18;
    const int VAR19 = VAR10 - VAR2->VAR20->VAR21[1];
    int VAR22;
    if (VAR17->VAR23.VAR24 == VAR25)
    {
        int VAR26 = 1 << VAR10;
        FUN2(VAR2, VAR3, VAR4, VAR26, VAR26);
        VAR2->VAR27.VAR28[VAR10 - 2](VAR2, VAR3, VAR4, 0);
    }
    if (VAR13 || VAR14[0] || VAR15[0] || (VAR2->VAR20->VAR29 == 2 && (VAR14[1] || VAR15[1])))
    {
        int VAR30 = VAR31;
        int VAR32 = VAR31;
        int VAR33 = VAR14[0] || VAR15[0] || (VAR2->VAR20->VAR29 == 2 && (VAR14[1] || VAR15[1]));
        if (VAR2->VAR34->VAR35 && !VAR17->VAR36.VAR37)
        {
            VAR17->VAR36.VAR38 = FUN3(VAR2);
            if (VAR17->VAR36.VAR38 != 0)
                if (FUN4(VAR2) == 1)
                    VAR17->VAR36.VAR38 = -VAR17->VAR36.VAR38;
            VAR17->VAR36.VAR37 = 1;
            if (VAR17->VAR36.VAR38 < -(26 + VAR2->VAR20->VAR39 / 2) || VAR17->VAR36.VAR38 > (25 + VAR2->VAR20->VAR39 / 2))
            {
                FUN5(VAR2->VAR40, VAR41, ""
                                               "",
                       VAR17->VAR36.VAR38, -(26 + VAR2->VAR20->VAR39 / 2), (25 + VAR2->VAR20->VAR39 / 2));
                return VAR42;
            }
            FUN6(VAR2, VAR7, VAR8, VAR9);
        }
        if (VAR2->VAR43.VAR44 && VAR33 && !VAR17->VAR23.VAR45 && !VAR17->VAR36.VAR46)
        {
            int VAR47 = FUN7(VAR2);
            if (VAR47)
            {
                int VAR48 = 0;
                if (VAR2->VAR34->VAR49 > 0)
                {
                    VAR48 = FUN8(VAR2);
                    FUN5(VAR2->VAR40, VAR41, "");
                }
                VAR17->VAR36.VAR50 = VAR2->VAR34->VAR51[VAR48];
                VAR17->VAR36.VAR52 = VAR2->VAR34->VAR53[VAR48];
            }
            else
            {
                VAR17->VAR36.VAR50 = 0;
                VAR17->VAR36.VAR52 = 0;
            }
            VAR17->VAR36.VAR46 = 1;
        }
        if (VAR17->VAR23.VAR24 == VAR25 && VAR10 < 4)
        {
            if (VAR17->VAR36.VAR54 >= 6 && VAR17->VAR36.VAR54 <= 14)
            {
                VAR30 = VAR55;
            }
            else if (VAR17->VAR36.VAR54 >= 22 && VAR17->VAR36.VAR54 <= 30)
            {
                VAR30 = VAR56;
            }
            if (VAR17->VAR36.VAR57 >= 6 && VAR17->VAR36.VAR57 <= 14)
            {
                VAR32 = VAR55;
            }
            else if (VAR17->VAR36.VAR57 >= 22 && VAR17->VAR36.VAR57 <= 30)
            {
                VAR32 = VAR56;
            }
        }
        VAR17->VAR36.VAR58 = 0;
        if (VAR13)
            FUN9(VAR2, VAR3, VAR4, VAR10, VAR30, 0);
        if (VAR10 > 2 || VAR2->VAR20->VAR29 == 3)
        {
            int VAR59 = 1 << (VAR19 + VAR2->VAR20->VAR21[1]);
            int VAR60 = 1 << (VAR19 + VAR2->VAR20->VAR61[1]);
            VAR17->VAR36.VAR58 = (VAR2->VAR34->VAR62 && VAR13 && (VAR17->VAR23.VAR24 == VAR63 || (VAR17->VAR36.VAR64 == 4)));
            if (VAR17->VAR36.VAR58)
            {
                FUN10(VAR2, 0);
            }
            for (VAR22 = 0; VAR22 < (VAR2->VAR20->VAR29 == 2 ? 2 : 1); VAR22++)
            {
                if (VAR17->VAR23.VAR24 == VAR25)
                {
                    FUN2(VAR2, VAR3, VAR4 + (VAR22 << VAR19), VAR59, VAR60);
                    VAR2->VAR27.VAR28[VAR19 - 2](VAR2, VAR3, VAR4 + (VAR22 << VAR19), 1);
                }
                if (VAR14[VAR22])
                    FUN9(VAR2, VAR3, VAR4 + (VAR22 << VAR19), VAR19, VAR32, 1);
                else if (VAR17->VAR36.VAR58)
                {
                    ptrdiff_t VAR65 = VAR2->VAR66->VAR67[1];
                    int VAR21 = VAR2->VAR20->VAR21[1];
                    int VAR61 = VAR2->VAR20->VAR61[1];
                    VAR68 *VAR69 = (VAR68 *)VAR17->VAR70;
                    VAR68 *VAR71 = (VAR68 *)VAR17->VAR72;
                    int VAR73 = 1 << VAR19;
                    VAR74 *VAR75 = &VAR2->VAR66->VAR76[1][(VAR4 >> VAR61) * VAR65 + ((VAR3 >> VAR21) << VAR2->VAR20->VAR77)];
                    for (VAR22 = 0; VAR22 < (VAR73 * VAR73); VAR22++)
                    {
                        VAR71[VAR22] = ((VAR17->VAR36.VAR78 * VAR69[VAR22]) >> 3);
                    }
                    VAR2->VAR79.VAR80[VAR10 - 2](VAR75, VAR71, VAR65);
                }
            }
            if (VAR17->VAR36.VAR58)
            {
                FUN10(VAR2, 1);
            }
            for (VAR22 = 0; VAR22 < (VAR2->VAR20->VAR29 == 2 ? 2 : 1); VAR22++)
            {
                if (VAR17->VAR23.VAR24 == VAR25)
                {
                    FUN2(VAR2, VAR3, VAR4 + (VAR22 << VAR19), VAR59, VAR60);
                    VAR2->VAR27.VAR28[VAR19 - 2](VAR2, VAR3, VAR4 + (VAR22 << VAR19), 2);
                }
                if (VAR15[VAR22])
                    FUN9(VAR2, VAR3, VAR4 + (VAR22 << VAR19), VAR19, VAR32, 2);
                else if (VAR17->VAR36.VAR58)
                {
                    ptrdiff_t VAR65 = VAR2->VAR66->VAR67[2];
                    int VAR21 = VAR2->VAR20->VAR21[2];
                    int VAR61 = VAR2->VAR20->VAR61[2];
                    VAR68 *VAR69 = (VAR68 *)VAR17->VAR70;
                    VAR68 *VAR71 = (VAR68 *)VAR17->VAR72;
                    int VAR73 = 1 << VAR19;
                    VAR74 *VAR75 = &VAR2->VAR66->VAR76[2][(VAR4 >> VAR61) * VAR65 + ((VAR3 >> VAR21) << VAR2->VAR20->VAR77)];
                    for (VAR22 = 0; VAR22 < (VAR73 * VAR73); VAR22++)
                    {
                        VAR71[VAR22] = ((VAR17->VAR36.VAR78 * VAR69[VAR22]) >> 3);
                    }
                    VAR2->VAR79.VAR80[VAR10 - 2](VAR75, VAR71, VAR65);
                }
            }
        }
        else if (VAR12 == 3)
        {
            int VAR59 = 1 << (VAR10 + 1);
            int VAR60 = 1 << (VAR10 + VAR2->VAR20->VAR61[1]);
            for (VAR22 = 0; VAR22 < (VAR2->VAR20->VAR29 == 2 ? 2 : 1); VAR22++)
            {
                if (VAR17->VAR23.VAR24 == VAR25)
                {
                    FUN2(VAR2, VAR5, VAR6 + (VAR22 << VAR10), VAR59, VAR60);
                    VAR2->VAR27.VAR28[VAR10 - 2](VAR2, VAR5, VAR6 + (VAR22 << VAR10), 1);
                }
                if (VAR14[VAR22])
                    FUN9(VAR2, VAR5, VAR6 + (VAR22 << VAR10), VAR10, VAR32, 1);
            }
            for (VAR22 = 0; VAR22 < (VAR2->VAR20->VAR29 == 2 ? 2 : 1); VAR22++)
            {
                if (VAR17->VAR23.VAR24 == VAR25)
                {
                    FUN2(VAR2, VAR5, VAR6 + (VAR22 << VAR10), VAR59, VAR60);
                    VAR2->VAR27.VAR28[VAR10 - 2](VAR2, VAR5, VAR6 + (VAR22 << VAR10), 2);
                }
                if (VAR15[VAR22])
                    FUN9(VAR2, VAR5, VAR6 + (VAR22 << VAR10), VAR10, VAR32, 2);
            }
        }
    }
    else if (VAR17->VAR23.VAR24 == VAR25)
    {
        if (VAR10 > 2 || VAR2->VAR20->VAR29 == 3)
        {
            int VAR59 = 1 << (VAR19 + VAR2->VAR20->VAR21[1]);
            int VAR60 = 1 << (VAR19 + VAR2->VAR20->VAR61[1]);
            FUN2(VAR2, VAR3, VAR4, VAR59, VAR60);
            VAR2->VAR27.VAR28[VAR19 - 2](VAR2, VAR3, VAR4, 1);
            VAR2->VAR27.VAR28[VAR19 - 2](VAR2, VAR3, VAR4, 2);
            if (VAR2->VAR20->VAR29 == 2)
            {
                FUN2(VAR2, VAR3, VAR4 + (1 << VAR19), VAR59, VAR60);
                VAR2->VAR27.VAR28[VAR19 - 2](VAR2, VAR3, VAR4 + (1 << VAR19), 1);
                VAR2->VAR27.VAR28[VAR19 - 2](VAR2, VAR3, VAR4 + (1 << VAR19), 2);
            }
        }
        else if (VAR12 == 3)
        {
            int VAR59 = 1 << (VAR10 + 1);
            int VAR60 = 1 << (VAR10 + VAR2->VAR20->VAR61[1]);
            FUN2(VAR2, VAR5, VAR6, VAR59, VAR60);
            VAR2->VAR27.VAR28[VAR10 - 2](VAR2, VAR5, VAR6, 1);
            VAR2->VAR27.VAR28[VAR10 - 2](VAR2, VAR5, VAR6, 2);
            if (VAR2->VAR20->VAR29 == 2)
            {
                FUN2(VAR2, VAR5, VAR6 + (1 << (VAR10)), VAR59, VAR60);
                VAR2->VAR27.VAR28[VAR10 - 2](VAR2, VAR5, VAR6 + (1 << (VAR10)), 1);
                VAR2->VAR27.VAR28[VAR10 - 2](VAR2, VAR5, VAR6 + (1 << (VAR10)), 2);
            }
        }
    }
    return 0;
}