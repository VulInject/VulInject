static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    int VAR9;
    int VAR10[6];
    int VAR11[6];
    int VAR12 = 0;
    int VAR13 = 0;
    int VAR14 = 0;
    int VAR15 = 0;
    int VAR16;
    int VAR17;
    if (VAR2->VAR18)
        return 0;
    memset(VAR10, 0, 6 * sizeof(int));
    memset(VAR11, 0, 6 * sizeof(int));
    VAR9 = FUN2(VAR4);
    for (VAR8 = 0; VAR8 < VAR2->VAR19; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR20; VAR7++)
        {
            for (VAR5 = 0; VAR5 < 4; VAR5++)
            {
                int VAR21 = 2 * VAR7 + (VAR5 >> 1);
                int VAR22 = 2 * VAR8 + (((VAR5 >> 1) + VAR5) & 1);
                VAR16 = VAR22 * VAR2->VAR23 + VAR21;
                if (VAR21 >= VAR2->VAR23 || VAR22 >= VAR2->VAR24 || (VAR2->VAR25[VAR16] == VAR26))
                    continue;
                switch (VAR2->VAR25[VAR16])
                {
                case VAR27:
                case VAR28:
                    if (VAR9 == 0)
                    {
                        VAR10[0] = VAR29[FUN3(VAR4, VAR2->VAR30.VAR31, 6, 2)];
                        VAR11[0] = VAR29[FUN3(VAR4, VAR2->VAR30.VAR31, 6, 2)];
                    }
                    else
                    {
                        VAR10[0] = VAR32[FUN4(VAR4, 6)];
                        VAR11[0] = VAR32[FUN4(VAR4, 6)];
                    }
                    if (VAR2->VAR25[VAR16] == VAR27)
                    {
                        VAR14 = VAR12;
                        VAR15 = VAR13;
                        VAR12 = VAR10[0];
                        VAR13 = VAR11[0];
                    }
                    break;
                case VAR33:
                    VAR14 = VAR12;
                    VAR15 = VAR13;
                    VAR10[4] = VAR11[4] = 0;
                    for (VAR6 = 0; VAR6 < 4; VAR6++)
                    {
                        VAR17 = VAR34 * VAR2->VAR35 + VAR36;
                        if (VAR2->VAR37[VAR17].VAR38 != VAR26)
                        {
                            if (VAR9 == 0)
                            {
                                VAR10[VAR6] = VAR29[FUN3(VAR4, VAR2->VAR30.VAR31, 6, 2)];
                                VAR11[VAR6] = VAR29[FUN3(VAR4, VAR2->VAR30.VAR31, 6, 2)];
                            }
                            else
                            {
                                VAR10[VAR6] = VAR32[FUN4(VAR4, 6)];
                                VAR11[VAR6] = VAR32[FUN4(VAR4, 6)];
                            }
                            VAR12 = VAR10[VAR6];
                            VAR13 = VAR11[VAR6];
                        }
                        else
                        {
                            VAR10[VAR6] = 0;
                            VAR11[VAR6] = 0;
                        }
                        VAR10[4] += VAR10[VAR6];
                        VAR11[4] += VAR11[VAR6];
                    }
                    VAR10[5] = VAR10[4] = FUN5(VAR10[4], 2);
                    VAR11[5] = VAR11[4] = FUN5(VAR11[4], 2);
                    break;
                case VAR39:
                    VAR10[0] = VAR12;
                    VAR11[0] = VAR13;
                    break;
                case VAR40:
                    VAR10[0] = VAR14;
                    VAR11[0] = VAR15;
                    VAR14 = VAR12;
                    VAR15 = VAR13;
                    VAR12 = VAR10[0];
                    VAR13 = VAR11[0];
                    break;
                default:
                    VAR10[0] = 0;
                    VAR11[0] = 0;
                    break;
                }
                for (VAR6 = 0; VAR6 < 4; VAR6++)
                {
                    VAR17 = VAR34 * VAR2->VAR35 + VAR36;
                    if (VAR2->VAR25[VAR16] == VAR33)
                    {
                        VAR2->VAR37[VAR17].VAR10 = VAR10[VAR6];
                        VAR2->VAR37[VAR17].VAR11 = VAR11[VAR6];
                    }
                    else
                    {
                        VAR2->VAR37[VAR17].VAR10 = VAR10[0];
                        VAR2->VAR37[VAR17].VAR11 = VAR11[0];
                    }
                }
                for (VAR6 = 0; VAR6 < 2; VAR6++)
                {
                    VAR17 = VAR2->VAR41[VAR6 + 1] + VAR22 * (VAR2->VAR35 >> 1) + VAR21;
                    if (VAR2->VAR25[VAR16] == VAR33)
                    {
                        VAR2->VAR37[VAR17].VAR10 = VAR10[VAR6 + 4];
                        VAR2->VAR37[VAR17].VAR11 = VAR11[VAR6 + 4];
                    }
                    else
                    {
                        VAR2->VAR37[VAR17].VAR10 = VAR10[0];
                        VAR2->VAR37[VAR17].VAR11 = VAR11[0];
                    }
                }
            }
        }
    }
    return 0;
}