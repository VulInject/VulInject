static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    target_ulong VAR10 = VAR7[2];
    VAR11 *VAR12 = FUN2(VAR8);
    if (VAR8 & 0xFFFFFFFF00000000ULL)
    {
        FUN3("" VAR13 "", VAR8);
        return VAR14;
    }
    VAR9 &= ~(VAR15 - 1);
    if (VAR12)
    {
        return FUN4(VAR12, VAR9, VAR10);
    }
    fprintf(VAR16, "" VAR13 "" VAR13 "" VAR13 "", VAR17, VAR8, VAR9, VAR10);
    return VAR14;
}