VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, int64_t VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10;
    struct sockaddr_un VAR11;
    int VAR12;
    VAR11.VAR13 = VAR14;
    snprintf(VAR11.VAR15, sizeof(VAR11.VAR15), "", VAR4);
    VAR10 = FUN2(sizeof(*VAR10));
    VAR10->VAR16 = VAR17;
    VAR10->write = VAR18;
    VAR10->close = VAR19;
    VAR10->VAR20.VAR21 = VAR22;
    VAR10->VAR20.VAR23 = VAR24;
    VAR10->VAR20.VAR25 = VAR26;
    VAR10->VAR20.VAR7 = VAR7;
    VAR10->VAR20.VAR27 = VAR8;
    VAR10->VAR28 = VAR29;
    VAR10->VAR3 = NULL;
    VAR10->VAR5 = VAR5;
    VAR10->VAR30 = socket(VAR31, VAR32, 0);
    if (VAR10->VAR30 < 0)
    {
        FUN3("");
        goto VAR33;
    }
    FUN4(VAR10->VAR30);
    if (!VAR6)
    {
        FUN5(VAR10, VAR3);
    }
    do
    {
        VAR12 = connect(VAR10->VAR30, (struct VAR34 *)&VAR11, sizeof(VAR11));
        if (VAR12 == -1)
            VAR12 = -(VAR10->FUN6(VAR10));
        if (VAR12 == -VAR35 || VAR12 == -VAR36)
            FUN7(VAR10->VAR30, NULL, NULL, VAR37, VAR10);
    } while (VAR12 == -VAR38);
    if (VAR12 < 0 && VAR12 != -VAR35 && VAR12 != -VAR36)
    {
        FUN3("");
        goto VAR39;
    }
    else if (VAR12 >= 0)
        FUN8(VAR10);
    return &VAR10->VAR20;
VAR39:
    close(VAR10->VAR30);
VAR33:
    FUN9(VAR10);
    return NULL;
}