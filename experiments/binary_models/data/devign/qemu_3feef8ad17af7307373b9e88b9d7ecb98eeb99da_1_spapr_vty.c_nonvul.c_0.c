static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    VAR1 *VAR9 = VAR7 + 0;
    VAR1 *VAR10 = VAR7 + 1;
    VAR1 *VAR11 = VAR7 + 2;
    VAR12 *VAR13;
    uint8_t VAR14[16];
    VAR13 = FUN2(VAR5, VAR8);
    if (!VAR13)
    {
        return VAR15;
    }
    *VAR9 = FUN3(VAR13, VAR14, sizeof(VAR14));
    if (*VAR9 < 16)
    {
        memset(VAR14 + *VAR9, 0, 16 - *VAR9);
    }
    *VAR10 = FUN4(*((VAR16 *)VAR14));
    *VAR11 = FUN4(*((VAR16 *)VAR14 + 1));
    return VAR17;
}