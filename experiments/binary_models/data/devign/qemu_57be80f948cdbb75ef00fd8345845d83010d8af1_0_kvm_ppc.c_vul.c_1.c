static int FUN1(const char *VAR1, const char *VAR2, void *VAR3, size_t VAR4)
{
    char *VAR5;
    VAR6 *VAR7;
    int VAR8;
    int VAR9;
    VAR9 = snprintf(NULL, 0, "", VAR10, VAR1, VAR2) + 1;
    VAR5 = FUN2(VAR9);
    if (VAR5 == NULL)
    {
        VAR8 = -VAR11;
        goto VAR12;
    }
    snprintf(VAR5, VAR9, "", VAR10, VAR1, VAR2);
    VAR7 = fopen(VAR5, "");
    if (VAR7 == NULL)
    {
        VAR8 = VAR13;
        goto free;
    }
    VAR4 = fread(VAR3, VAR4, 1, VAR7);
    if (VAR4 != 1)
    {
        VAR8 = FUN3(VAR7);
        goto close;
    }
close:
    fclose(VAR7);
free:
    free(VAR5);
VAR12:
    return VAR8;
}