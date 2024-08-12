static int FUN1(char *VAR1, int64_t VAR2, uint32_t VAR3, VAR4 *VAR5, int VAR6, const char *VAR7, const char *VAR8)
{
    SheepdogVdiReq VAR9;
    VAR10 *VAR11 = (VAR10 *)&VAR9;
    int VAR12, VAR13;
    unsigned int VAR14, VAR15 = 0;
    char VAR16[VAR17];
    VAR12 = FUN2(VAR7, VAR8);
    if (VAR12 < 0)
    {
        return VAR12;
    }
    memset(VAR16, 0, sizeof(VAR16));
    strncpy(VAR16, VAR1, VAR17);
    memset(&VAR9, 0, sizeof(VAR9));
    VAR9.VAR18 = VAR19;
    VAR9.VAR20 = VAR3;
    VAR14 = VAR17;
    VAR9.VAR21 = VAR22;
    VAR9.VAR23 = VAR6;
    VAR9.VAR24 = VAR14;
    VAR9.VAR2 = VAR2;
    VAR13 = FUN3(VAR12, (VAR25 *)&VAR9, VAR16, &VAR14, &VAR15);
    FUN4(VAR12);
    if (VAR13)
    {
        return VAR13;
    }
    if (VAR11->VAR26 != VAR27)
    {
        FUN5("", FUN6(VAR11->VAR26), VAR1);
        return -VAR28;
    }
    if (VAR5)
    {
        *VAR5 = VAR11->VAR5;
    }
    return 0;
}