static void FUN1(char *VAR1, VAR2 *VAR3, VAR4 *VAR5)
{
    char *VAR6;
    int VAR7 = 1, VAR8;
    int64_t VAR9;
    for (VAR6 = VAR1; *VAR6; VAR6++)
        if (*VAR6 == '')
            VAR7++;
    VAR3->VAR10 = VAR7;
    VAR3->VAR11 = FUN2(sizeof(*VAR3->VAR11) * VAR7);
    if (!VAR3->VAR11)
    {
        FUN3(NULL, VAR12, "");
        FUN4(1);
    }
    VAR6 = VAR1;
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        char *VAR13 = strchr(VAR6, '');
        if (VAR13)
            *VAR13++ = 0;
        VAR9 = FUN5("", VAR6, 1);
        VAR3->VAR11[VAR8] = FUN6(VAR9, VAR14, VAR5->VAR15);
        VAR6 = VAR13;
    }
}