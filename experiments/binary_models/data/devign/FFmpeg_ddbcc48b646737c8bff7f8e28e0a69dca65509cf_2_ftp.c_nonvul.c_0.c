static int FUN1(VAR1 *VAR2)
{
    char *VAR3 = NULL, *VAR4, *VAR5;
    int VAR6;
    const char *VAR7 = "";
    const int VAR8[] = {227, 501, 0};
    if (FUN2(VAR2, VAR7, VAR8, &VAR3) != 227 || !VAR3)
        goto VAR9;
    VAR4 = NULL;
    for (VAR6 = 0; VAR6 < strlen(VAR3); ++VAR6)
    {
        if (VAR3[VAR6] == '')
        {
            VAR4 = VAR3 + VAR6 + 1;
        }
        else if (VAR3[VAR6] == '')
        {
            VAR5 = VAR3 + VAR6;
            break;
        }
    }
    if (!VAR4 || !VAR5)
        goto VAR9;
    *VAR5 = '';
    if (!FUN3(VAR4, "", &VAR5))
        goto VAR9;
    if (!FUN3(VAR5, "", &VAR5))
        goto VAR9;
    if (!FUN3(VAR5, "", &VAR5))
        goto VAR9;
    if (!FUN3(VAR5, "", &VAR5))
        goto VAR9;
    VAR4 = FUN3(VAR5, "", &VAR5);
    if (!VAR4)
        goto VAR9;
    VAR2->VAR10 = FUN4(VAR4) * 256;
    VAR4 = FUN3(VAR5, "", &VAR5);
    if (!VAR4)
        goto VAR9;
    VAR2->VAR10 += FUN4(VAR4);
    FUN5(VAR2, "", VAR2->VAR10);
    FUN6(VAR3);
    return 0;
VAR9:
    FUN6(VAR3);
    VAR2->VAR10 = -1;
    return FUN7(VAR11);
}