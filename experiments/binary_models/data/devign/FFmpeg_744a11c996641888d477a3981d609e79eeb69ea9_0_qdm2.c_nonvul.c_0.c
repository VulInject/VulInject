static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16, VAR17;
    int VAR18;
    float VAR19 = 0;
    float VAR20;
    float VAR21[10], VAR22[16];
    if (VAR5 == 0)
    {
        for (VAR8 = VAR6; VAR8 < VAR7; VAR8++)
            FUN2(VAR2, VAR8);
        return;
    }
    for (VAR8 = VAR6; VAR8 < VAR7; VAR8++)
    {
        VAR14 = VAR2->VAR23;
        if (VAR2->VAR23 <= 1 || VAR8 < 12)
            VAR15 = 0;
        else if (VAR8 >= 24)
            VAR15 = 1;
        else
            VAR15 = (FUN3(VAR4) >= 1) ? FUN4(VAR4) : 0;
        if (VAR15)
        {
            if (FUN3(VAR4) >= 16)
                for (VAR9 = 0; VAR9 < 16; VAR9++)
                    VAR22[VAR9] = FUN4(VAR4);
            for (VAR9 = 0; VAR9 < 64; VAR9++)
                if (VAR2->VAR24[1][VAR8][VAR9] > VAR2->VAR24[0][VAR8][VAR9])
                    VAR2->VAR24[0][VAR8][VAR9] = VAR2->VAR24[1][VAR8][VAR9];
            FUN5(VAR8, VAR2->VAR23, VAR2->VAR24);
            VAR14 = 1;
        }
        for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        {
            FUN6(VAR2->VAR25);
            VAR16 = (FUN3(VAR4) >= 1) ? FUN4(VAR4) : 0;
            VAR20 = 0.0;
            VAR18 = 1;
            for (VAR9 = 0; VAR9 < 128;)
            {
                switch (VAR2->VAR24[VAR12][VAR8][VAR9 / 2])
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
                                VAR21[2 * VAR10] = FUN4(VAR4) ? VAR26[VAR15][2 * FUN4(VAR4)] : 0;
                            }
                        }
                        else
                        {
                            VAR11 = FUN7(VAR4, 8);
                            for (VAR10 = 0; VAR10 < 5; VAR10++)
                                VAR21[2 * VAR10] = VAR26[VAR15][VAR27[VAR11][VAR10]];
                        }
                        for (VAR10 = 0; VAR10 < 5; VAR10++)
                            VAR21[2 * VAR10 + 1] = FUN8(VAR8, VAR2->VAR25);
                    }
                    else
                    {
                        for (VAR10 = 0; VAR10 < 10; VAR10++)
                            VAR21[VAR10] = FUN8(VAR8, VAR2->VAR25);
                    }
                    VAR13 = 10;
                    break;
                case 10:
                    if (FUN3(VAR4) >= 1)
                    {
                        float VAR28 = 0.81;
                        if (FUN4(VAR4))
                            VAR28 = -VAR28;
                        VAR28 -= VAR29[((VAR8 + 1) * (VAR9 + 5 * VAR12 + 1)) & 127] * 9.0 / 40.0;
                        VAR21[0] = VAR28;
                    }
                    else
                    {
                        VAR21[0] = FUN8(VAR8, VAR2->VAR25);
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
                                VAR21[VAR10] = (FUN4(VAR4) == 0) ? 0 : VAR26[VAR15][2 * FUN4(VAR4)];
                            }
                        }
                        else
                        {
                            VAR11 = FUN7(VAR4, 8);
                            for (VAR10 = 0; VAR10 < 5; VAR10++)
                                VAR21[VAR10] = VAR26[VAR15][VAR27[VAR11][VAR10]];
                        }
                    }
                    else
                    {
                        for (VAR10 = 0; VAR10 < 5; VAR10++)
                            VAR21[VAR10] = FUN8(VAR8, VAR2->VAR25);
                    }
                    VAR13 = 5;
                    break;
                case 24:
                    if (FUN3(VAR4) >= 7)
                    {
                        VAR11 = FUN7(VAR4, 7);
                        for (VAR10 = 0; VAR10 < 3; VAR10++)
                            VAR21[VAR10] = (VAR30[VAR11][VAR10] - 2.0) * 0.5;
                    }
                    else
                    {
                        for (VAR10 = 0; VAR10 < 3; VAR10++)
                            VAR21[VAR10] = FUN8(VAR8, VAR2->VAR25);
                    }
                    VAR13 = 3;
                    break;
                case 30:
                    if (FUN3(VAR4) >= 4)
                    {
                        unsigned VAR31 = FUN9(VAR4, &VAR32, 0, 1);
                        if (VAR31 < FUN10(VAR33))
                        {
                            VAR21[0] = VAR33[VAR31];
                        }
                        else
                            VAR21[0] = FUN8(VAR8, VAR2->VAR25);
                    }
                    else
                        VAR21[0] = FUN8(VAR8, VAR2->VAR25);
                    VAR13 = 1;
                    break;
                case 34:
                    if (FUN3(VAR4) >= 7)
                    {
                        if (VAR18)
                        {
                            VAR19 = (float)(1 << FUN7(VAR4, 2));
                            VAR21[0] = ((float)FUN7(VAR4, 5) - 16.0) / 15.0;
                            VAR20 = VAR21[0];
                            VAR18 = 0;
                        }
                        else
                        {
                            unsigned VAR31 = FUN9(VAR4, &VAR34, 0, 1);
                            if (VAR31 < FUN10(VAR35))
                            {
                                VAR21[0] = VAR35[VAR31] / VAR19 + VAR20;
                                VAR20 = VAR21[0];
                            }
                            else
                                VAR21[0] = FUN8(VAR8, VAR2->VAR25);
                        }
                    }
                    else
                    {
                        VAR21[0] = FUN8(VAR8, VAR2->VAR25);
                    }
                    VAR13 = 1;
                    break;
                default:
                    VAR21[0] = FUN8(VAR8, VAR2->VAR25);
                    VAR13 = 1;
                    break;
                }
                if (VAR15)
                {
                    float VAR36[10][VAR37];
                    for (VAR10 = 0; VAR10 < VAR13; VAR10++)
                    {
                        VAR36[VAR10][0] = VAR21[VAR10];
                        VAR36[VAR10][1] = (VAR22[(VAR9 + VAR10) / 8]) ? -VAR21[VAR10] : VAR21[VAR10];
                    }
                    for (VAR17 = 0; VAR17 < VAR2->VAR23; VAR17++)
                        for (VAR10 = 0; VAR10 < VAR13; VAR10++)
                            if ((VAR9 + VAR10) < 128)
                                VAR2->VAR38[VAR17][VAR9 + VAR10][VAR8] = VAR2->VAR39[VAR17][VAR8][((VAR9 + VAR10) / 2)] * VAR36[VAR10][VAR17];
                }
                else
                {
                    for (VAR10 = 0; VAR10 < VAR13; VAR10++)
                        if ((VAR9 + VAR10) < 128)
                            VAR2->VAR38[VAR12][VAR9 + VAR10][VAR8] = VAR2->VAR39[VAR12][VAR8][(VAR9 + VAR10) / 2] * VAR21[VAR10];
                }
                VAR9 += VAR13;
            }
        }
    }
}