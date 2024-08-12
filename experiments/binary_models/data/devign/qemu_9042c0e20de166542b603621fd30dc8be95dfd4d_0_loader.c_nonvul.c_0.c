int FUN1(const char *VAR1, int64_t VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    uint8_t VAR10[VAR11];
    VAR5 = open(VAR1, VAR12 | VAR13);
    if (VAR5 < 0)
    {
        FUN2(VAR1);
        return -1;
    }
    if (read(VAR5, VAR10, sizeof(VAR10)) != sizeof(VAR10))
        goto VAR14;
    if (VAR10[0] != VAR15 || VAR10[1] != VAR16 || VAR10[2] != VAR17 || VAR10[3] != VAR18)
        goto VAR14;
    VAR6 = VAR19;
    VAR6 = VAR20;
    VAR8 = VAR6 != VAR10[VAR21];
    VAR7 = VAR19;
    VAR7 = VAR20;
    if (VAR7 != VAR10[VAR21])
        return -1;
    FUN3(VAR5, 0, VAR22);
    if (VAR10[VAR23] == VAR24)
    {
        VAR9 = FUN4(VAR5, VAR2, VAR8, VAR4);
    }
    else
    {
        VAR9 = FUN5(VAR5, VAR2, VAR8, VAR4);
    }
    close(VAR5);
    return VAR9;
VAR14:
    close(VAR5);
    return -1;
}