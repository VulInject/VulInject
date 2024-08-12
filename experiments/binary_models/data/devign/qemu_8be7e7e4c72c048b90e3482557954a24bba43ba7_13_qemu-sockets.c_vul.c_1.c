int FUN1(const char *VAR1, char *VAR2, int VAR3, int VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    char *VAR10;
    int VAR11 = -1;
    VAR9 = FUN2(&VAR12, NULL, 0);
    if (FUN3(VAR9, VAR1) == 0)
    {
        VAR11 = FUN4(VAR9, VAR5, VAR7);
        if (VAR11 != -1 && VAR2)
        {
            VAR10 = strchr(VAR1, '');
            if (FUN5(VAR9, "", 0))
            {
                snprintf(VAR2, VAR3, "", FUN6(VAR9, ""), FUN6(VAR9, ""), VAR10 ? VAR10 : "");
            }
            else
            {
                snprintf(VAR2, VAR3, "", FUN6(VAR9, ""), FUN6(VAR9, ""), VAR10 ? VAR10 : "");
            }
        }
    }
    else
    {
        FUN7(VAR7, VAR13);
    }
    FUN8(VAR9);
    return VAR11;
}