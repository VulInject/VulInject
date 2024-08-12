static int FUN1(const char *VAR1, struct VAR2 *VAR3)
{
    enum
    {
        VAR4,
        VAR5,
        VAR6,
        VAR7,
        VAR8
    };
    const char *VAR9 = VAR1;
    int VAR10;
    VAR3->VAR11 = -1;
    VAR3->VAR12 = -1;
    VAR3->VAR13 = -1;
    VAR3->VAR14 = -1;
    for (VAR10 = VAR4; VAR10 < VAR8; VAR10++)
    {
        VAR9 = strpbrk(VAR9, "");
        if (!VAR9)
            break;
        VAR9++;
        if (*VAR9 == '')
            continue;
        switch (VAR10)
        {
        case VAR4:
            VAR3->VAR11 = FUN2(VAR9, NULL, 10);
            break;
        case VAR5:
            VAR3->VAR12 = FUN2(VAR9, NULL, 10);
            break;
        case VAR6:
            VAR3->VAR13 = FUN2(VAR9, NULL, 16);
            break;
        case VAR7:
            VAR3->VAR14 = FUN2(VAR9, NULL, 16);
            break;
        }
    }
    if (VAR10 < VAR5)
    {
        fprintf(VAR15, "", VAR1);
        return -1;
    }
    return 0;
}