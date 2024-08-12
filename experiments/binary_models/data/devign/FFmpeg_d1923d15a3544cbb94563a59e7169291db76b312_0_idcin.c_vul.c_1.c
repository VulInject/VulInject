static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    if (VAR7->VAR9 > 0)
    {
        int VAR10 = FUN2(VAR2->VAR11, VAR7->VAR9, VAR12);
        if (VAR10 < 0)
            return VAR10;
        FUN3(VAR2, VAR2->VAR13[VAR7->VAR14], 0);
        VAR7->VAR15 = 1;
        VAR7->VAR16 = 0;
        return 0;
    }
    return -1;
}