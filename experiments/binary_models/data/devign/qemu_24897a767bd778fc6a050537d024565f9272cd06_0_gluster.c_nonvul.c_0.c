static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = NULL;
    bool VAR8 = false;
    int VAR9 = 0;
    VAR5 = FUN2(VAR3);
    if (!VAR5)
    {
        return -VAR10;
    }
    if (!VAR5->VAR11 || !strcmp(VAR5->VAR11, ""))
    {
        VAR2->VAR12 = FUN3("");
    }
    else if (!strcmp(VAR5->VAR11, ""))
    {
        VAR2->VAR12 = FUN3("");
    }
    else if (!strcmp(VAR5->VAR11, ""))
    {
        VAR2->VAR12 = FUN3("");
        VAR8 = true;
    }
    else if (!strcmp(VAR5->VAR11, ""))
    {
        VAR2->VAR12 = FUN3("");
    }
    else
    {
        VAR9 = -VAR10;
        goto VAR13;
    }
    VAR9 = FUN4(VAR2, VAR5->VAR14);
    if (VAR9 < 0)
    {
        goto VAR13;
    }
    VAR7 = FUN5(VAR5->VAR15);
    if (VAR7->VAR16 > 1 || (VAR8 && !VAR7->VAR16) || (!VAR8 && VAR7->VAR16))
    {
        VAR9 = -VAR10;
        goto VAR13;
    }
    if (VAR8)
    {
        if (VAR5->VAR17 || VAR5->VAR18)
        {
            VAR9 = -VAR10;
            goto VAR13;
        }
        if (strcmp(VAR7->VAR19[0].VAR20, ""))
        {
            VAR9 = -VAR10;
            goto VAR13;
        }
        VAR2->VAR17 = FUN3(VAR7->VAR19[0].VAR21);
    }
    else
    {
        VAR2->VAR17 = FUN3(VAR5->VAR17 ? VAR5->VAR17 : "");
        VAR2->VAR18 = VAR5->VAR18;
    }
VAR13:
    if (VAR7)
    {
        FUN6(VAR7);
    }
    FUN7(VAR5);
    return VAR9;
}