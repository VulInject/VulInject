static int FUN1(VAR1 *VAR2)
{
    char *VAR3 = NULL, *VAR4 = NULL, *VAR5 = NULL;
    int VAR6;
    static const char VAR7 = '';
    static const char *VAR8 = "";
    static const int VAR9[] = {229, 0};
    if (FUN2(VAR2, VAR8, VAR9, &VAR3) != 229 || !VAR3)
        goto VAR10;
    for (VAR6 = 0; VAR3[VAR6]; ++VAR6)
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
        goto VAR10;
    *VAR5 = '';
    if (strlen(VAR4) < 5)
        goto VAR10;
    if (VAR4[0] != VAR7 || VAR4[1] != VAR7 || VAR4[2] != VAR7 || VAR5[-1] != VAR7)
        goto VAR10;
    VAR4 += 3;
    VAR5[-1] = '';
    VAR2->VAR11 = FUN3(VAR4);
    FUN4(VAR2, "", VAR2->VAR11);
    FUN5(VAR3);
    return 0;
VAR10:
    FUN5(VAR3);
    VAR2->VAR11 = -1;
    return FUN6(VAR12);
}