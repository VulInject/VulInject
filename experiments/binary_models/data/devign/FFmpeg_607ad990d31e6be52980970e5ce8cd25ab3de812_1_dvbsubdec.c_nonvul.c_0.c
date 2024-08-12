static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    const VAR7 *VAR16, *VAR17;
    int VAR18;
    int VAR19;
    int VAR20;
    int VAR21;
    FUN2(VAR2, "");
    for (VAR21 = 0; VAR21 < VAR9; VAR21++)
    {
        FUN2(VAR2, "", VAR8[VAR21]);
        if (VAR21 % 16 == 15)
            FUN2(VAR2, "");
    }
    if (VAR21 % 16)
        FUN2(VAR2, "");
    if (VAR9 <= 6 || *VAR8 != 0x0f)
    {
        FUN2(VAR2, "");
        return VAR22;
    }
    VAR16 = VAR8;
    VAR17 = VAR8 + VAR9;
    while (VAR17 - VAR16 >= 6 && *VAR16 == 0x0f)
    {
        VAR16 += 1;
        VAR18 = *VAR16++;
        VAR19 = FUN3(VAR16);
        VAR16 += 2;
        VAR20 = FUN3(VAR16);
        VAR16 += 2;
        if (VAR17 - VAR16 < VAR20)
        {
            FUN2(VAR2, "");
            return -1;
        }
        if (VAR19 == VAR12->VAR23 || VAR19 == VAR12->VAR24 || VAR12->VAR23 == -1 || VAR12->VAR24 == -1)
        {
            int VAR25 = 0;
            switch (VAR18)
            {
            case VAR26:
                VAR25 = FUN4(VAR2, VAR16, VAR20);
                break;
            case VAR27:
                VAR25 = FUN5(VAR2, VAR16, VAR20);
                break;
            case VAR28:
                VAR25 = FUN6(VAR2, VAR16, VAR20);
                break;
            case VAR29:
                VAR25 = FUN7(VAR2, VAR16, VAR20);
                break;
            case VAR30:
                VAR25 = FUN8(VAR2, VAR16, VAR20);
                break;
            case VAR31:
                VAR25 = FUN9(VAR2, VAR16, VAR20, VAR15);
                *VAR4 = VAR25;
                break;
            default:
                FUN2(VAR2, "", VAR18, VAR19, VAR20);
                break;
            }
            if (VAR25 < 0)
                return VAR25;
        }
        VAR16 += VAR20;
    }
    return VAR16 - VAR8;
}