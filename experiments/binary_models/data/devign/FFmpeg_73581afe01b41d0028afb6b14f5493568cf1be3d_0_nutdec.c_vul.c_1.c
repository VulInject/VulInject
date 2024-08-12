static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR10->VAR14;
    VAR15 *VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    uint64_t VAR23;
    if (FUN2(VAR13) > VAR2->VAR24 + VAR2->VAR25)
    {
        FUN3(VAR10, VAR26, "" VAR27 "" VAR27 "", FUN2(VAR13), VAR2->VAR24, VAR2->VAR25);
        return VAR28;
    }
    VAR18 = VAR2->VAR8[VAR8].VAR18;
    VAR19 = VAR2->VAR8[VAR8].VAR19;
    VAR17 = VAR2->VAR8[VAR8].VAR29;
    *VAR5 = VAR2->VAR8[VAR8].VAR5;
    VAR20 = VAR2->VAR8[VAR8].VAR20;
    VAR22 = VAR2->VAR8[VAR8].VAR22;
    *VAR7 = VAR2->VAR8[VAR8].VAR7;
    if (VAR18 & VAR30)
        return VAR28;
    if (VAR18 & VAR31)
        VAR18 ^= FUN4(VAR13);
    if (VAR18 & VAR32)
    {
        FUN5(*VAR5, VAR23 < VAR10->VAR33);
    }
    VAR16 = &VAR2->VAR34[*VAR5];
    if (VAR18 & VAR35)
    {
        int VAR36 = FUN4(VAR13);
        if (VAR36 < (1 << VAR16->VAR37))
        {
            *VAR4 = FUN6(VAR16, VAR36);
        }
        else
            *VAR4 = VAR36 - (1 << VAR16->VAR37);
    }
    else
        *VAR4 = VAR16->VAR38 + VAR20;
    if (VAR18 & VAR39)
        VAR17 += VAR19 * FUN4(VAR13);
    if (VAR18 & VAR40)
        FUN7(VAR13);
    if (VAR18 & VAR41)
        *VAR7 = FUN4(VAR13);
    if (VAR18 & VAR42)
        VAR22 = FUN4(VAR13);
    for (VAR21 = 0; VAR21 < VAR22; VAR21++)
        FUN4(VAR13);
    if (*VAR7 >= (unsigned)VAR2->VAR43)
    {
        FUN3(VAR10, VAR26, "");
        return VAR28;
    }
    if (VAR17 > 4096)
        *VAR7 = 0;
    VAR17 -= VAR2->VAR44[*VAR7];
    if (VAR18 & VAR45)
    {
        FUN8(VAR13);
    }
    else if (VAR17 > 2 * VAR2->VAR25 || FUN9(VAR16->VAR38 - *VAR4) > VAR16->VAR46)
    {
        FUN3(VAR10, VAR26, "");
        return VAR28;
    }
    VAR16->VAR38 = *VAR4;
    VAR16->VAR47 = VAR18;
    return VAR17;
}