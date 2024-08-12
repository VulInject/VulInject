int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9, int64_t VAR10, int64_t VAR11, int64_t VAR12)
{
    int VAR13, VAR14;
    uint8_t VAR15[VAR16];
    if (!(VAR2->VAR17 & VAR18))
    {
        VAR2->VAR19 = VAR2->VAR20 = VAR12;
        VAR2->VAR17 |= VAR18;
    }
    if (VAR9 == 0)
    {
        memset(VAR15, 0, sizeof(VAR15));
        VAR8 = VAR15;
    }
    else if (VAR2->VAR20 + VAR9 != VAR2->VAR21[VAR2->VAR22])
    {
        VAR14 = (VAR2->VAR22 + 1) & (VAR23 - 1);
        VAR2->VAR22 = VAR14;
        VAR2->VAR24[VAR14] = VAR2->VAR20;
        VAR2->VAR21[VAR14] = VAR2->VAR20 + VAR9;
        VAR2->VAR25[VAR14] = VAR10;
        VAR2->VAR26[VAR14] = VAR11;
        VAR2->VAR27[VAR14] = VAR12;
    }
    if (VAR2->VAR28)
    {
        VAR2->VAR28 = 0;
        VAR2->VAR29 = VAR2->VAR10;
        VAR2->VAR30 = VAR2->VAR11;
        VAR2->VAR31 = VAR2->VAR12;
        FUN2(VAR2, 0, 0, 0);
    }
    VAR13 = VAR2->VAR32->FUN3(VAR2, VAR4, (const VAR5 **)VAR6, VAR7, VAR8, VAR9);
    FUN4(VAR13 > -0x20000000);
    if (*VAR7)
    {
        VAR2->VAR33 = VAR2->VAR19;
        VAR2->VAR19 = VAR2->VAR20 + VAR13;
        VAR2->VAR28 = 1;
    }
    if (VAR13 < 0)
        VAR13 = 0;
    VAR2->VAR20 += VAR13;
    return VAR13;