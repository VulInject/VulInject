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
    FUN2(VAR2, VAR22, "");
    for (VAR21 = 0; VAR21 < VAR9; VAR21++)
    {
        FUN2(VAR2, VAR22, "", VAR8[VAR21]);
        if (VAR21 % 16 == 15)
            FUN2(VAR2, VAR22, "");
    }
    if (VAR21 % 16)
        FUN2(VAR2, VAR22, "");
    if (VAR9 <= 2 || *VAR8 != 0x0f)
        return -1;
    VAR16 = VAR8;
    VAR17 = VAR8 + VAR9;
    while (VAR16 < VAR17 && *VAR16 == 0x0f)
    {
        VAR16 += 1;
        VAR18 = *VAR16++;
        VAR19 = FUN3(VAR16);
        VAR16 += 2;
        VAR20 = FUN3(VAR16);
        VAR16 += 2;
        if (VAR19 == VAR12->VAR23 || VAR19 == VAR12->VAR24 || VAR12->VAR23 == -1 || VAR12->VAR24 == -1)
        {
            switch (VAR18)
            {
            case VAR25:
                FUN4(VAR2, VAR16, VAR20);
                break;
            case VAR26:
                FUN5(VAR2, VAR16, VAR20);
                break;
            case VAR27:
                FUN6(VAR2, VAR16, VAR20);
                break;
            case VAR28:
                FUN7(VAR2, VAR16, VAR20);
                break;
            case VAR29:
                FUN8(VAR2, VAR16, VAR20);
            case VAR30:
                *VAR4 = FUN9(VAR2, VAR16, VAR20, VAR15);
                break;
            default:
                FUN10(VAR2, "", VAR18, VAR19, VAR20);
                break;
            }
        }
        VAR16 += VAR20;
    }
    return VAR16 - VAR8;
}