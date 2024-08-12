VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, target_ulong VAR6)
{
    int64_t VAR7 = FUN2(VAR4, 0, 32);
    int64_t VAR8 = FUN2(VAR5, 0, 32);
    int64_t VAR9 = FUN2(VAR6, 0, 32);
    int64_t VAR10;
    VAR10 = VAR8 - (VAR7 * VAR9);
    return FUN3(VAR3, VAR10);
}