int FUN1(const char *VAR1, FUN2 (*VAR2)(void *, VAR3), void *VAR4, VAR3 *VAR5, VAR3 *VAR6, VAR3 *VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    uint8_t VAR16[VAR17];
    VAR11 = open(VAR1, VAR18 | VAR19);
    if (VAR11 < 0)
    {
        FUN3(VAR1);
        return -1;
    }
    if (read(VAR11, VAR16, sizeof(VAR16)) != sizeof(VAR16))
        goto VAR20;
    if (VAR16[0] != VAR21 || VAR16[1] != VAR22 || VAR16[2] != VAR23 || VAR16[3] != VAR24)
        goto VAR20;
    VAR12 = VAR25;
    VAR12 = VAR26;
    VAR14 = VAR12 != VAR16[VAR27];
    if (VAR8)
    {
        VAR13 = VAR25;
    }
    else
    {
        VAR13 = VAR26;
    }
    if (VAR13 != VAR16[VAR27])
        return -1;
    FUN4(VAR11, 0, VAR28);
    if (VAR16[VAR29] == VAR30)
    {
        VAR15 = FUN5(VAR1, VAR11, VAR2, VAR4, VAR14, VAR5, VAR6, VAR7, VAR9, VAR10);
    }
    else
    {
        VAR15 = FUN6(VAR1, VAR11, VAR2, VAR4, VAR14, VAR5, VAR6, VAR7, VAR9, VAR10);
    }
    close(VAR11);
    return VAR15;
VAR20:
    close(VAR11);
    return -1;
}