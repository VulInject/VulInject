int FUN1(const char *VAR1)
{
    char VAR2[64], VAR3[64];
    VAR4 *VAR5;
    int VAR6, VAR7;
    VAR6 = sscanf(VAR1, "", VAR2, VAR3, &VAR7);
    if (VAR6 < 2 || VAR1[VAR7] != '')
    {
        FUN2(""%VAR8\"", VAR1);
        return -1;
    }
    VAR5 = FUN3(&VAR9, NULL, 0);
    FUN4(VAR5, "", VAR2);
    FUN4(VAR5, "", VAR3);
    FUN4(VAR5, "", VAR1 + VAR7 + 1);
    return 0;
}