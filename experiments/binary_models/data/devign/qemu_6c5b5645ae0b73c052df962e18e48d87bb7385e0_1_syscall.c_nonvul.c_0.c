static inline VAR1 FUN1(int VAR2, struct VAR3 *VAR4, abi_ulong VAR5, socklen_t VAR6)
{
    const socklen_t VAR7 = sizeof(struct VAR8);
    sa_family_t VAR9;
    struct VAR10 *VAR11;
    if (FUN2(VAR2))
    {
        return FUN2(VAR2)(VAR4, VAR5, VAR6);
    }
    VAR11 = FUN3(VAR12, VAR5, VAR6, 1);
    if (!VAR11)
        return -VAR13;
    VAR9 = FUN4(VAR11->VAR9);
    if (VAR9 == VAR14)
    {
        if (VAR6 < VAR7 && VAR6 > 0)
        {
            char *VAR15 = (char *)VAR11;
            if (VAR15[VAR6 - 1] && !VAR15[VAR6])
                VAR6++;
        }
        if (VAR6 > VAR7)
            VAR6 = VAR7;
    }
    memcpy(VAR4, VAR11, VAR6);
    VAR4->VAR9 = VAR9;
    if (VAR9 == VAR16)
    {
        struct VAR17 *VAR18;
        VAR18 = (struct VAR17 *)VAR4;
        VAR18->VAR19 = FUN5(VAR18->VAR19);
        VAR18->VAR20 = FUN5(VAR18->VAR20);
    }
    else if (VAR9 == VAR21)
    {
        struct VAR22 *VAR23;
        VAR23 = (struct VAR22 *)VAR4;
        VAR23->VAR24 = FUN5(VAR23->VAR24);
        VAR23->VAR25 = FUN4(VAR23->VAR25);
    }
    FUN6(VAR11, VAR5, 0);
    return 0;
}