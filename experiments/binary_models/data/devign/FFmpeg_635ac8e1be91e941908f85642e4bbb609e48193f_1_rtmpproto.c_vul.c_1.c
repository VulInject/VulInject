static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    AVLFG VAR5;
    uint8_t VAR6[VAR7 + 1] = {
        3,
        0,
        0,
        0,
        0,
        VAR8,
        VAR9,
        VAR10,
        VAR11,
    };
    uint8_t VAR12[VAR7];
    uint8_t VAR13[VAR7 + 1];
    int VAR14;
    int VAR15, VAR16;
    uint8_t VAR17[32], VAR18[32];
    int VAR19, VAR20 = 0;
    FUN2(VAR2, VAR21, "");
    FUN3(&VAR5, 0xDEADC0DE);
    for (VAR14 = 9; VAR14 <= VAR7; VAR14++)
        VAR6[VAR14] = FUN4(&VAR5) >> 24;
    if (VAR4->VAR22 && VAR23)
    {
        VAR6[0] = 6;
        VAR6[5] = 128;
        VAR6[6] = 0;
        VAR6[7] = 3;
        VAR6[8] = 2;
        if ((VAR19 = FUN5(VAR4->VAR24, VAR6 + 1)) < 0)
            VAR16 = FUN6(VAR6 + 1, VAR4->VAR22);
        if (VAR16 < 0)
            return VAR16;
        if ((VAR19 = FUN7(VAR4->VAR24, VAR6, VAR7 + 1)) < 0)
        {
            FUN2(VAR2, VAR25, "");
            if ((VAR19 = FUN8(VAR4->VAR24, VAR13, VAR7 + 1)) < 0)
            {
                FUN2(VAR2, VAR25, "");
                if ((VAR19 = FUN8(VAR4->VAR24, VAR12, VAR7)) < 0)
                {
                    FUN2(VAR2, VAR25, "");
                    FUN2(VAR2, VAR21, "", VAR13[0]);
                    FUN2(VAR2, VAR21, "", VAR13[5], VAR13[6], VAR13[7], VAR13[8]);
                    if (VAR4->VAR26 && VAR13[5] >= 3)
                    {
                        VAR15 = FUN9(VAR13 + 1, 772);
                        if (VAR15 < 0)
                            return VAR15;
                        if (!VAR15)
                        {
                            VAR20 = 1;
                            VAR15 = FUN9(VAR13 + 1, 8);
                            if (VAR15 < 0)
                                return VAR15;
                            if (!VAR15)
                            {
                                FUN2(VAR2, VAR25, "");
                                return FUN10(VAR27);
                                VAR19 = FUN11(VAR6 + 1 + VAR16, 32, 0, VAR28, sizeof(VAR28), VAR17);
                                if (VAR19 < 0)
                                    VAR19 = FUN11(VAR12, VAR7 - 32, 0, VAR17, 32, VAR18);
                                if (VAR19 < 0)
                                    if (VAR4->VAR22 && VAR23)
                                    {
                                        if ((VAR19 = FUN12(VAR4->VAR24, VAR13 + 1, VAR6 + 1, VAR20)) < 0)
                                            FUN13(VAR4->VAR24, VAR18, VAR17, VAR13[0]);
                                        if (memcmp(VAR18, VAR12 + VAR7 - 32, 32))
                                        {
                                            FUN2(VAR2, VAR25, "");
                                            return FUN10(VAR27);
                                            for (VAR14 = 0; VAR14 < VAR7; VAR14++)
                                                VAR6[VAR14] = FUN4(&VAR5) >> 24;
                                            VAR19 = FUN11(VAR13 + 1 + VAR15, 32, 0, VAR29, sizeof(VAR29), VAR17);
                                            if (VAR19 < 0)
                                                VAR19 = FUN11(VAR6, VAR7 - 32, 0, VAR17, 32, VAR6 + VAR7 - 32);
                                            if (VAR19 < 0)
                                                if (VAR4->VAR22 && VAR23)
                                                {
                                                    FUN13(VAR4->VAR24, VAR6 + VAR7 - 32, VAR17, VAR13[0]);
                                                    if ((VAR19 = FUN7(VAR4->VAR24, VAR6, VAR7)) < 0)
                                                        if (VAR4->VAR22 && VAR23)
                                                        {
                                                            if ((VAR19 = FUN14(VAR4->VAR24)) < 0)
                                                        }
                                                        else
                                                        {
                                                            if (VAR4->VAR22 && VAR23)
                                                            {
                                                                if ((VAR19 = FUN12(VAR4->VAR24, VAR13 + 1, VAR6 + 1, 1)) < 0)
                                                                    if (VAR13[0] == 9)
                                                                    {
                                                                        FUN13(VAR4->VAR24, VAR18, VAR17, VAR13[0]);
                                                                        if ((VAR19 = FUN7(VAR4->VAR24, VAR13 + 1, VAR7)) < 0)
                                                                            if (VAR4->VAR22 && VAR23)
                                                                            {
                                                                                if ((VAR19 = FUN14(VAR4->VAR24)) < 0)
                                                                                return 0