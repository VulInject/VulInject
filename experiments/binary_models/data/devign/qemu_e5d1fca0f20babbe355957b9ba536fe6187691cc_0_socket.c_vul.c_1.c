static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5, int VAR6, int VAR7)
{
    struct sockaddr_in VAR8;
    int VAR9;
    socklen_t VAR10;
    VAR11 *VAR12;
    VAR1 *VAR13;
    if (VAR7)
    {
        if (FUN2(VAR6, (struct VAR14 *)&VAR8, &VAR10) == 0)
        {
            if (VAR8.VAR15.VAR16 == 0)
            {
                fprintf(VAR17, ""
                                "",
                        VAR6);
                return NULL;
            }
            VAR9 = FUN3(&VAR8, NULL);
            if (VAR9 < 0)
            {
                close(VAR6);
                return NULL;
            }
            FUN4(VAR9, VAR6);
            close(VAR9);
        }
        else
        {
            fprintf(VAR17, "", VAR6, strerror(VAR18));
            return NULL;
        }
    }
    VAR12 = FUN5(&VAR19, VAR3, NULL, VAR4, VAR5);
    snprintf(VAR12->VAR20, sizeof(VAR12->VAR20), "", VAR6, VAR7 ? "" : "", FUN6(VAR8.VAR15), FUN7(VAR8.VAR21));
    VAR13 = FUN8(VAR1, VAR12, VAR12);
    VAR13->VAR6 = VAR6;
    FUN9(VAR13->VAR6, VAR22, NULL, VAR13);
    if (VAR7)
        VAR13->VAR23 = VAR8;
    return VAR13;
}