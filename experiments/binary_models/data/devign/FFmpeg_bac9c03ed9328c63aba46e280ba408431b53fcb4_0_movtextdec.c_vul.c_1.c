static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12;
    AVBPrint VAR13;
    char *VAR14 = VAR6->VAR3;
    char *VAR15;
    int VAR16, VAR17, VAR18;
    uint64_t VAR19;
    const VAR20 *VAR21;
    if (!VAR14 || VAR6->VAR22 < 2)
        return VAR23;
    if (VAR6->VAR22 == 2)
        return FUN2(VAR14) == 0 ? 0 : VAR23;
    VAR16 = FUN2(VAR14);
    VAR15 = VAR14 + FUN3(2 + VAR16, VAR6->VAR22);
    VAR14 += 2;
    VAR19 = 0;
    VAR10->VAR24 = 2 + VAR16;
    VAR10->VAR25 = 0;
    VAR10->VAR26 = 0;
    VAR10->VAR27 = 0;
    FUN4(&VAR13, 0, VAR28);
    if (VAR16 + 2 != VAR6->VAR22)
    {
        while (VAR10->VAR24 + 8 <= VAR6->VAR22)
        {
            VAR21 = VAR14 + VAR10->VAR24 - 2;
            VAR19 = FUN5(VAR21);
            VAR21 += 4;
            VAR17 = FUN5(VAR21);
            VAR21 += 4;
            if (VAR19 == 1)
            {
                if (VAR10->VAR24 + 16 > VAR6->VAR22)
                    break;
                VAR19 = FUN6(VAR21);
                VAR21 += 8;
                VAR10->VAR29 = 16;
            }
            else
                VAR10->VAR29 = 8;
            if (VAR19 == 0)
            {
                FUN7(VAR2, VAR30, "");
                return VAR23;
            }
            if (VAR19 > VAR6->VAR22 - VAR10->VAR24)
                break;
            for (size_t VAR31 = 0; VAR31 < VAR32; VAR31++)
            {
                if (VAR17 == VAR33[VAR31].VAR34)
                {
                    if (VAR10->VAR24 + VAR10->VAR29 + VAR33[VAR31].VAR35 > VAR6->VAR22)
                        break;
                    VAR18 = VAR33[VAR31].FUN8(VAR21, VAR10, VAR6);
                    if (VAR18 == -1)
                        break;
                }
            }
            VAR10->VAR24 = VAR10->VAR24 + VAR19;
        }
        FUN9(&VAR13, VAR14, VAR15, VAR10);
    }
    else
        FUN9(&VAR13, VAR14, VAR15, VAR10);
    VAR12 = FUN10(VAR8, VAR13.VAR36, VAR10->VAR37++, 0, NULL, NULL);
    FUN11(&VAR13, NULL);
    if (VAR12 < 0)
        return VAR12;
    *VAR4 = VAR8->VAR38 > 0;
    return VAR6->VAR22;