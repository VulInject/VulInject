static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    VAR6 *VAR7;
    char VAR8[32];
    static int VAR9;
    if (*VAR4 == '')
    {
        VAR4++;
    }
    else if (*VAR4)
    {
        FUN2("", VAR4);
        return NULL;
    }
    if (!*VAR4)
    {
        FUN2("");
        return NULL;
    }
    snprintf(VAR8, sizeof(VAR8), "", VAR9++);
    VAR7 = FUN3(VAR8, VAR4);
    if (!VAR7)
        return NULL;
    VAR5 = FUN4(VAR3, "");
    FUN5(&VAR5->VAR10, "", VAR7);
    return VAR5;
}