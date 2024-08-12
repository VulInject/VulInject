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
        if (!VAR12)
            return FUN4(VAR13);
        FUN5(VAR12, VAR3, VAR11);
        if (FUN6(VAR12, VAR11) < 0)
            FUN7(VAR2, VAR14, "");
        FUN8(&VAR5, VAR12, VAR11);
        if (VAR7->VAR15)
        {
            FUN9(&VAR7->VAR15);
        }
        VAR7->VAR15 = FUN10();
        if (!VAR7->VAR15)
        {
            FUN11(VAR12);
            return FUN4(VAR13);
        }
        VAR7->VAR15->VAR5 = &VAR5;
        FUN12(&VAR10, "", "", 0);
        VAR4 = FUN13(&VAR7->VAR15, "", &VAR16, &VAR10);
        FUN14(&VAR10);
        if (VAR4 < 0)
        {
            FUN11(VAR12);
            return VAR4;
        }
        FUN15(&VAR2->VAR17, VAR7->VAR15->VAR17, 0);
        VAR7->VAR18 = FUN16(&VAR5);
        FUN11(VAR12);
        VAR7->VAR15->VAR5 = NULL;
    }
    return VAR4;
}