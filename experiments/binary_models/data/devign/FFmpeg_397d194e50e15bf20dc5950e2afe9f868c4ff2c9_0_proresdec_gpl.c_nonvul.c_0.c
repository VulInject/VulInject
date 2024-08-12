static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11;
    unsigned VAR12;
    int VAR13, VAR14;
    int VAR15, VAR16, VAR17;
    const VAR3 *VAR18, *VAR19;
    VAR10 = VAR4[0] >> 3;
    if (VAR10 < 8 || VAR10 > VAR5)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR12 = FUN3(VAR4 + 1);
    if (VAR12 > VAR5)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR13 = VAR4[7] >> 4;
    VAR14 = VAR4[7] & 0xF;
    if (VAR13 > 3 || VAR14)
    {
        FUN2(VAR2, VAR20, "", 1 << VAR13, 1 << VAR14);
        return -1;
    }
    VAR7->VAR21 = (VAR2->VAR22 + 15) >> 4;
    if (VAR7->VAR23)
        VAR7->VAR24 = (VAR2->VAR25 + 31) >> 5;
    else
        VAR7->VAR24 = (VAR2->VAR25 + 15) >> 4;
    VAR11 = FUN4(VAR4 + 5);
    if (VAR7->VAR11 != VAR11 || !VAR7->VAR26)
    {
        FUN5(&VAR7->VAR26);
        VAR7->VAR26 = FUN6(VAR11 * sizeof(*VAR7->VAR26));
        if (!VAR7->VAR26)
            return FUN7(VAR27);
        VAR7->VAR11 = VAR11;
    }
    if (!VAR11)
        return FUN7(VAR28);
    if (VAR10 + VAR11 * 2 > VAR5)
    {
        FUN2(VAR2, VAR20, "");
        return -1;
    }
    VAR19 = VAR4 + VAR10;
    VAR18 = VAR19 + VAR11 * 2;
    VAR15 = 1 << VAR13;
    VAR16 = 0;
    VAR17 = 0;
    for (VAR9 = 0; VAR9 < VAR11; VAR9++)
    {
        VAR29 *VAR30 = &VAR7->VAR26[VAR9];
        VAR30->VAR31 = VAR18;
        VAR18 += FUN4(VAR19 + VAR9 * 2);
        while (VAR7->VAR21 - VAR16 < VAR15)
            VAR15 >>= 1;
        VAR30->VAR16 = VAR16;
        VAR30->VAR17 = VAR17;
        VAR30->VAR32 = VAR15;
        VAR30->VAR33 = VAR18 - VAR30->VAR31;
        if (VAR30->VAR33 < 6)
        {
            FUN2(VAR2, VAR20, "");
            return -1;
        }
        VAR16 += VAR15;
        if (VAR16 == VAR7->VAR21)
        {
            VAR15 = 1 << VAR13;
            VAR16 = 0;
            VAR17++;
        }
        if (VAR18 > VAR4 + VAR5)
        {
            FUN2(VAR2, VAR20, "");
            return -1;
        }
    }
    if (VAR16 || VAR17 != VAR7->VAR24)
    {
        FUN2(VAR2, VAR20, "", VAR17, VAR7->VAR24);
        return -1;
    }
    return VAR12;
}