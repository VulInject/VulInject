static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    int read = 0;
    char VAR4[20], VAR5[1024], VAR6[1024] = "";
    uint32_t VAR7 = 0, VAR8 = 0;
    for (;;)
    {
        VAR3 += strspn(VAR3, VAR9);
        if (!*VAR3)
            break;
        FUN2(VAR4, sizeof(VAR4), "", &VAR3);
        if (*VAR3 != '')
            break;
        VAR3++;
        FUN2(VAR5, sizeof(VAR5), "", &VAR3);
        read++;
        if (!strcmp(VAR4, ""))
            FUN3(VAR6, VAR5, sizeof(VAR6));
        else if (!strcmp(VAR4, ""))
            VAR7 = FUN4(VAR5, NULL, 10);
        else if (!strcmp(VAR4, ""))
            VAR8 = FUN4(VAR5, NULL, 10);
        if (*VAR3 == '')
        {
            FUN5(VAR2, VAR6, VAR7, VAR8);
            VAR6[0] = '';
            VAR7 = VAR8 = 0;
            read = 0;
        }
        if (*VAR3)
            VAR3++;
    }
    if (read > 0)
        FUN5(VAR2, VAR6, VAR7, VAR8);
}