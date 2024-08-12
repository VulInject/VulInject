static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    VAR8 *VAR9;
    HRandomData VAR10;
    VAR9 = FUN2(FUN3("", VAR11, NULL));
    if (!VAR9 || !VAR9->VAR12)
    {
        return VAR13;
    }
    FUN4(&VAR10.VAR14, 0);
    VAR10.VAR15.VAR16 = 0;
    VAR10.VAR17 = 0;
    FUN5();
    while (VAR10.VAR17 < 8)
    {
        FUN6(VAR9->VAR12, 8 - VAR10.VAR17, VAR18, &VAR10);
        FUN7(&VAR10.VAR14);
    }
    FUN8();
    FUN9(&VAR10.VAR14);
    VAR7[0] = VAR10.VAR15.VAR16;
    return VAR19;
}