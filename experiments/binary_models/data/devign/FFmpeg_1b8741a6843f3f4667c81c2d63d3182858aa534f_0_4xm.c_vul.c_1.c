static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    unsigned int VAR5;
    unsigned int VAR6;
    int VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    unsigned char *VAR11;
    int VAR12, VAR13;
    VAR14 *VAR15;
    VAR9->VAR16 = 0;
    VAR9->VAR17 = NULL;
    VAR9->VAR18 = 1.0;
    FUN2(VAR4, 12);
    FUN3();
    VAR7 = VAR6 - 4;
    if (VAR5 != VAR19 || VAR7 < 0)
        return VAR20;
    VAR11 = FUN4(VAR7);
    if (!VAR11)
        return FUN5(VAR21);
    if (FUN6(VAR4, VAR11, VAR7) != VAR7)
    {
        FUN7(VAR11);
        return FUN5(VAR22);
        for (VAR12 = 0; VAR12 < VAR7 - 8; VAR12++)
        {
            VAR5 = FUN8(&VAR11[VAR12]);
            VAR6 = FUN8(&VAR11[VAR12 + 4]);
            if (VAR6 > VAR7 - VAR12 - 8 && (VAR5 == VAR23 || VAR5 == VAR24))
            {
                FUN9(VAR2, VAR25, "", VAR6, VAR7 - VAR12 - 8);
                return VAR20;
                if (VAR5 == VAR26)
                {
                    VAR9->VAR18 = FUN10(FUN8(&VAR11[VAR12 + 12]));
                }
                else if (VAR5 == VAR23)
                {
                    if (VAR6 != VAR27)
                    {
                        VAR13 = VAR20;
                        VAR9->VAR28 = FUN8(&VAR11[VAR12 + 36]);
                        VAR9->VAR29 = FUN8(&VAR11[VAR12 + 40]);
                        VAR15 = FUN11(VAR2, NULL);
                        if (!VAR15)
                        {
                            VAR13 = FUN5(VAR21);
                            FUN12(VAR15, 60, 1, VAR9->VAR18);
                            VAR9->VAR30 = VAR15->VAR31;
                            VAR15->VAR32->VAR33 = VAR34;
                            VAR15->VAR32->VAR35 = VAR36;
                            VAR15->VAR32->VAR37 = 4;
                            VAR15->VAR32->VAR38 = FUN4(4);
                            FUN13(VAR15->VAR32->VAR38, FUN8(&VAR11[VAR12 + 16]));
                            VAR15->VAR32->VAR28 = VAR9->VAR28;
                            VAR15->VAR32->VAR29 = VAR9->VAR29;
                            VAR12 += 8 + VAR6;
                        }
                        else if (VAR5 == VAR24)
                        {
                            int VAR39;
                            if (VAR6 != VAR40)
                            {
                                VAR13 = VAR20;
                                VAR39 = FUN8(&VAR11[VAR12 + 8]);
                                if ((unsigned)VAR39 >= VAR41 / sizeof(VAR42) - 1)
                                {
                                    FUN9(VAR2, VAR25, "");
                                    if (VAR39 + 1 > VAR9->VAR16)
                                    {
                                        VAR9->VAR17 = FUN14(VAR9->VAR17, sizeof(VAR42), VAR39 + 1);
                                        if (!VAR9->VAR17)
                                        {
                                            VAR13 = FUN5(VAR21);
                                            memset(&VAR9->VAR17[VAR9->VAR16], 0, sizeof(VAR42) * (VAR39 + 1 - VAR9->VAR16));
                                            VAR9->VAR16 = VAR39 + 1;
                                            VAR9->VAR17[VAR39].VAR43 = FUN8(&VAR11[VAR12 + 12]);
                                            VAR9->VAR17[VAR39].VAR44 = FUN8(&VAR11[VAR12 + 36]);
                                            VAR9->VAR17[VAR39].VAR45 = FUN8(&VAR11[VAR12 + 40]);
                                            VAR9->VAR17[VAR39].VAR46 = FUN8(&VAR11[VAR12 + 44]);
                                            VAR9->VAR17[VAR39].VAR47 = 0;
                                            if (VAR9->VAR17[VAR39].VAR44 <= 0 || VAR9->VAR17[VAR39].VAR45 <= 0 || VAR9->VAR17[VAR39].VAR46 < 0)
                                            {
                                                FUN9(VAR2, VAR25, "");
                                                VAR12 += 8 + VAR6;
                                                VAR15 = FUN11(VAR2, NULL);
                                                if (!VAR15)
                                                {
                                                    VAR13 = FUN5(VAR21);
                                                    VAR15->VAR48 = VAR39;
                                                    FUN12(VAR15, 60, 1, VAR9->VAR17[VAR39].VAR45);
                                                    VAR9->VAR17[VAR39].VAR49 = VAR15->VAR31;
                                                    VAR15->VAR32->VAR33 = VAR50;
                                                    VAR15->VAR32->VAR51 = 0;
                                                    VAR15->VAR32->VAR44 = VAR9->VAR17[VAR39].VAR44;
                                                    VAR15->VAR32->VAR45 = VAR9->VAR17[VAR39].VAR45;
                                                    VAR15->VAR32->VAR52 = VAR9->VAR17[VAR39].VAR46;
                                                    VAR15->VAR32->VAR53 = VAR15->VAR32->VAR44 * VAR15->VAR32->VAR45 * VAR15->VAR32->VAR52;
                                                    VAR15->VAR32->VAR54 = VAR15->VAR32->VAR44 * VAR15->VAR32->VAR52;
                                                    if (VAR9->VAR17[VAR39].VAR43)
                                                    {
                                                        VAR15->VAR32->VAR35 = VAR55;
                                                    }
                                                    else if (VAR15->VAR32->VAR52 == 8)
                                                    {
                                                        VAR15->VAR32->VAR35 = VAR56;
                                                    }
                                                    else
                                                        VAR15->VAR32->VAR35 = VAR57;
                                                    FUN3();
                                                    if (VAR5 != VAR58)
                                                    {
                                                        VAR13 = VAR20;
                                                        FUN7(VAR11);
                                                        VAR9->VAR59 = -1;
                                                        return 0;
                                                    VAR60:
                                                        FUN15(&VAR9->VAR17);
                                                        FUN7(VAR11);
                                                        return VAR13;