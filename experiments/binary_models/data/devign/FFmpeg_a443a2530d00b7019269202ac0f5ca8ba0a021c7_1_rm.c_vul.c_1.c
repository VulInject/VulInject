static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    char VAR11[256];
    uint32_t VAR12;
    int VAR13;
    VAR12 = FUN2(VAR10);
    if (((VAR12 >> 16) & 0xff) == 3)
    {
        int64_t VAR14 = FUN3(VAR10);
        for (VAR13 = 0; VAR13 < 14; VAR13++)
            FUN4(VAR10);
        FUN5(VAR10, VAR2->VAR15, sizeof(VAR2->VAR15));
        FUN5(VAR10, VAR2->VAR16, sizeof(VAR2->VAR16));
        FUN5(VAR10, VAR2->VAR17, sizeof(VAR2->VAR17));
        FUN5(VAR10, VAR2->VAR18, sizeof(VAR2->VAR18));
        if ((VAR14 + (VAR12 & 0xffff)) >= FUN3(VAR10) + 2)
        {
            FUN4(VAR10);
            FUN5(VAR10, VAR11, sizeof(VAR11));
            if ((VAR14 + (VAR12 & 0xffff)) > FUN3(VAR10))
                FUN6(VAR10, (VAR12 & 0xffff) + VAR14 - FUN3(VAR10));
            VAR4->VAR19->VAR20 = 8000;
            VAR4->VAR19->VAR21 = 1;
            VAR4->VAR19->VAR22 = VAR23;
            VAR4->VAR19->VAR24 = VAR25;
        }
        else
        {
            int VAR26, VAR27, VAR28, VAR29;
            FUN2(VAR10);
            FUN2(VAR10);
            FUN7(VAR10);
            FUN2(VAR10);
            VAR26 = FUN7(VAR10);
            VAR7->VAR28 = VAR28 = FUN2(VAR10);
            FUN2(VAR10);
            FUN2(VAR10);
            FUN2(VAR10);
            VAR7->VAR27 = VAR27 = FUN7(VAR10);
            VAR4->VAR19->VAR30 = FUN7(VAR10);
            VAR7->VAR29 = VAR29 = FUN7(VAR10);
            FUN7(VAR10);
            if (((VAR12 >> 16) & 0xff) == 5)
            {
                FUN7(VAR10);
                FUN7(VAR10);
                FUN7(VAR10);
            }
            VAR4->VAR19->VAR20 = FUN7(VAR10);
            FUN2(VAR10);
            VAR4->VAR19->VAR21 = FUN7(VAR10);
            if (((VAR12 >> 16) & 0xff) == 5)
            {
                FUN2(VAR10);
                VAR11[0] = FUN4(VAR10);
                VAR11[1] = FUN4(VAR10);
                VAR11[2] = FUN4(VAR10);
                VAR11[3] = FUN4(VAR10);
                VAR11[4] = 0;
            }
            else
            {
                FUN5(VAR10, VAR11, sizeof(VAR11));
                FUN5(VAR10, VAR11, sizeof(VAR11));
                VAR4->VAR19->VAR22 = VAR23;
                if (!strcmp(VAR11, ""))
                {
                    VAR4->VAR19->VAR24 = VAR31;
                }
                else if (!strcmp(VAR11, ""))
                {
                    VAR4->VAR19->VAR24 = VAR32;
                    VAR4->VAR19->VAR33 = 0;
                    VAR7->VAR34 = VAR4->VAR19->VAR30;
                    VAR4->VAR19->VAR30 = VAR28;
                    VAR7->VAR35 = FUN8(VAR7->VAR34 * VAR27);
                }
                else if (!strcmp(VAR11, ""))
                {
                    int VAR36, VAR13;
                    FUN7(VAR10);
                    FUN4(VAR10);
                    if (((VAR12 >> 16) & 0xff) == 5)
                        FUN4(VAR10);
                    VAR36 = FUN2(VAR10);
                    if (VAR36 + VAR37 <= (unsigned)VAR36)
                    {
                        FUN9(VAR2, VAR38, "");
                        VAR4->VAR19->VAR24 = VAR39;
                        VAR4->VAR19->VAR33 = VAR36;
                        VAR4->VAR19->VAR40 = FUN10(VAR4->VAR19->VAR33 + VAR37);
                        for (VAR13 = 0; VAR13 < VAR36; VAR13++)
                            ((VAR41 *)VAR4->VAR19->VAR40)[VAR13] = FUN4(VAR10);
                        VAR7->VAR34 = VAR4->VAR19->VAR30;
                        VAR4->VAR19->VAR30 = VAR7->VAR29;
                        VAR7->VAR35 = FUN8(VAR7->VAR34 * VAR27);
                    }
                    else
                    {
                        VAR4->VAR19->VAR24 = VAR42;
                        FUN11(VAR4->VAR19->VAR43, sizeof(VAR4->VAR19->VAR43), VAR11);
                        if (VAR5)
                        {
                            FUN4(VAR10);
                            FUN4(VAR10);
                            FUN4(VAR10);
                            FUN5(VAR10, VAR2->VAR15, sizeof(VAR2->VAR15));
                            FUN5(VAR10, VAR2->VAR16, sizeof(VAR2->VAR16));
                            FUN5(VAR10, VAR2->VAR17, sizeof(VAR2->VAR17));
                            FUN5(VAR10, VAR2->VAR18, sizeof(VAR2->VAR18))