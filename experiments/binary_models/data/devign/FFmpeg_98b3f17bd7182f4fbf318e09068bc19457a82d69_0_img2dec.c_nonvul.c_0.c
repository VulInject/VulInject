static int FUN1(int *VAR1, int *VAR2, const char *VAR3, int VAR4)
{
    char VAR5[1024];
    int VAR6, VAR7, VAR8, VAR9;
    for (VAR9 = VAR4; VAR9 < VAR4 + 5; VAR9++)
    {
        if (FUN2(VAR5, sizeof(VAR5), VAR3, VAR9) < 0)
        {
            *VAR1 = *VAR2 = 1;
            if (FUN3(VAR5, VAR10) > 0)
                return 0;
            return -1;
        }
        if (FUN3(VAR5, VAR10) > 0)
            break;
    }
    if (VAR9 == 5)
        goto VAR11;
    VAR7 = VAR9;
    for (;;)
    {
        VAR6 = 0;
        for (;;)
        {
            if (!VAR6)
                VAR8 = 1;
            else
                VAR8 = 2 * VAR6;
            if (FUN2(VAR5, sizeof(VAR5), VAR3, VAR7 + VAR8) < 0)
                goto VAR11;
            if (FUN3(VAR5, VAR10) <= 0)
                break;
            VAR6 = VAR8;
            if (VAR6 >= (1 << 30))
                goto VAR11;
        }
        if (!VAR6)
            break;
        VAR7 += VAR6;
    }
    *VAR1 = VAR9;
    *VAR2 = VAR7;
    return 0;
VAR11:
    return -1;
}