static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9 = VAR7->VAR9;
    SpriteData VAR10;
    memset(&VAR10, 0, sizeof(VAR10));
    VAR5 = FUN2(VAR2, VAR4, &VAR10);
    if (VAR5 < 0)
        return VAR5;
    if (!VAR7->VAR11.VAR12->VAR13[0])
    {
        FUN3(VAR9, VAR14, "");
        return -1;
    }
    if (VAR2->VAR15 && (!VAR7->VAR16 || !VAR7->VAR17.VAR12->VAR13[0]))
    {
        FUN3(VAR9, VAR18, "");
        VAR2->VAR15 = 0;
    }
    FUN4(VAR2->VAR19);
    if ((VAR5 = FUN5(VAR9, VAR2->VAR19, 0)) < 0)
        return VAR5;
    FUN6(VAR2, &VAR10);
    return 0;
}