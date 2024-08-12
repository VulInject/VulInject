static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, int VAR5)
{
    uint64_t VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    uint8_t VAR10[VAR8->VAR11 * 512];
    if (VAR8->VAR12->VAR13)
    {
        VAR7 *VAR14 = VAR8->VAR12->VAR13->VAR9;
        if (!FUN2(VAR2))
            return -1;
        VAR6 = FUN3(VAR8->VAR12->VAR13, VAR4, VAR5);
        if (FUN4(VAR14->VAR12, VAR6, VAR10, VAR14->VAR11 * 512) != VAR14->VAR11 * 512)
            return -1;
        if (FUN5(VAR8->VAR12, VAR3 << 9, VAR10, sizeof(VAR10)) != sizeof(VAR10))
            return -1;
    }
    return 0;
}