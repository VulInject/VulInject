static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    target_ulong VAR9 = VAR7[1];
    VAR10 *VAR11 = FUN2(VAR5->VAR12, VAR8);
    VAR13 *VAR14;
    if (!VAR11)
    {
        return VAR15;
    }
    VAR14 = FUN3(VAR11);
    if (VAR9 & ~VAR14->VAR16)
    {
        return VAR15;
    }
    VAR11->VAR17 = VAR9;
    return VAR18;
}