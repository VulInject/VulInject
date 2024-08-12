static int FUN1(char *VAR1, size_t VAR2, const char *VAR3, const char *VAR4)
{
    VAR5 *VAR6;
    int VAR7 = 0;
    char VAR8[VAR9];
    snprintf(VAR8, VAR9, VAR10 "", VAR4, VAR3);
    VAR6 = fopen(VAR8, "");
    if (VAR6)
    {
        fgets(VAR1, VAR2, VAR6);
        fclose(VAR6);
        VAR7 = 1;
    }
    else
    {
        FUN2("", VAR8);
    }
    return VAR7;
}