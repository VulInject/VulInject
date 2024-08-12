static VAR1 FUN1(AudioDeviceID VAR2, const VAR3 *VAR4, const VAR5 *VAR6, const VAR3 *VAR7, VAR5 *VAR8, const VAR3 *VAR9, void *VAR10)
{
    UInt32 VAR11, VAR12;
    float *VAR13 = VAR8->VAR14[0].VAR15;
    VAR16 *VAR17 = VAR10;
    VAR18 *VAR19 = (VAR18 *)VAR10;
    int VAR20, VAR21;
    struct VAR22 *VAR23;
    const float VAR24 = 1.VAR25 / VAR26;
    const float VAR24 = VAR26;
    if (FUN2(VAR19, ""))
    {
        VAR7 = 0;
        return 0;
    }
    VAR12 = VAR19->VAR27;
    VAR21 = VAR19->VAR21;
    if (VAR21 < VAR12)
    {
        VAR7 = 0;
        FUN3(VAR19, "");
        return 0;
    }
    VAR20 = VAR19->VAR20;
    VAR23 = VAR17->VAR28 + VAR20;
    for (VAR11 = 0; VAR11 < VAR12; VAR11++)
    {
        *VAR13++ = VAR23[VAR11].VAR29;
        *VAR13++ = VAR23[VAR11].VAR30;
        *VAR13++ = VAR23[VAR11].VAR29 * VAR24;
        *VAR13++ = VAR23[VAR11].VAR30 * VAR24;
        *VAR13++ = VAR23[VAR11].VAR29 / VAR24;
        *VAR13++ = VAR23[VAR11].VAR30 / VAR24;
    }
    VAR20 = (VAR20 + VAR12) % VAR17->VAR31;
    VAR19->VAR32 += VAR12;
    VAR19->VAR20 = VAR20;
    FUN3(VAR19, "");
    return 0;
}