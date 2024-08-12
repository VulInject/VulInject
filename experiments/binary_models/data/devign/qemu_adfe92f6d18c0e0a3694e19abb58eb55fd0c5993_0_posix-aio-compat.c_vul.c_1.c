static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    ssize_t VAR4;
    for (;;)
    {
        char VAR5[16];
        VAR4 = read(VAR3->VAR6, VAR5, sizeof(VAR5));
        if (VAR4 == -1 && VAR7 == VAR8)
            continue;
        if (VAR4 == sizeof(VAR5))
            continue;
        break;
    }
    FUN2(VAR3);
}