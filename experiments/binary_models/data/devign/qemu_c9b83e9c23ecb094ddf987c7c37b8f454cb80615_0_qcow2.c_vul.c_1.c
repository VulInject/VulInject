static VAR1 FUN1(VAR2 *VAR3, size_t VAR4, void *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR5;
    VAR10 *VAR11 = VAR9->VAR5;
    int64_t VAR12;
    int64_t VAR13;
    VAR12 = FUN2(VAR9, VAR4);
    if (VAR12 < 0)
    {
        FUN3(VAR7, -VAR12, "", VAR4);
        return -1;
    }
    VAR11->VAR14.VAR15 = VAR4;
    VAR11->VAR14.VAR16 = VAR12;
    VAR13 = FUN4(VAR11, VAR4) * VAR11->VAR17;
    VAR12 = FUN5(VAR9->VAR18, VAR12 + VAR4, VAR13 - VAR4, 0);
    if (VAR12 < 0)
    {
        FUN3(VAR7, -VAR12, "");
        return -1;
    }
    return VAR12;