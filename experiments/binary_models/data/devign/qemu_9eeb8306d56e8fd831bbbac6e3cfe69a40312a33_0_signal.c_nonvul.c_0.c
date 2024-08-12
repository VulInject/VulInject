VAR1 FUN1(abi_ulong VAR2, abi_ulong VAR3, abi_ulong VAR4)
{
    int VAR5;
    struct target_sigaltstack VAR6;
    if (VAR3)
    {
        FUN2(VAR7.VAR8, &VAR6.VAR8);
        FUN2(VAR7.VAR9, &VAR6.VAR9);
        FUN2(FUN3(VAR4), &VAR6.VAR10);
    }
    if (VAR2)
    {
        struct VAR11 *VAR12;
        struct target_sigaltstack VAR13;
        VAR5 = -VAR14;
        if (!FUN4(VAR15, VAR12, VAR2, 1))
        {
            goto VAR16;
        }
        FUN5(VAR13.VAR8, &VAR12->VAR8);
        FUN5(VAR13.VAR9, &VAR12->VAR9);
        FUN5(VAR13.VAR10, &VAR12->VAR10);
        FUN6(VAR12, VAR2, 0);
        VAR5 = -VAR17;
        if (FUN7(VAR4))
            goto VAR16;
        VAR5 = -VAR18;
        if (VAR13.VAR10 != VAR19 && VAR13.VAR10 != VAR20 && VAR13.VAR10 != 0)
            goto VAR16;
        if (VAR13.VAR10 == VAR19)
        {
            VAR13.VAR9 = 0;
            VAR13.VAR8 = 0;
        }
        else
        {
            VAR5 = -VAR21;
            if (VAR13.VAR9 < VAR22)
                goto VAR16;
        }
        VAR7.VAR8 = VAR13.VAR8;
        VAR7.VAR9 = VAR13.VAR9;
    }
    if (VAR3)
    {
        VAR5 = -VAR14;
        if (FUN8(VAR3, &VAR6, sizeof(VAR6)))
            goto VAR16;
    }
    VAR5 = 0;
VAR16:
    return VAR5;
}