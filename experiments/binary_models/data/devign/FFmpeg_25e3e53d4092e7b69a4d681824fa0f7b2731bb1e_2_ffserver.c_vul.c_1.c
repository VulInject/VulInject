static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    char VAR6[1024];
    const char *VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    struct sockaddr_in VAR12;
    FUN2(NULL, 0, NULL, 0, NULL, 0, NULL, VAR6, sizeof(VAR6), VAR3);
    VAR7 = VAR6;
    if (*VAR7 == '')
        VAR7++;
    for (VAR5 = VAR13; VAR5 != NULL; VAR5 = VAR5->VAR14)
    {
        if (!VAR5->VAR15 && !strcmp(VAR5->VAR16->VAR17, "") && !strcmp(VAR7, VAR5->VAR18))
        {
            goto VAR19;
        }
    }
    FUN3(VAR2, VAR20);
    return;
VAR19:
    VAR11 = sizeof(VAR12);
    FUN4(VAR2->VAR21, (struct VAR22 *)&VAR12, &VAR11);
    VAR10 = FUN5(VAR5, &VAR9, VAR12.VAR23);
    if (VAR10 < 0)
    {
        FUN3(VAR2, VAR24);
        return;
    }
    FUN6(VAR2, VAR25);
    FUN7(VAR2->VAR26, "");
    FUN7(VAR2->VAR26, "", VAR10);
    FUN7(VAR2->VAR26, "");
    FUN8(VAR2->VAR26, VAR9, VAR10);
}