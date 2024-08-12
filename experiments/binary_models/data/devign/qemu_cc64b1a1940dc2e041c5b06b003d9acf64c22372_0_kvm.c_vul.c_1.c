static VAR1 FUN1(const char *VAR2)
{
    char VAR3[VAR4];
    union
    {
        uint32_t VAR5;
        uint64_t VAR6;
    } VAR7;
    VAR8 *VAR9;
    int VAR10;
    if (FUN2(VAR3, sizeof(VAR3)))
    {
        return -1;
    }
    strncat(VAR3, "", sizeof(VAR3) - strlen(VAR3));
    strncat(VAR3, VAR2, sizeof(VAR3) - strlen(VAR3));
    VAR9 = fopen(VAR3, "");
    if (!VAR9)
    {
        return -1;
    }
    VAR10 = fread(&VAR7, 1, sizeof(VAR7), VAR9);
    fclose(VAR9);
    switch (VAR10)
    {
    case 4:
        return FUN3(VAR7.VAR5);
    case 8:
        return FUN4(VAR7.VAR6);
    }
    return 0;
}