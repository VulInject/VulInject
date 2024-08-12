static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    target_ulong VAR8 = VAR7[0];
    uint32_t VAR9 = FUN2(VAR8);
    uint32_t VAR10 = FUN2(VAR8 + 4);
    uint32_t VAR11 = FUN2(VAR8 + 8);
    return FUN3(VAR3, VAR5, VAR9, VAR10, VAR8 + 12, VAR11, VAR8 + 12 + 4 * VAR10);
}