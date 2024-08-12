static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    VAR16 *VAR17;
    int VAR18, VAR19 = VAR11, VAR20 = 0;
    uint32_t VAR21;
    VAR22 **VAR23;
    VAR22 *VAR24[2];
    int VAR25, VAR26, VAR27;
    VAR8->VAR28 = VAR29;
    if ((VAR27 = FUN2(VAR2, VAR8, 0)) < 0)
    {
        FUN3(VAR2, VAR30, "");
        return VAR27;
    }
    VAR23 = (VAR22 **)VAR8->VAR31;
    if (VAR11 < VAR32)
        return VAR33;
    VAR2->VAR34 = 0;
    VAR26 = 0;
    for (VAR25 = 0; VAR25 < VAR14->VAR35; VAR25++)
    {
        VAR18 = FUN4(VAR10) >> 4;
        VAR18 = FUN5(VAR18, VAR19, VAR36);
        VAR17 = VAR14->VAR37[VAR25];
        assert(VAR17 != NULL);
        if (VAR18 < VAR32)
        {
            FUN3(VAR2, VAR30, "");
            return VAR33;
        }
        VAR21 = (FUN6(VAR10) & 0x000fffff) | VAR14->VAR38;
        VAR27 = FUN7((VAR39 *)VAR17, VAR21);
        if (VAR27 < 0)
            break;
        if (VAR26 + VAR17->VAR40 > VAR2->VAR41 || VAR14->VAR42[VAR25] + VAR17->VAR40 > VAR2->VAR41)
        {
            FUN3(VAR2, VAR30, ""
                                        "");
            return VAR33;
        }
        VAR26 += VAR17->VAR40;
        VAR24[0] = VAR23[VAR14->VAR42[VAR25]];
        if (VAR17->VAR40 > 1)
            VAR24[1] = VAR23[VAR14->VAR42[VAR25] + 1];
        if ((VAR27 = FUN8(VAR17, VAR24, VAR10, VAR18)) < 0)
            return VAR27;
        VAR20 += VAR27;
        VAR10 += VAR18;
        VAR19 -= VAR18;
        VAR2->VAR34 += VAR17->VAR34;
    }
    VAR2->VAR43 = VAR14->VAR37[0]->VAR43;
    VAR8->VAR28 = VAR20 / (VAR2->VAR41 * sizeof(VAR22));
    *VAR4 = 1;
    return VAR11;
}