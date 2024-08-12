static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR6;
    VAR3 *VAR9 = VAR4;
    VAR10 *VAR11, *VAR12, *VAR13;
    uint32_t VAR14;
    int VAR15, VAR16;
    int VAR17 = 0;
    if (VAR5 < VAR2->VAR18 * VAR2->VAR19 * 4)
    {
        FUN2(VAR2, VAR20, "");
        return FUN3(VAR21);
    }
    VAR2->VAR22->VAR23 = 0;
    VAR2->VAR22->VAR24 = 1;
    VAR2->VAR22->VAR25 = VAR26;
    VAR11 = (VAR10 *)VAR8->VAR6[0];
    VAR12 = (VAR10 *)VAR8->VAR6[1];
    VAR13 = (VAR10 *)VAR8->VAR6[2];
    for (VAR15 = 0; VAR15 < VAR2->VAR19; VAR15++)
    {
        for (VAR16 = 0; VAR16 < VAR2->VAR18; VAR16++)
        {
            VAR14 = VAR12[VAR16] << 2;
            VAR14 |= VAR11[VAR16] << 12;
            VAR14 |= VAR13[VAR16] << 22;
            FUN4(VAR9, VAR14);
            VAR9 += 4;
            VAR17 += 4;
        }
        VAR11 += VAR8->VAR27[0] >> 1;
        VAR12 += VAR8->VAR27[1] >> 1;
        VAR13 += VAR8->VAR27[2] >> 1;
    }
    return VAR17;
}