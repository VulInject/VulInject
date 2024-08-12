static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    uint32_t VAR14;
    int VAR15, VAR16;
    VAR15 = VAR9;
    if (VAR9 < VAR17)
    {
        FUN2(VAR2, VAR18, "");
        return VAR19;
    }
    if (VAR15 > VAR20)
        VAR15 = VAR20;
    VAR14 = FUN3(VAR8) | 0xffe00000;
    VAR16 = FUN4((VAR21 *)VAR12, VAR14);
    if (VAR16 < 0)
    {
        FUN2(VAR2, VAR18, "");
        return VAR16;
    }
    VAR2->VAR22 = VAR12->VAR22;
    VAR2->VAR23 = VAR12->VAR24;
    VAR2->VAR25 = VAR12->VAR24 == 1 ? VAR26 : VAR27;
    if (!VAR2->VAR28)
        VAR2->VAR28 = VAR12->VAR28;
    VAR12->VAR29 = VAR15;
    VAR12->VAR30 = VAR3;
    VAR16 = FUN5(VAR12, NULL, VAR8, VAR9);
    if (VAR16 < 0)
    {
        FUN2(VAR2, VAR18, "");
        return VAR16;
    }
    *VAR4 = 1;
    return VAR9;
}