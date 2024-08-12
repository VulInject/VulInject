static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    target_ulong VAR10 = VAR7[2];
    VAR11 *VAR12 = FUN2(VAR5->VAR13, VAR8);
    VAR14 *VAR15;
    if (!VAR12)
    {
        FUN3("" VAR16 "", VAR8);
        return VAR17;
    }
    VAR9 &= ~(VAR18 - 1);
    fprintf(VAR19, "" VAR16 "" VAR16 "", VAR12->VAR20.VAR21, VAR9, VAR10);
    if (VAR9 >= VAR12->VAR22)
    {
        FUN3("" VAR16 "", VAR9);
        return VAR17;
    }
    VAR15 = VAR12->VAR23 + (VAR9 >> VAR24);
    VAR15->VAR10 = VAR10;
    return VAR25;
}