static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    const VAR7 *VAR11;
    uint8_t VAR12;
    int VAR13;
    int VAR14, VAR15;
    FUN2(VAR2, "");
    for (VAR14 = 0; VAR14 < VAR9; VAR14++)
    {
        FUN2(VAR2, "", VAR8[VAR14]);
        if (VAR14 % 16 == 15)
            FUN2(VAR2, "");
    }
    if (VAR14 & 15)
        FUN2(VAR2, "");
    *VAR4 = 0;
    if (VAR9 < 3)
        return -1;
    VAR11 = VAR8 + VAR9;
    while (VAR8 < VAR11)
    {
        VAR12 = FUN3(&VAR8);
        VAR13 = FUN4(&VAR8);
        FUN2(VAR2, "", VAR13, VAR12);
        if (VAR12 != VAR16 && VAR13 > VAR11 - VAR8)
            break;
        VAR15 = 0;
        switch (VAR12)
        {
        case VAR17:
            VAR15 = FUN5(VAR2, VAR8, VAR13);
            break;
        case VAR18:
            VAR15 = FUN6(VAR2, VAR8, VAR13);
            break;
        case VAR19:
            VAR15 = FUN7(VAR2, VAR8, VAR13, VAR6->VAR20);
            break;
        case VAR21:
            break;
        case VAR16:
            VAR15 = FUN8(VAR2, VAR3, VAR8, VAR13);
            if (VAR15 >= 0)
                *VAR4 = VAR15;
            break;
        default:
            FUN9(VAR2, VAR22, "", VAR12, VAR13);
            VAR15 = VAR23;
            break;
        }
        if (VAR15 < 0 && (VAR2->VAR24 & VAR25))
            return VAR15;
        VAR8 += VAR13;
    }
    return VAR9;
}