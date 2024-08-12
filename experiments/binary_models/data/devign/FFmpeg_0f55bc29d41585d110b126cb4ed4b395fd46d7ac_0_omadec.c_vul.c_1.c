static int FUN1(struct VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = FUN2(VAR2, VAR3, VAR4, VAR5);
    if (!VAR7->VAR10)
        return VAR9;
    if (VAR9 || FUN3(VAR2->VAR11) < VAR7->VAR12)
        goto VAR13;
    if ((VAR9 = FUN4(VAR2->VAR11, -8, VAR14)) < 0)
        goto VAR13;
    if ((VAR9 = FUN5(VAR2->VAR11, VAR7->VAR15, 8)) < 8)
    {
        if (VAR9 >= 0)
            VAR9 = VAR16;
        goto VAR13;
    }
    return 0;
VAR13:
    memset(VAR7->VAR15, 0, 8);
    return VAR9;
}