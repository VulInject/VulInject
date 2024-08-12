static VAR1 FUN1(int VAR2, abi_ulong VAR3, int VAR4, int send)
{
    abi_long VAR5, VAR6;
    struct VAR7 *VAR8;
    struct msghdr VAR9;
    int VAR10;
    struct VAR11 *VAR12;
    abi_ulong VAR13;
    if (!FUN2(send ? VAR14 : VAR15, VAR8, VAR3, send ? 1 : 0))
        return -VAR16;
    if (VAR8->VAR17)
    {
        VAR9.VAR18 = FUN3(VAR8->VAR18);
        VAR9.VAR17 = alloca(VAR9.VAR18);
        VAR5 = FUN4(VAR9.VAR17, FUN5(VAR8->VAR17), VAR9.VAR18);
        if (VAR5)
        {
            goto VAR19;
        }
    }
    else
    {
        VAR9.VAR17 = NULL;
        VAR9.VAR18 = 0;
    }
    VAR9.VAR20 = 2 * FUN5(VAR8->VAR20);
    VAR9.VAR21 = alloca(VAR9.VAR20);
    VAR9.VAR22 = FUN3(VAR8->VAR22);
    VAR10 = FUN5(VAR8->VAR23);
    VAR13 = FUN5(VAR8->VAR24);
    VAR12 = FUN6(send ? VAR14 : VAR15, VAR13, VAR10, send);
    if (VAR12 == NULL)
    {
        VAR5 = -FUN7(VAR25);
        goto VAR19;
    }
    VAR9.VAR23 = VAR10;
    VAR9.VAR24 = VAR12;
    if (send)
    {
        VAR5 = FUN8(&VAR9, VAR8);
        if (VAR5 == 0)
            VAR5 = FUN9(sendmsg(VAR2, &VAR9, VAR4));
    }
    else
    {
        VAR5 = FUN9(FUN10(VAR2, &VAR9, VAR4));
        if (!FUN11(VAR5))
        {
            VAR6 = VAR5;
            VAR5 = FUN12(VAR8, &VAR9);
            if (!FUN11(VAR5))
            {
                VAR8->VAR18 = FUN3(VAR9.VAR18);
                if (VAR9.VAR17 != NULL)
                {
                    VAR5 = FUN13(FUN5(VAR8->VAR17), VAR9.VAR17, VAR9.VAR18);
                    if (VAR5)
                    {
                        goto VAR26;
                    }
                }
                VAR5 = VAR6;
            }
        }
    }
VAR26:
    FUN14(VAR12, VAR13, VAR10, !send);
VAR19:
    FUN15(VAR8, VAR3, send ? 0 : 1);
    return VAR5;
}