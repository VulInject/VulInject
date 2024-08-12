static int FUN1(VAR1 *VAR2)
{
    char *VAR3 = NULL, *VAR4 = NULL, *VAR5 = NULL;
    int VAR6;
    const char *VAR7 = "";
    const int VAR8[] = {257, 0};
    if (FUN2(VAR2, VAR7, VAR8, &VAR3) != 257 || !VAR3)
        goto VAR9;
    for (VAR6 = 0; VAR3[VAR6]; ++VAR6)
    {
        if (VAR3[VAR6] == '')
        {
            if (!VAR4)
            {
                VAR4 = VAR3 + VAR6 + 1;
                continue;
            }
            VAR5 = VAR3 + VAR6;
            break;
        }
    }
    if (!VAR5)
        goto VAR9;
    if (VAR5 > VAR3 && VAR5[-1] == '')
    {
        VAR5[-1] = '';
    }
    else
        *VAR5 = '';
    FUN3(VAR2->VAR10, VAR4, sizeof(VAR2->VAR10));
    FUN4(VAR3);
    return 0;
VAR9:
    FUN4(VAR3);
    return FUN5(VAR11);
}