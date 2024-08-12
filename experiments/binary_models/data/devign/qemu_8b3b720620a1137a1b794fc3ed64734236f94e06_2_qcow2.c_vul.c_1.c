static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8;
    if (VAR3 & 511)
    {
        return -VAR9;
    }
    if (VAR5->VAR10)
    {
        return -VAR11;
    }
    if (VAR3 < VAR2->VAR12 * 512)
    {
        return -VAR11;
    }
    VAR8 = FUN2(VAR5, VAR3);
    VAR7 = FUN3(VAR2, VAR8);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR3 = FUN4(VAR3);
    VAR7 = FUN5(VAR2->VAR13, FUN6(VAR14, VAR15), &VAR3, sizeof(VAR16));
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR5->VAR17 = VAR8;
    return 0;
}