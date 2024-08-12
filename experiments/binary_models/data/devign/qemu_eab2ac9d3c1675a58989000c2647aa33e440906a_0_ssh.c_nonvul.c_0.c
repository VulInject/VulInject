static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    int VAR10;
    VAR7 = FUN2(VAR1);
    if (!VAR7)
    {
        return -VAR11;
    }
    if (strcmp(VAR7->VAR12, "") != 0)
    {
        FUN3(VAR5, "");
        goto VAR13;
    }
    if (!VAR7->VAR14 || strcmp(VAR7->VAR14, "") == 0)
    {
        FUN3(VAR5, "");
        goto VAR13;
    }
    if (!VAR7->VAR15 || strcmp(VAR7->VAR15, "") == 0)
    {
        FUN3(VAR5, "");
        goto VAR13;
    }
    VAR9 = FUN4(VAR7->VAR16);
    if (!VAR9)
    {
        FUN3(VAR5, "");
        goto VAR13;
    }
    if (VAR7->VAR17 && strcmp(VAR7->VAR17, "") != 0)
    {
        FUN5(VAR3, "", FUN6(VAR7->VAR17));
    }
    FUN5(VAR3, "", FUN6(VAR7->VAR14));
    if (VAR7->VAR18)
    {
        FUN5(VAR3, "", FUN7(VAR7->VAR18));
    }
    FUN5(VAR3, "", FUN6(VAR7->VAR15));
    for (VAR10 = 0; VAR10 < VAR9->VAR19; ++VAR10)
    {
        if (strcmp(VAR9->VAR20[VAR10].VAR21, "") == 0)
        {
            FUN5(VAR3, "", FUN6(VAR9->VAR20[VAR10].VAR22));
        }
    }
    FUN8(VAR9);
    FUN9(VAR7);
    return 0;
VAR13:
    if (VAR7)
    {
        FUN9(VAR7);
    }
    return -VAR11;
}