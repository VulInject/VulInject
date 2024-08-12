int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4 = 0;
    if (FUN2(VAR3, "", &VAR3))
    {
        AVIOContext VAR5;
        VAR6 *VAR7 = VAR2->VAR8;
        VAR9 *VAR10 = NULL;
        int VAR11 = strlen(VAR3) * 6 / 8;
        char *VAR12 = FUN3(VAR11);
        VAR13 *VAR14;
        if (!VAR12)
            return FUN4(VAR15);
        FUN5(VAR12, VAR3, VAR11);
        if (FUN6(VAR12, VAR11) < 0)
            FUN7(VAR2, VAR16, "");
        FUN8(&VAR5, VAR12, VAR11);
        if (VAR7->VAR17)
        {
            FUN9(&VAR7->VAR17);
        }
        if (!(VAR14 = FUN10("")))
            return VAR18;
        VAR7->VAR17 = FUN11();
        if (!VAR7->VAR17)
        {
            FUN12(VAR12);
            return FUN4(VAR15);
        }
        VAR7->VAR17->VAR5 = &VAR5;
        FUN13(&VAR10, "", "", 0);
        if ((VAR4 = FUN14(VAR7->VAR17, VAR2)) < 0)
        {
            FUN15(&VAR10);
            return VAR4;
        }
        VAR4 = FUN16(&VAR7->VAR17, "", VAR14, &VAR10);
        FUN15(&VAR10);
        if (VAR4 < 0)
        {
            FUN12(VAR12);
            return VAR4;
        }
        FUN17(&VAR2->VAR19, VAR7->VAR17->VAR19, 0);
        VAR7->VAR20 = FUN18(&VAR5);
        FUN12(VAR12);
        VAR7->VAR17->VAR5 = NULL;
    }
    return VAR4;
}