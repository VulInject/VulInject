static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    int VAR10;
    VAR11 *VAR12;
    abi_ulong VAR13;
    VAR13 = FUN2(VAR3, VAR9, sizeof *VAR12);
    FUN3("", VAR14, (unsigned long long)VAR13);
    if (!FUN4(VAR15, VAR12, VAR13, 0))
    {
        goto VAR16;
    }
    FUN3("", VAR14);
    FUN5(&VAR12->VAR5, VAR5);
    FUN6(0, &VAR12->VAR17.VAR18);
    FUN6((VAR19)0, (VAR19 *)&VAR12->VAR17.VAR20);
    FUN6(VAR21.VAR22, &VAR12->VAR17.VAR23.VAR22);
    FUN6(FUN7(FUN8(VAR9)), &VAR12->VAR17.VAR23.VAR24);
    FUN6(VAR21.VAR25, &VAR12->VAR17.VAR23.VAR25);
    FUN9(VAR9, &VAR12->VAR17.VAR26);
    for (VAR10 = 0; VAR10 < VAR27; VAR10++)
    {
        FUN6((VAR19)VAR7->VAR1[VAR10], (VAR19 *)&VAR12->VAR17.VAR28.VAR1[VAR10]);
    }
    if (VAR3->VAR29 & VAR30)
    {
        VAR9->VAR31[14] = (unsigned long)VAR3->VAR32 | VAR33;
    }
    else
    {
        VAR9->VAR31[14] = (unsigned long)VAR12->VAR34 | VAR33;
        if (FUN6(VAR35 | VAR36, (VAR37 *)(VAR12->VAR34)))
        {
            goto VAR16;
        }
    }
    if (FUN6(VAR9->VAR31[15], (VAR19 *)VAR12))
    {
        goto VAR16;
    }
    VAR9->VAR31[15] = VAR13;
    VAR9->VAR38.VAR39 = (VAR40)VAR3->VAR41 | VAR33;
    VAR9->VAR31[2] = VAR1;
    VAR9->VAR31[3] = VAR13 + FUN10(FUN11(*VAR12), VAR5);
    VAR9->VAR31[4] = VAR13 + FUN10(FUN11(*VAR12), VAR17);
    return;
VAR16:
    FUN3("", VAR14);
    FUN12(VAR12, VAR13, 1);
    FUN13(VAR42);
}