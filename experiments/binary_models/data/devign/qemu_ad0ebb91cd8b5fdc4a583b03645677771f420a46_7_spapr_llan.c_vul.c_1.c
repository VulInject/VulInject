static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    VAR10 *VAR11 = FUN2(VAR5->VAR12, VAR8);
    VAR13 *VAR14 = (VAR13 *)VAR11;
    vlan_bd_t VAR15;
    FUN3("" VAR16 "" VAR16 "", VAR8, VAR9);
    if (!VAR11)
    {
        FUN4("");
        return VAR17;
    }
    if ((FUN5(VAR14, VAR9, 4) < 0) || (FUN6(VAR9) < 16))
    {
        FUN4("");
        return VAR17;
    }
    if (!VAR14->VAR18 || VAR14->VAR19 >= VAR20)
    {
        return VAR21;
    }
    do
    {
        VAR14->VAR22 += 8;
        if (VAR14->VAR22 >= VAR23)
        {
            VAR14->VAR22 = VAR24;
        }
        VAR15 = FUN7(VAR11, VAR14->VAR25 + VAR14->VAR22);
    } while (VAR15 & VAR26);
    FUN8(VAR11, VAR14->VAR25 + VAR14->VAR22, VAR9);
    VAR14->VAR19++;
    FUN3(""
            "",
            VAR14->VAR22, VAR14->VAR19, (unsigned long long)VAR9);
    return VAR27;
}