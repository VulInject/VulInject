int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5, VAR6;
    struct stat VAR7;
    VAR8 *VAR9;
    V9fsPath VAR10;
    int VAR11 = 1;
    FUN2(&VAR2->VAR12);
    FUN2(&VAR2->VAR13);
    for (VAR5 = 0; VAR5 < (VAR14 - 1); VAR5++)
    {
        FUN3(&VAR2->VAR12, &VAR2->VAR15[VAR5], VAR16);
        VAR2->VAR15[VAR5].VAR2 = VAR2;
        VAR2->VAR15[VAR5].VAR17 = VAR5;
    }
    FUN4(&VAR10);
    VAR9 = FUN5(VAR2->VAR18.VAR19);
    if (!VAR9)
    {
        FUN6(VAR4, ""
                         "",
                   VAR2->VAR18.VAR19 ? VAR2->VAR18.VAR19 : "");
        goto VAR20;
    }
    if (!VAR2->VAR18.VAR21)
    {
        FUN6(VAR4, "", VAR2->VAR18.VAR19);
        goto VAR20;
    }
    VAR2->VAR22.VAR23 = VAR9->VAR23;
    VAR2->VAR22.VAR24 = FUN7(VAR9->VAR10);
    VAR2->VAR22.VAR25.VAR26 = NULL;
    VAR6 = strlen(VAR2->VAR18.VAR21);
    if (VAR6 > VAR27 - 1)
    {
        FUN6(VAR4, ""
                         "",
                   VAR2->VAR18.VAR21, VAR6, VAR27 - 1);
        goto VAR20;
    }
    VAR2->VAR21 = FUN7(VAR2->VAR18.VAR21);
    VAR2->VAR22.VAR28 = -1;
    VAR2->VAR29 = VAR9->VAR29;
    VAR2->VAR30 = NULL;
    FUN8(&VAR2->VAR31);
    if (VAR2->VAR29->FUN9(&VAR2->VAR22) < 0)
    {
        FUN6(VAR4, ""
                         "",
                   VAR2->VAR18.VAR19, VAR2->VAR22.VAR24);
        goto VAR20;
    }
    if (VAR2->VAR29->FUN10(&VAR2->VAR22, NULL, "", &VAR10) < 0)
    {
        FUN6(VAR4, "", strerror(VAR32));
        goto VAR20;
    }
    if (VAR2->VAR29->FUN11(&VAR2->VAR22, &VAR10, &VAR7))
    {
        FUN6(VAR4, "", VAR9->VAR10);
        goto VAR20;
    }
    else if (!FUN12(VAR7.VAR33))
    {
        FUN6(VAR4, "", VAR9->VAR10);
        goto VAR20;
    }
    FUN13(&VAR10);
    VAR11 = 0;
VAR20:
    if (VAR11)
    {
        if (VAR2->VAR29->VAR34 && VAR2->VAR22.private)
        {
            VAR2->VAR29->FUN14(&VAR2->VAR22);
        }
        FUN15(VAR2->VAR21);
        FUN15(VAR2->VAR22.VAR24);
        FUN13(&VAR10);
    }
    return VAR11;
}