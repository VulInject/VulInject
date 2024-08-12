static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *const VAR9 = &VAR6->VAR9;
    VAR8 *const VAR10 = &VAR6->VAR10;
    AVPacket VAR11 = {0};
    int VAR12;
    VAR12 = FUN2(VAR2, &VAR11);
    if (VAR12 < 0 && VAR12 != VAR13)
        return VAR12;
    if (VAR6->VAR14)
        goto VAR15;
    VAR12 = FUN3(VAR10, &VAR11);
    if (VAR12 < 0)
    {
        if (VAR12 != FUN4(VAR16))
            return VAR12;
    }
    if (VAR11.VAR17)
    {
        VAR12 = FUN5(VAR2);
        if (VAR12)
            return 0;
    }
VAR15:
    return FUN6(VAR9, VAR4);
}