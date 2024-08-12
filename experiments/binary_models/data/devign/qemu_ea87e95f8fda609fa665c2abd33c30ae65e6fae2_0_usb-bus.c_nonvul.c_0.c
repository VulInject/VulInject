static char *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    char *VAR5, *VAR6;
    ssize_t VAR7 = 0, VAR8;
    long VAR9;
    VAR8 = 32 + strlen(VAR4->VAR10->VAR11) * 6;
    VAR5 = FUN3(VAR8);
    VAR6 = VAR4->VAR10->VAR11;
    while (VAR8 - VAR7 > 0)
    {
        VAR9 = FUN4(VAR6, &VAR6, 10);
        if (VAR6[0] == '')
        {
            VAR7 += snprintf(VAR5 + VAR7, VAR8 - VAR7, "", VAR9);
            VAR6++;
        }
        else
        {
            VAR7 += snprintf(VAR5 + VAR7, VAR8 - VAR7, "", FUN5(VAR2), VAR9);
            break;
        }
    }
    return VAR5;
}