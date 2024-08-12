static int FUN1(const char *VAR1, const char *VAR2)
{
    int VAR3;
    char *VAR4;
    char VAR5[16];
    FUN2(VAR5, VAR2, sizeof(VAR5));
    VAR4 = strchr(VAR5, '');
    if (!VAR4)
    {
        fprintf(VAR6, "", VAR2, VAR1);
        FUN3(1);
    }
    *VAR4++ = '';
    VAR3 = FUN4(VAR1, VAR5, VAR7, 0, VAR8 - 1);
    VAR9 = FUN5(VAR9, sizeof(*VAR9), &VAR10, VAR3 + 1);
    VAR9[VAR3] = FUN4(VAR1, VAR4, VAR7, 0, VAR11);
    return 0;
}