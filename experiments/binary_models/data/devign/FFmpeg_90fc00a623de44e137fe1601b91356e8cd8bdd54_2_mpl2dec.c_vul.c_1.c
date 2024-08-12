static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    char VAR4;
    int64_t VAR5, VAR6;
    const unsigned char *VAR7 = VAR2->VAR8;
    const unsigned char *VAR9 = VAR7 + VAR2->VAR10;
    for (VAR3 = 0; VAR3 < 2; VAR3++)
    {
        if (sscanf(VAR7, "" VAR11 "" VAR11 "", &VAR5, &VAR6, &VAR4) != 3 && sscanf(VAR7, "" VAR11 "", &VAR5, &VAR4) != 2)
            return 0;
        VAR7 += strcspn(VAR7, "") + 1;
        if (VAR7 >= VAR9)
            return 0;
    }
    return VAR12;
}