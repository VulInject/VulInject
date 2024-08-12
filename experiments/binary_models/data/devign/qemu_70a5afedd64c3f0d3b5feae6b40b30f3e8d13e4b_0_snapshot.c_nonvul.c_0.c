int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8, VAR9;
    if (!VAR7)
    {
        FUN2(VAR5, "");
        return -VAR10;
    }
    if (!FUN3(&VAR2->VAR11))
    {
        FUN2(VAR5, "");
        return -VAR12;
    }
    if (VAR7->VAR13)
    {
        VAR8 = VAR7->FUN1(VAR2, VAR3);
        if (VAR8 < 0)
        {
            FUN4(VAR5, -VAR8, "");
        }
        return VAR8;
    }
    if (VAR2->VAR14)
    {
        VAR1 *VAR14;
        VAR15 *VAR16 = FUN5(VAR2->VAR16);
        VAR15 *VAR17;
        VAR4 *VAR18 = NULL;
        VAR14 = VAR2->VAR14->VAR2;
        FUN6(VAR14);
        FUN7(VAR16, &VAR17, "");
        FUN8(VAR17);
        FUN9(VAR16, "", FUN10(VAR14));
        VAR7->FUN11(VAR2);
        FUN12(VAR2, VAR2->VAR14);
        VAR2->VAR14 = NULL;
        VAR8 = FUN1(VAR14, VAR3, VAR5);
        VAR9 = VAR7->FUN13(VAR2, VAR16, VAR2->VAR19, &VAR18);
        FUN8(VAR16);
        if (VAR9 < 0)
        {
            FUN14(VAR14);
            VAR2->VAR7 = NULL;
            FUN15(VAR5, VAR18);
            return VAR8 < 0 ? VAR8 : VAR9;
        }
        assert(VAR2->VAR14->VAR2 == VAR14);
        FUN14(VAR14);
        return VAR8;
    }
    FUN2(VAR5, "");
    return -VAR20;
}