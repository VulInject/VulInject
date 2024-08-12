static VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5)
{
    struct sockaddr_in VAR6;
    int VAR7;
    socklen_t VAR8;
    VAR1 *VAR9;
    if (VAR5)
    {
        if (FUN2(VAR4, (struct VAR10 *)&VAR6, &VAR8) == 0)
        {
            if (VAR6.VAR11.VAR12 == 0)
            {
                fprintf(VAR13, "", VAR4);
                return NULL;
            }
            VAR7 = FUN3(&VAR6);
            if (VAR7 < 0)
            {
                close(VAR4);
                return NULL;
            }
            FUN4(VAR7, VAR4);
            close(VAR7);
        }
        else
        {
            fprintf(VAR13, "", VAR4, strerror(VAR14));
            return NULL;
        }
    }
    VAR9 = FUN5(sizeof(VAR1));
    if (!VAR9)
        return NULL;
    VAR9->VAR4 = VAR4;
    VAR9->VAR15 = FUN6(VAR3, VAR16, VAR9);
    FUN7(VAR9->VAR4, VAR17, NULL, VAR9);
    if (VAR5)
        VAR9->VAR18 = VAR6;
    snprintf(VAR9->VAR15->VAR19, sizeof(VAR9->VAR15->VAR19), "", VAR4, VAR5 ? "" : "", FUN8(VAR6.VAR11), FUN9(VAR6.VAR20));
    return VAR9;
}