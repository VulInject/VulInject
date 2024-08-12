static void FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    unsigned int VAR6, VAR7, VAR8, VAR9;
    unsigned char VAR10[3] = {0, 0, 0};
    VAR8 = VAR2->VAR11;
    VAR9 = VAR2->VAR12;
    VAR5 = fopen(VAR3, "");
    if (!VAR5)
        return;
    fprintf(VAR5, "", VAR8, VAR9, 255);
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            fwrite(VAR10, 3, 1, VAR5);
        }
    }
    fclose(VAR5);
}