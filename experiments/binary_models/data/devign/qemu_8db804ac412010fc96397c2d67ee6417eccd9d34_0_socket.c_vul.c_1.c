static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5, int VAR6, int VAR7)
{
    struct sockaddr_in VAR8;
    int VAR9;
    socklen_t VAR10 = sizeof(VAR8);
    VAR2 *VAR11;
    VAR1 *VAR12;
    if (VAR7)
    {
        if (FUN2(VAR6, (struct VAR13 *)&VAR8, &VAR10) == 0)
        {
            if (VAR8.VAR14.VAR15 == 0)
            {
                fprintf(VAR16, ""
                                "",
                        VAR6);
                goto VAR17;
            }
            VAR9 = FUN3(&VAR8, NULL);
            if (VAR9 < 0)
            {
                goto VAR17;
            }
            FUN4(VAR9, VAR6);
            close(VAR9);
        }
        else
        {
            fprintf(VAR16, "", VAR6, strerror(VAR18));
            goto VAR17;
        }
    }
    VAR11 = FUN5(&VAR19, VAR3, VAR4, VAR5);
    snprintf(VAR11->VAR20, sizeof(VAR11->VAR20), "", VAR6, VAR7 ? "" : "", FUN6(VAR8.VAR14), FUN7(VAR8.VAR21));
    VAR12 = FUN8(VAR1, VAR11, VAR11);
    VAR12->VAR6 = VAR6;
    VAR12->VAR22 = -1;
    VAR12->VAR23 = VAR24;
    FUN9(VAR12, true);
    if (VAR7)
    {
        VAR12->VAR25 = VAR8;
    }
    return VAR12;
VAR17:
    FUN10(VAR6);
    return NULL;
}