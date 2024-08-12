static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    const char *VAR4;
    int VAR5;
    char VAR6[16384], *VAR7;
    SDPParseState VAR8, *VAR9 = &VAR8;
    memset(VAR9, 0, sizeof(VAR10));
    VAR4 = VAR3;
    for (;;)
    {
        FUN2(&VAR4);
        VAR5 = *VAR4;
        if (VAR5 == '')
            break;
        VAR4++;
        if (*VAR4 != '')
            goto VAR11;
        VAR4++;
        VAR7 = VAR6;
        while (*VAR4 != '' && *VAR4 != '' && *VAR4 != '')
        {
            if ((VAR7 - VAR6) < sizeof(VAR6) - 1)
                *VAR7++ = *VAR4;
            VAR4++;
        }
        *VAR7 = '';
        FUN3(VAR2, VAR9, VAR5, VAR6);
    VAR11:
        while (*VAR4 != '' && *VAR4 != '')
            VAR4++;
        if (*VAR4 == '')
            VAR4++;
    }
    return 0;
}