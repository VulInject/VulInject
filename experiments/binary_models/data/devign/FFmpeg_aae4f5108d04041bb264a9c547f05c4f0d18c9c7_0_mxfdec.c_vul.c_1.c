static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4, int VAR5, UID VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR1;
    int VAR10 = FUN2(VAR3);
    int VAR11 = FUN2(VAR3);
    if (VAR11 != 18)
    {
        FUN3(VAR3, "", VAR11);
        return VAR12;
    }
    if (VAR10 > 65536)
    {
        FUN4(VAR9->VAR13, VAR14, "", VAR10);
        return VAR15;
    }
    VAR9->VAR16 = FUN5(VAR10, VAR11);
    if (!VAR9->VAR16)
        return FUN6(VAR17);
    VAR9->VAR18 = VAR10;
    FUN7(VAR3, VAR9->VAR16, VAR10 * VAR11);
    return 0;