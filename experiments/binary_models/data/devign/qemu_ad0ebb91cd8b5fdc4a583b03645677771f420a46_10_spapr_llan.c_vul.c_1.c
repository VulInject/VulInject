static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    target_ulong VAR10 = VAR7[2];
    target_ulong VAR11 = VAR7[3];
    VAR12 *VAR13 = FUN2(VAR5->VAR14, VAR8);
    VAR15 *VAR16 = (VAR15 *)VAR13;
    vlan_bd_t VAR17;
    if (!VAR16)
    {
        return VAR18;
    }
    if (VAR16->VAR19)
    {
        FUN3(""
                      "");
        return VAR20;
    }
    if (FUN4(VAR16, FUN5(VAR9, VAR21), VAR21) < 0)
    {
        FUN3("" VAR22 "", VAR9);
        return VAR18;
    }
    VAR17 = FUN5(VAR11, VAR21);
    if (FUN4(VAR16, VAR17, VAR21) < 0)
    {
        FUN3("" VAR22 "", VAR11);
        return VAR18;
    }
    if (!(VAR10 & VAR23) || (FUN4(VAR16, VAR10, VAR24) < 0))
    {
        FUN3("");
        return VAR18;
    }
    VAR16->VAR9 = VAR9;
    VAR13->VAR25 = 0;
    VAR10 &= ~VAR26;
    FUN6(VAR13, VAR9, VAR10);
    FUN6(VAR13, VAR9 + 8, VAR17);
    FUN7(VAR13, VAR9 + VAR27, VAR21 - VAR27);
    VAR16->VAR28 = VAR27 - 8;
    VAR16->VAR29 = VAR27 - 8;
    VAR16->VAR30 = 0;
    VAR16->VAR31 = 0;
    FUN7(VAR13, FUN8(VAR10), FUN9(VAR10));
    VAR16->VAR19 = 1;
    return VAR32;
}