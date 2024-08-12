static VAR1 *FUN1(const char *VAR2, const char *VAR3, int VAR4)
{
    VAR1 *VAR5;
    VAR6 *VAR7;
    char VAR8[256];
    VAR5 = FUN2("");
    if (VAR3)
    {
        VAR7 = FUN3(VAR3);
        if (!VAR7)
        {
            FUN4("", VAR3);
            goto VAR9;
        }
    }
    else
    {
        VAR7 = NULL;
    }
    if (FUN5(VAR5, VAR2, VAR4, VAR7) < 0)
    {
        FUN4("", VAR2);
        goto VAR9;
    }
    if (FUN6(VAR5))
    {
        FUN7("", VAR2);
        if (FUN8(VAR8, sizeof(VAR8)) < 0)
        {
            FUN4("");
            goto VAR9;
        }
        if (FUN9(VAR5, VAR8) < 0)
        {
            FUN4("");
            goto VAR9;
        }
    }
    return VAR5;
VAR9:
    if (VAR5)
    {
        FUN10(VAR5);
    }
    return NULL;
}