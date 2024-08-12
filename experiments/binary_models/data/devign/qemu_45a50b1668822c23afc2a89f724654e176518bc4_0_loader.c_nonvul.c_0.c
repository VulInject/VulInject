int FUN1(const char *VAR1, int64_t VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    uint8_t VAR15[VAR16];
    VAR10 = open(VAR1, VAR17 | VAR18);
    if (VAR10 < 0)
    {
        FUN2(VAR1);
        return -1;
    }
    if (read(VAR10, VAR15, sizeof(VAR15)) != sizeof(VAR15))
        goto VAR19;
    if (VAR15[0] != VAR20 || VAR15[1] != VAR21 || VAR15[2] != VAR22 || VAR15[3] != VAR23)
        goto VAR19;
    VAR11 = VAR24;
    VAR11 = VAR25;
    VAR13 = VAR11 != VAR15[VAR26];
    if (VAR7)
    {
        VAR12 = VAR24;
    }
    else
    {
        VAR12 = VAR25;
    }
    if (VAR12 != VAR15[VAR26])
        return -1;
    FUN3(VAR10, 0, VAR27);
    if (VAR15[VAR28] == VAR29)
    {
        VAR14 = FUN4(VAR1, VAR10, VAR2, VAR13, VAR4, VAR5, VAR6, VAR8, VAR9);
    }
    else
    {
        VAR14 = FUN5(VAR1, VAR10, VAR2, VAR13, VAR4, VAR5, VAR6, VAR8, VAR9);
    }
    close(VAR10);
    return VAR14;
VAR19:
    close(VAR10);
    return -1;
}