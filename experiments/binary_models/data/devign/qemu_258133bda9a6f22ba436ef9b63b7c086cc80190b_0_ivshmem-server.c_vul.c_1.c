FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    struct sockaddr_un VAR6;
    socklen_t VAR7;
    int VAR8;
    unsigned VAR9;
    VAR7 = sizeof(VAR6);
    VAR8 = FUN2(VAR2->VAR10, (struct VAR11 *)&VAR6, &VAR7);
    if (VAR8 < 0)
    {
        FUN3(VAR2, "", strerror(VAR12));
        return -1;
    }
    FUN4(VAR8);
    FUN3(VAR2, "", VAR8);
    VAR4 = FUN5(sizeof(*VAR4));
    VAR4->VAR10 = VAR8;
    for (VAR9 = 0; VAR9 < VAR13; VAR9++)
    {
        if (FUN6(VAR2, VAR2->VAR14) == NULL)
        {
            break;
        }
        VAR2->VAR14++;
    }
    if (VAR9 == VAR13)
    {
        FUN3(VAR2, "");
        goto VAR15;
    }
    VAR4->VAR16 = VAR2->VAR14++;
    VAR4->VAR17 = VAR2->VAR18;
    for (VAR9 = 0; VAR9 < VAR4->VAR17; VAR9++)
    {
        if (FUN7(&VAR4->VAR19[VAR9], VAR20) < 0)
        {
            FUN3(VAR2, "");
            goto VAR15;
        }
    }
    if (FUN8(VAR2, VAR4) < 0)
    {
        FUN3(VAR2, "");
        goto VAR15;
    }
    FUN9(VAR5, &VAR2->VAR21, VAR22)
    {
        for (VAR9 = 0; VAR9 < VAR4->VAR17; VAR9++)
        {
            FUN10(VAR5->VAR10, VAR4->VAR16, VAR4->VAR19[VAR9].VAR23);
        }
    }
    FUN9(VAR5, &VAR2->VAR21, VAR22)
    {
        for (VAR9 = 0; VAR9 < VAR4->VAR17; VAR9++)
        {
            FUN10(VAR4->VAR10, VAR5->VAR16, VAR5->VAR19[VAR9].VAR23);
        }
    }
    for (VAR9 = 0; VAR9 < VAR4->VAR17; VAR9++)
    {
        FUN10(VAR4->VAR10, VAR4->VAR16, FUN11(&VAR4->VAR19[VAR9]));
    }
    FUN12(&VAR2->VAR21, VAR4, VAR22);
    FUN3(VAR2, "" VAR24 "", VAR4->VAR16);
    return 0;
VAR15:
    while (VAR9--)
    {
        FUN13(&VAR4->VAR19[VAR9]);
    }
    close(VAR8);
    FUN14(VAR4);
    return -1;
}