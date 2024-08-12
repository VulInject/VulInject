static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5, int VAR6, int VAR7, const char *VAR8, VAR9 **VAR10)
{
    struct sockaddr_in VAR11;
    int VAR12;
    VAR2 *VAR13;
    VAR1 *VAR14;
    if (VAR7 && VAR8 != NULL)
    {
        if (FUN2(&VAR11, VAR8, VAR10) < 0)
        {
            goto VAR15;
        }
        if (VAR11.VAR16.VAR17 == 0)
        {
            FUN3(VAR10, "");
            goto VAR15;
        }
        VAR12 = FUN4(&VAR11, NULL, VAR10);
        if (VAR12 < 0)
        {
            goto VAR15;
        }
        FUN5(VAR12, VAR6);
        close(VAR12);
    }
    VAR13 = FUN6(&VAR18, VAR3, VAR4, VAR5);
    VAR14 = FUN7(VAR1, VAR13, VAR13);
    VAR14->VAR6 = VAR6;
    VAR14->VAR19 = -1;
    VAR14->VAR20 = VAR21;
    FUN8(&VAR14->VAR22, VAR23, false);
    FUN9(VAR14, true);
    if (VAR7)
    {
        VAR14->VAR24 = VAR11;
        snprintf(VAR13->VAR25, sizeof(VAR13->VAR25), "", VAR6, FUN10(VAR11.VAR16), FUN11(VAR11.VAR26));
    }
    else
    {
        snprintf(VAR13->VAR25, sizeof(VAR13->VAR25), "", VAR6);
    }
    return VAR14;
VAR15:
    FUN12(VAR6);
    return NULL;
}