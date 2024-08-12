static VAR1 FUN1(int VAR2, struct VAR3 *VAR4, int VAR5, int send)
{
    abi_long VAR6, VAR7;
    struct msghdr VAR8;
    int VAR9;
    struct VAR10 *VAR11;
    abi_ulong VAR12;
    if (VAR4->VAR13)
    {
        VAR8.VAR14 = FUN2(VAR4->VAR14);
        VAR8.VAR13 = alloca(VAR8.VAR14 + 1);
        VAR6 = FUN3(VAR2, VAR8.VAR13, FUN4(VAR4->VAR13), VAR8.VAR14);
        if (VAR6)
        {
            goto VAR15;
        }
    }
    else
    {
        VAR8.VAR13 = NULL;
        VAR8.VAR14 = 0;
    }
    VAR8.VAR16 = 2 * FUN4(VAR4->VAR16);
    VAR8.VAR17 = alloca(VAR8.VAR16);
    VAR8.VAR18 = FUN2(VAR4->VAR18);
    VAR9 = FUN4(VAR4->VAR19);
    VAR12 = FUN4(VAR4->VAR20);
    VAR11 = FUN5(send ? VAR21 : VAR22, VAR12, VAR9, send);
    if (VAR11 == NULL)
    {
        VAR6 = -FUN6(VAR23);
        goto VAR15;
    }
    VAR8.VAR19 = VAR9;
    VAR8.VAR20 = VAR11;
    if (send)
    {
        if (FUN7(VAR2))
        {
            VAR6 = FUN7(VAR2)(VAR8.VAR20->VAR24, VAR8.VAR20->VAR25);
        }
        else
        {
            VAR6 = FUN8(&VAR8, VAR4);
        }
        if (VAR6 == 0)
        {
            VAR6 = FUN9(FUN10(VAR2, &VAR8, VAR5));
        }
    }
    else
    {
        VAR6 = FUN9(FUN11(VAR2, &VAR8, VAR5));
        if (!FUN12(VAR6))
        {
            VAR7 = VAR6;
            if (FUN13(VAR2))
            {
                VAR6 = FUN13(VAR2)(VAR8.VAR20->VAR24, VAR7);
            }
            else
            {
                VAR6 = FUN14(VAR4, &VAR8);
            }
            if (!FUN12(VAR6))
            {
                VAR4->VAR14 = FUN2(VAR8.VAR14);
                if (VAR8.VAR13 != NULL)
                {
                    VAR6 = FUN15(FUN4(VAR4->VAR13), VAR8.VAR13, VAR8.VAR14);
                    if (VAR6)
                    {
                        goto VAR26;
                    }
                }
                VAR6 = VAR7;
            }
        }
    }
VAR26:
    FUN16(VAR11, VAR12, VAR9, !send);
VAR15:
    return VAR6;
}