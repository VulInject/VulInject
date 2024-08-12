static int FUN1(VAR1 *VAR2, bool VAR3, VAR4 **VAR5)
{
    struct sockaddr_un VAR6;
    int VAR7, VAR8;
    char *VAR9 = NULL;
    const char *VAR10;
    VAR7 = FUN2(VAR11, VAR12, 0);
    if (VAR7 < 0)
    {
        FUN3(VAR5, VAR13, "");
        return -1;
    }
    if (VAR2->VAR10 && VAR2->VAR10[0])
    {
        VAR10 = VAR2->VAR10;
    }
    else
    {
        const char *VAR14 = getenv("");
        VAR14 = VAR14 ? VAR14 : "";
        VAR10 = VAR9 = FUN4("", VAR14);
    }
    if (strlen(VAR10) > sizeof(VAR6.VAR15))
    {
        FUN5(VAR5, "", VAR10);
        FUN6(VAR5, "", sizeof(VAR6.VAR15));
        goto VAR16;
    }
    if (VAR9 != NULL)
    {
        VAR8 = mkstemp(VAR9);
        if (VAR8 < 0)
        {
            FUN3(VAR5, VAR13, "", VAR9);
            goto VAR16;
        }
        close(VAR8);
    }
    if (unlink(VAR10) < 0 && VAR13 != VAR17)
    {
        FUN3(VAR5, VAR13, "", VAR10);
        goto VAR16;
    }
    memset(&VAR6, 0, sizeof(VAR6));
    VAR6.VAR18 = VAR19;
    strncpy(VAR6.VAR15, VAR10, sizeof(VAR6.VAR15));
    if (FUN7(VAR7, (struct VAR20 *)&VAR6, sizeof(VAR6)) < 0)
    {
        FUN3(VAR5, VAR13, "", VAR6.VAR15);
        goto VAR16;
    }
    if (FUN8(VAR7, 1) < 0)
    {
        FUN3(VAR5, VAR13, "");
        goto VAR16;
    }
    if (VAR3 && VAR9)
    {
        FUN9(VAR2->VAR10);
        VAR2->VAR10 = VAR9;
    }
    else
    {
        FUN9(VAR9);
    }
    return VAR7;
VAR16:
    FUN9(VAR9);
    FUN10(VAR7);
    return -1;
}