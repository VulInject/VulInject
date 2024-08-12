VAR1 *FUN1(const char *VAR2, int64_t VAR3, int VAR4)
{
    struct sockaddr_in VAR5;
    VAR6 *VAR7;
    int VAR8;
    if (FUN2(&VAR5, VAR2) < 0)
        return NULL;
    VAR7 = FUN3(sizeof(*VAR7));
    if (VAR7 == NULL)
        return NULL;
    VAR7->VAR9.VAR10 = VAR11;
    VAR7->VAR9.VAR12 = VAR13;
    VAR7->VAR9.VAR14 = VAR15;
    VAR7->VAR16 = VAR17;
    VAR7->VAR18 = !VAR4;
    VAR7->VAR3 = VAR3;
    VAR7->VAR19 = socket(VAR20, VAR21, 0);
    if (VAR7->VAR19 == -1)
    {
        FUN4(VAR7);
        return NULL;
    }
    FUN5(VAR7->VAR19);
    if (VAR7->VAR18 == 1)
    {
        FUN6("");
        FUN7();
        VAR7->VAR18 = 2;
    }
    do
    {
        VAR8 = connect(VAR7->VAR19, (struct VAR22 *)&VAR5, sizeof(VAR5));
        if (VAR8 == -1)
            VAR8 = -VAR23;
        if (VAR8 == -VAR24)
            FUN8(VAR7->VAR19, NULL, NULL, VAR25, VAR7);
    } while (VAR8 == -VAR26);
    if (VAR8 < 0 && VAR8 != -VAR24)
    {
        FUN6("");
        close(VAR7->VAR19);
        FUN4(VAR7);
        VAR7 = NULL;
    }
    else if (VAR8 >= 0)
        FUN9(VAR7);
    return &VAR7->VAR9;
}