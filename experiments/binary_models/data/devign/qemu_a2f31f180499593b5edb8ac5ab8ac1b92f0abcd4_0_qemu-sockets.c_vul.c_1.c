int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    struct sockaddr_un VAR5;
    const char *VAR6 = FUN2(VAR2, "");
    int VAR7, VAR8;
    VAR7 = FUN3(VAR9, VAR10, 0);
    if (VAR7 < 0)
    {
        FUN4(VAR4, VAR11, "");
        return -1;
    }
    memset(&VAR5, 0, sizeof(VAR5));
    VAR5.VAR12 = VAR13;
    if (VAR6 && strlen(VAR6))
    {
        snprintf(VAR5.VAR14, sizeof(VAR5.VAR14), "", VAR6);
    }
    else
    {
        const char *VAR15 = getenv("");
        VAR15 = VAR15 ? VAR15 : "";
        if (snprintf(VAR5.VAR14, sizeof(VAR5.VAR14), "", VAR15) >= sizeof(VAR5.VAR14))
        {
            FUN4(VAR4, VAR11, "", VAR15);
            goto VAR16;
        }
        VAR8 = mkstemp(VAR5.VAR14);
        if (VAR8 < 0)
        {
            FUN4(VAR4, VAR11, "", VAR15);
            goto VAR16;
        }
        close(VAR8);
        FUN5(VAR2, "", VAR5.VAR14, &VAR17);
    }
    if ((FUN6(VAR5.VAR14, VAR18) == 0) && unlink(VAR5.VAR14) < 0)
    {
        FUN4(VAR4, VAR11, "", VAR5.VAR14);
        goto VAR16;
    }
    if (FUN7(VAR7, (struct VAR19 *)&VAR5, sizeof(VAR5)) < 0)
    {
        FUN4(VAR4, VAR11, "", VAR5.VAR14);
        goto VAR16;
    }
    if (FUN8(VAR7, 1) < 0)
    {
        FUN4(VAR4, VAR11, "");
        goto VAR16;
    }
    return VAR7;
VAR16:
    FUN9(VAR7);
    return -1;
}