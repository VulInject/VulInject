VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, int64_t VAR5, int VAR6, int VAR7, int VAR8)
{
    struct sockaddr_in VAR9;
    VAR10 *VAR11;
    int VAR12;
    if (FUN2(&VAR9, VAR4) < 0)
        return NULL;
    VAR11 = FUN3(sizeof(*VAR11));
    VAR11->VAR13 = VAR14;
    VAR11->write = VAR15;
    VAR11->close = VAR16;
    VAR11->VAR17.VAR18 = VAR19;
    VAR11->VAR17.VAR20 = VAR21;
    VAR11->VAR17.VAR22 = VAR23;
    VAR11->VAR17.VAR7 = VAR7;
    VAR11->VAR17.VAR24 = VAR8;
    VAR11->VAR25 = VAR26;
    VAR11->VAR3 = NULL;
    VAR11->VAR5 = VAR5;
    VAR11->VAR27 = socket(VAR28, VAR29, 0);
    if (VAR11->VAR27 == -1)
    {
        FUN4(VAR11);
        return NULL;
    }
    FUN5(VAR11->VAR27);
    if (!VAR6)
    {
        FUN6(VAR11, VAR3);
    }
    do
    {
        VAR12 = connect(VAR11->VAR27, (struct VAR30 *)&VAR9, sizeof(VAR9));
        if (VAR12 == -1)
            VAR12 = -(VAR11->FUN7(VAR11));
        if (VAR12 == -VAR31 || VAR12 == -VAR32)
            FUN8(VAR11->VAR27, NULL, NULL, VAR33, VAR11);
    } while (VAR12 == -VAR34);
    if (VAR12 < 0 && VAR12 != -VAR31 && VAR12 != -VAR32)
    {
        FUN9("");
        close(VAR11->VAR27);
        FUN4(VAR11);
        return NULL;
    }
    else if (VAR12 >= 0)
        FUN10(VAR11);
    return &VAR11->VAR17;
}