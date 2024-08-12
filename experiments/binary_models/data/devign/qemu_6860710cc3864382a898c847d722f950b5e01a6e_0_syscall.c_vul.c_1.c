static inline VAR1 FUN1(abi_ulong VAR2, struct VAR3 *VAR4, socklen_t VAR5)
{
    struct VAR6 *VAR7;
    if (VAR5 == 0)
    {
        return 0;
    }
    VAR7 = FUN2(VAR8, VAR2, VAR5, 0);
    if (!VAR7)
        return -VAR9;
    memcpy(VAR7, VAR4, VAR5);
    if (VAR5 >= FUN3(struct VAR6, VAR10) + sizeof(VAR7->VAR10))
    {
        VAR7->VAR10 = FUN4(VAR4->VAR10);
    }
    if (VAR4->VAR10 == VAR11 && VAR5 >= sizeof(struct VAR12))
    {
        struct VAR12 *VAR13 = (struct VAR12 *)VAR7;
        VAR13->VAR14 = FUN5(VAR13->VAR14);
        VAR13->VAR15 = FUN5(VAR13->VAR15);
    }
    else if (VAR4->VAR10 == VAR16)
    {
        struct VAR17 *VAR18 = (struct VAR17 *)VAR7;
        VAR18->VAR19 = FUN5(VAR18->VAR19);
        VAR18->VAR20 = FUN4(VAR18->VAR20);
    }
    else if (VAR4->VAR10 == VAR21 && VAR5 >= sizeof(struct VAR22))
    {
        struct VAR22 *VAR23 = (struct VAR22 *)VAR7;
        VAR23->VAR24 = FUN4(VAR23->VAR24);
    }
    FUN6(VAR7, VAR2, VAR5);
    return 0;