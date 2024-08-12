static int FUN1(VAR1 *VAR2)
{
    char *VAR3;
    char VAR4[VAR5 + 1];
    VAR6 *VAR7 = VAR2->VAR8;
    VAR4[VAR5] = '';
    if (FUN2(VAR2->VAR9, VAR7->VAR10, VAR4, VAR5) != VAR5)
    {
        return -1;
    }
    VAR3 = strstr(VAR4, "");
    if (VAR3 != NULL)
    {
        char *VAR11;
        VAR3 += sizeof("") + 1;
        VAR11 = strchr(VAR3, '');
        if (VAR11 == NULL)
        {
            return -1;
        }
        if ((VAR11 - VAR3) > sizeof(VAR2->VAR12) - 1)
        {
            return -1;
        }
        FUN3(VAR2->VAR12, VAR11 - VAR3 + 1, VAR3);
    }
    return 0;
}