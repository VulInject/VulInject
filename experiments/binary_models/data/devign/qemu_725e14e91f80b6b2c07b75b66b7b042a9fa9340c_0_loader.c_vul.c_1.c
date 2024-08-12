int FUN1(const char *VAR1, target_phys_addr_t VAR2, int VAR3, int VAR4, target_phys_addr_t VAR5)
{
    int VAR6, VAR7, VAR8;
    struct exec VAR9;
    uint32_t VAR10;
    VAR6 = open(VAR1, VAR11 | VAR12);
    if (VAR6 < 0)
        return -1;
    VAR7 = read(VAR6, &VAR9, sizeof(VAR9));
    if (VAR7 < 0)
        goto VAR13;
    if (VAR4)
    {
        FUN2(&VAR9);
    }
    VAR10 = FUN3(VAR9);
    switch (VAR10)
    {
    case VAR14:
    case VAR15:
    case VAR16:
        if (VAR9.VAR17 + VAR9.VAR18 > VAR3)
            goto VAR13;
        FUN4(VAR6, FUN5(VAR9), VAR19);
        VAR7 = FUN6(VAR1, VAR6, VAR2, VAR9.VAR17 + VAR9.VAR18);
        if (VAR7 < 0)
            goto VAR13;
        break;
    case VAR20:
        if (FUN7(VAR9, VAR5) + VAR9.VAR18 > VAR3)
            goto VAR13;
        FUN4(VAR6, FUN5(VAR9), VAR19);
        VAR7 = FUN6(VAR1, VAR6, VAR2, VAR9.VAR17);
        if (VAR7 < 0)
            goto VAR13;
        VAR8 = FUN6(VAR1, VAR6, VAR2 + FUN7(VAR9, VAR5), VAR9.VAR18);
        if (VAR8 < 0)
            goto VAR13;
        VAR7 += VAR8;
        break;
    default:
        goto VAR13;
    }
    close(VAR6);
    return VAR7;
VAR13:
    close(VAR6);
    return -1;
}