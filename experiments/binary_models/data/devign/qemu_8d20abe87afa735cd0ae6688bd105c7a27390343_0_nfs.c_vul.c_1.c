static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9 = NULL;
    int VAR10 = -VAR11, VAR12;
    VAR7 = FUN2(VAR1);
    if (!VAR7)
    {
        FUN3(VAR5, "");
        goto VAR13;
    }
    if (strcmp(VAR7->VAR14, "") != 0)
    {
        FUN3(VAR5, "");
        goto VAR13;
    }
    if (!VAR7->VAR15)
    {
        FUN3(VAR5, "");
        goto VAR13;
    }
    if (!VAR7->VAR16)
    {
        FUN3(VAR5, "");
        goto VAR13;
    }
    VAR9 = FUN4(VAR7->VAR17);
    if (!VAR9)
    {
        FUN3(VAR5, "");
        goto VAR13;
    }
    FUN5(VAR3, "", FUN6(VAR7->VAR15));
    FUN5(VAR3, "", FUN6(""));
    FUN5(VAR3, "", FUN6(VAR7->VAR16));
    for (VAR12 = 0; VAR12 < VAR9->VAR18; VAR12++)
    {
        if (!VAR9->VAR19[VAR12].VAR20)
        {
            FUN3(VAR5, "", VAR9->VAR19[VAR12].VAR21);
            goto VAR13;
        }
        if (FUN7(VAR9->VAR19[VAR12].VAR20, NULL, 0))
        {
            FUN3(VAR5, "", VAR9->VAR19[VAR12].VAR21);
            goto VAR13;
        }
        if (!strcmp(VAR9->VAR19[VAR12].VAR21, ""))
        {
            FUN5(VAR3, "", FUN6(VAR9->VAR19[VAR12].VAR20));
        }
        else if (!strcmp(VAR9->VAR19[VAR12].VAR21, ""))
        {
            FUN5(VAR3, "", FUN6(VAR9->VAR19[VAR12].VAR20));
        }
        else if (!strcmp(VAR9->VAR19[VAR12].VAR21, ""))
        {
            FUN5(VAR3, "", FUN6(VAR9->VAR19[VAR12].VAR20));
        }
        else if (!strcmp(VAR9->VAR19[VAR12].VAR21, ""))
        {
            FUN5(VAR3, "", FUN6(VAR9->VAR19[VAR12].VAR20));
        }
        else if (!strcmp(VAR9->VAR19[VAR12].VAR21, ""))
        {
            FUN5(VAR3, "", FUN6(VAR9->VAR19[VAR12].VAR20));
        }
        else if (!strcmp(VAR9->VAR19[VAR12].VAR21, ""))
        {
            FUN5(VAR3, "", FUN6(VAR9->VAR19[VAR12].VAR20));
        }
        else
        {
            FUN3(VAR5, "", VAR9->VAR19[VAR12].VAR21);
            goto VAR13;
        }
    }
    VAR10 = 0;
VAR13:
    if (VAR9)
    {
        FUN8(VAR9);
    }
    if (VAR7)
    {
        FUN9(VAR7);
    }
    return VAR10;
}