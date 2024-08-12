static int FUN1(VAR1 *VAR2, VAR3 *VAR4, ivi_mc_func VAR5, int VAR6, int VAR7, int *VAR8, int VAR9, int VAR10, uint32_t VAR11, int VAR12, VAR13 *VAR14)
{
    const VAR15 *VAR16 = VAR9 ? VAR4->VAR17 : VAR4->VAR18;
    VAR19 *VAR20 = VAR4->VAR21;
    uint8_t VAR22[8];
    int32_t VAR23[64];
    uint32_t VAR24 = 0, VAR25, VAR26, VAR27;
    int VAR28, VAR29, VAR30;
    int VAR31 = VAR4->VAR31;
    int VAR32 = VAR31 * VAR31;
    int VAR33 = VAR31 - 1;
    int VAR34 = -1;
    int VAR35 = VAR4->VAR36 * (VAR4->VAR37 - 1) + VAR4->VAR37;
    int VAR38 = VAR4->VAR36 * VAR4->VAR39 - VAR12;
    if (VAR35 > VAR38)
        return VAR40;
    if (!VAR4->VAR41)
    {
        FUN2(VAR14, VAR42, "");
        return VAR40;
    }
    memset(VAR23, 0, VAR32 * sizeof(VAR23[0]));
    memset(VAR22, 0, sizeof(VAR22));
    while (VAR34 <= VAR32)
    {
        VAR24 = FUN3(VAR2, VAR4->VAR43.VAR44->VAR45, VAR46, 1);
        if (VAR24 == VAR20->VAR47)
            break;
        if (VAR24 == VAR20->VAR48)
        {
            VAR29 = FUN3(VAR2, VAR4->VAR43.VAR44->VAR45, VAR46, 1) + 1;
            VAR25 = FUN3(VAR2, VAR4->VAR43.VAR44->VAR45, VAR46, 1);
            VAR26 = FUN3(VAR2, VAR4->VAR43.VAR44->VAR45, VAR46, 1);
            VAR30 = FUN4((VAR26 << 6) | VAR25);
        }
        else
        {
            if (VAR24 >= 256U)
            {
                FUN2(VAR14, VAR42, "", VAR24);
                return VAR40;
            }
            VAR29 = VAR20->VAR49[VAR24];
            VAR30 = VAR20->VAR50[VAR24];
        }
        VAR34 += VAR29;
        if (VAR34 >= VAR32 || VAR34 < 0)
            break;
        VAR28 = VAR4->VAR41[VAR34];
        if (!VAR30)
            FUN5(VAR14, "");
        VAR27 = (VAR16[VAR28] * VAR11) >> 9;
        if (VAR27 > 1)
            VAR30 = VAR30 * VAR27 + FUN6(VAR30) * (((VAR27 ^ 1) - 1) >> 1);
        VAR23[VAR28] = VAR30;
        VAR22[VAR28 & VAR33] |= !!VAR30;
    }
    if (VAR34 < 0 || VAR34 >= VAR32 && VAR24 != VAR20->VAR47)
        return VAR40;
    if (VAR9 && VAR4->VAR51)
    {
        *VAR8 += VAR23[0];
        VAR23[0] = *VAR8;
        VAR22[0] |= !!*VAR8;
    }
    VAR4->FUN7(VAR23, VAR4->VAR52 + VAR12, VAR4->VAR36, VAR22);
    if (!VAR9)
        return FUN8(VAR4, VAR5, VAR12, VAR6, VAR7, VAR10);
    return 0;
}