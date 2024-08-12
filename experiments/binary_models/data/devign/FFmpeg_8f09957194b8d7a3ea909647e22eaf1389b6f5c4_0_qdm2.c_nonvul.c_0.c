static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16;
    int VAR17;
    float VAR18 = 0;
    float VAR19;
    float VAR20[10];
    int VAR21[16] = {0};
    if (VAR5 == 0)
    {
        for (VAR8 = VAR6; VAR8 < VAR7; VAR8++)
            FUN2(VAR2, VAR8);
        return 0;
    }
    for (VAR8 = VAR6; VAR8 < VAR7; VAR8++)
    {
        VAR14 = VAR2->VAR22;
        if (VAR2->VAR22 <= 1 || VAR8 < 12)
            VAR15 = 0;
        else if (VAR8 >= 24)
            VAR15 = 1;
        else
            VAR15 = (FUN3(VAR4) >= 1) ? FUN4(VAR4) : 0;
        if (VAR15)
        {
            if (FUN3(VAR4) >= 16)
                for (VAR9 = 0; VAR9 < 16; VAR9++)
                    VAR21[VAR9] = FUN4(VAR4);
            for (VAR9 = 0; VAR9 < 64; VAR9++)
                if (VAR2->VAR23[1][VAR8][VAR9] > VAR2->VAR23[0][VAR8][VAR9])
                    VAR2->VAR23[0][VAR8][VAR9] = VAR2->VAR23[1][VAR8][VAR9];
            if (FUN5(VAR8, VAR2->VAR22, VAR2->VAR23))
            {
                FUN6(NULL, VAR24, "");
                FUN2(VAR2, VAR8);
                continue;
            }
            VAR14 = 1;
        }
        for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        {
            FUN7(VAR2->VAR25);
            VAR16 = (FUN3(VAR4) >= 1) ? FUN4(VAR4) : 0;
            VAR19 = 0.0;
            VAR17 = 1;
            for (VAR9 = 0; VAR9 < 128;)
            {
                switch (VAR2->VAR23[VAR12][VAR8][VAR9 / 2])
                {
                case 8:
                    if (FUN3(VAR4) >= 10)
                    {
                        if (VAR16)
                        {
                            for (VAR10 = 0; VAR10 < 5; VAR10++)
                            {
                                if ((VAR9 + 2 * VAR10) >= 128)
                                    break;
                                VAR20[2 * VAR10] = FUN4(VAR4) ? VAR26[VAR15][2 * FUN4(VAR4)] : 0;
                            }
                        }
                        else
                        {
                            VAR11 = FUN8(VAR4, 8);
                            if (VAR11 >= 243)
                            {
                                FUN6(NULL, VAR24, "");
                                return VAR27;
                            }
                            for (VAR10 = 0; VAR10 < 5; VAR10++)
                                VAR20[2 * VAR10] = VAR26[VAR15][VAR28[VAR11][VAR10]];
                        }
                        for (VAR10 = 0; VAR10 < 5; VAR10++)
                            VAR20[2 * VAR10 + 1] = FUN9(VAR8, VAR2->VAR25);
                    }
                    else
                    {
                        for (VAR10 = 0; VAR10 < 10; VAR10++)
                            VAR20[VAR10] = FUN9(VAR8, VAR2->VAR25);
                    }
                    VAR13 = 10;
                    break;
                case 10:
                    if (FUN3(VAR4) >= 1)
                    {
                        float VAR29 = 0.81;
                        if (FUN4(VAR4))
                            VAR29 = -VAR29;
                        VAR29 -= VAR30[((VAR8 + 1) * (VAR9 + 5 * VAR12 + 1)) & 127] * 9.0 / 40.0;
                        VAR20[0] = VAR29;
                    }
                    else
                    {
                        VAR20[0] = FUN9(VAR8, VAR2->VAR25);
                    }
                    VAR13 = 1;
                    break;
                case 16:
                    if (FUN3(VAR4) >= 10)
                    {
                        if (VAR16)
                        {
                            for (VAR10 = 0; VAR10 < 5; VAR10++)
                            {
                                if ((VAR9 + VAR10) >= 128)
                                    break;
                                VAR20[VAR10] = (FUN4(VAR4) == 0) ? 0 : VAR26[VAR15][2 * FUN4(VAR4)];
                            }
                        }
                        else
                        {
                            VAR11 = FUN8(VAR4, 8);
                            if (VAR11 >= 243)
                            {
                                FUN6(NULL, VAR24, "");
                                return VAR27;
                            }
                            for (VAR10 = 0; VAR10 < 5; VAR10++)
                                VAR20[VAR10] = VAR26[VAR15][VAR28[VAR11][VAR10]];
                        }
                    }
                    else
                    {
                        for (VAR10 = 0; VAR10 < 5; VAR10++)
                            VAR20[VAR10] = FUN9(VAR8, VAR2->VAR25);
                    }
                    VAR13 = 5;
                    break;
                case 24:
                    if (FUN3(VAR4) >= 7)
                    {
                        VAR11 = FUN8(VAR4, 7);
                        if (VAR11 >= 125)
                        {
                            FUN6(NULL, VAR24, "");
                            return VAR27;
                        }
                        for (VAR10 = 0; VAR10 < 3; VAR10++)
                            VAR20[VAR10] = (VAR31[VAR11][VAR10] - 2.0) * 0.5;
                    }
                    else
                    {
                        for (VAR10 = 0; VAR10 < 3; VAR10++)
                            VAR20[VAR10] = FUN9(VAR8, VAR2->VAR25);
                    }
                    VAR13 = 3;
                    break;
                case 30:
                    if (FUN3(VAR4) >= 4)
                    {
                        unsigned VAR32 = FUN10(VAR4, &VAR33, 0, 1);
                        if (VAR32 >= FUN11(VAR34))
                        {
                            FUN6(NULL, VAR24, "", VAR32);
                            return VAR27;
                        }
                        VAR20[0] = VAR34[VAR32];
                    }
                    else
                        VAR20[0] = FUN9(VAR8, VAR2->VAR25);
                    VAR13 = 1;
                    break;
                case 34:
                    if (FUN3(VAR4) >= 7)
                    {
                        if (VAR17)
                        {
                            VAR18 = (float)(1 << FUN8(VAR4, 2));
                            VAR20[0] = ((float)FUN8(VAR4, 5) - 16.0) / 15.0;
                            VAR19 = VAR20[0];
                            VAR17 = 0;
                        }
                        else
                        {
                            unsigned VAR32 = FUN10(VAR4, &VAR35, 0, 1);
                            if (VAR32 >= FUN11(VAR36))
                            {
                                FUN6(NULL, VAR24, "", VAR32);
                                return VAR27;
                            }
                            VAR20[0] = VAR36[VAR32] / VAR18 + VAR19;
                            VAR19 = VAR20[0];
                        }
                    }
                    else
                    {
                        VAR20[0] = FUN9(VAR8, VAR2->VAR25);
                    }
                    VAR13 = 1;
                    break;
                default:
                    VAR20[0] = FUN9(VAR8, VAR2->VAR25);
                    VAR13 = 1;
                    break;
                }
                if (VAR15)
                {
                    for (VAR10 = 0; VAR10 < VAR13 && VAR9 + VAR10 < 128; VAR10++)
                    {
                        VAR2->VAR37[0][VAR9 + VAR10][VAR8] = VAR2->VAR38[0][VAR8][(VAR9 + VAR10) / 2] * VAR20[VAR10];
                        if (VAR2->VAR22 == 2)
                        {
                            if (VAR21[(VAR9 + VAR10) / 8])
                                VAR2->VAR37[1][VAR9 + VAR10][VAR8] = VAR2->VAR38[1][VAR8][(VAR9 + VAR10) / 2] * -VAR20[VAR10];
                            else
                                VAR2->VAR37[1][VAR9 + VAR10][VAR8] = VAR2->VAR38[1][VAR8][(VAR9 + VAR10) / 2] * VAR20[VAR10];
                        }
                    }
                }
                else
                {
                    for (VAR10 = 0; VAR10 < VAR13; VAR10++)
                        if ((VAR9 + VAR10) < 128)
                            VAR2->VAR37[VAR12][VAR9 + VAR10][VAR8] = VAR2->VAR38[VAR12][VAR8][(VAR9 + VAR10) / 2] * VAR20[VAR10];
                }
                VAR9 += VAR13;
            }
        }
    }
    return 0;
}