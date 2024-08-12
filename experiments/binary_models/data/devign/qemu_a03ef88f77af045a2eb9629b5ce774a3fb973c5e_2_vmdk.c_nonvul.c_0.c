static int FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8;
    int VAR9, VAR10;
    VAR11 *VAR12, *VAR13;
    VAR11 *VAR14;
    uint32_t VAR15;
    VAR16 *VAR17;
    uLongf VAR18;
    if (!VAR2->VAR19)
    {
        VAR8 = FUN2(VAR2->VAR20, VAR3 + VAR4, VAR7, VAR6, 0);
        if (VAR8 < 0)
        {
            return VAR8;
        }
        return 0;
    }
    VAR9 = VAR2->VAR21 * 512;
    VAR10 = VAR9 * 2;
    VAR12 = FUN3(VAR10);
    VAR14 = FUN3(VAR9);
    VAR8 = FUN4(VAR2->VAR20, VAR3, VAR12, VAR10);
    if (VAR8 < 0)
    {
        goto VAR22;
    }
    VAR13 = VAR12;
    VAR18 = VAR9;
    VAR15 = VAR9;
    if (VAR2->VAR23)
    {
        VAR17 = (VAR16 *)VAR12;
        VAR13 = VAR17->VAR24;
        VAR15 = FUN5(VAR17->VAR25);
    }
    if (!VAR15 || VAR15 > VAR10)
    {
        VAR8 = -VAR26;
        goto VAR22;
    }
    VAR8 = FUN6(VAR14, &VAR18, VAR13, VAR15);
    if (VAR8 != VAR27)
    {
        VAR8 = -VAR26;
        goto VAR22;
    }
    if (VAR4 < 0 || VAR4 + VAR7 > VAR18)
    {
        VAR8 = -VAR26;
        goto VAR22;
    }
    FUN7(VAR6, 0, VAR14 + VAR4, VAR7);
    VAR8 = 0;
VAR22:
    FUN8(VAR14);
    FUN8(VAR12);
    return VAR8;
}