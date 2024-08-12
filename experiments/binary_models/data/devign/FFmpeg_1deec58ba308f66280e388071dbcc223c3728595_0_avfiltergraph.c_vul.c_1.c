static VAR1 *FUN1(const char *VAR2, void *VAR3)
{
    VAR1 *VAR4;
    char *VAR5 = FUN2(VAR2);
    char *VAR6, *VAR7;
    VAR6 = VAR5;
    if ((VAR7 = strchr(VAR5, '')))
    {
        if (VAR7 == VAR5)
            goto VAR8;
        *VAR7++ = 0;
    }
    FUN3(NULL, VAR9, ""%VAR10\""%VAR10\"", VAR6, VAR7 ? VAR7 : "");
    if ((VAR4 = FUN4(VAR6, NULL)))
    {
        if (FUN5(VAR4, VAR7, VAR3))
        {
            FUN3(NULL, VAR11, "");
            FUN6(VAR4);
            goto VAR8;
        }
    }
    else
        FUN3(NULL, VAR11, "");
    return VAR4;
VAR8:
    return NULL;