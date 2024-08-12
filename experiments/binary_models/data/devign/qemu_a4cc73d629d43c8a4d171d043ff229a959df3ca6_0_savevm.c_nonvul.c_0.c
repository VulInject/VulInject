VAR1 *FUN1(const char *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    if (VAR3 == NULL || (VAR3[0] != '' && VAR3[0] != '') || VAR3[1] != 0)
    {
        fprintf(VAR8, "");
        return NULL;
    }
    VAR5 = popen(VAR2, VAR3);
    if (VAR5 == NULL)
    {
        return NULL;
    }
    VAR7 = FUN2(sizeof(VAR6));
    VAR7->VAR5 = VAR5;
    if (VAR3[0] == '')
    {
        VAR7->VAR9 = FUN3(VAR7, &VAR10);
    }
    else
    {
        VAR7->VAR9 = FUN3(VAR7, &VAR11);
    }
    return VAR7->VAR9;
}