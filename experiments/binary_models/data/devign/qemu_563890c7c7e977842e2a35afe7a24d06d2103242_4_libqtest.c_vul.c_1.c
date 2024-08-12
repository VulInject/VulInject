static void FUN1(int VAR1, const char *VAR2, va_list VAR3)
{
    VAR4 *VAR5;
    size_t VAR6, VAR7;
    VAR5 = FUN2(VAR2, VAR3);
    VAR6 = strlen(VAR5);
    VAR7 = 0;
    while (VAR7 < VAR6)
    {
        ssize_t VAR8;
        VAR8 = write(VAR1, VAR5 + VAR7, VAR6 - VAR7);
        if (VAR8 == -1 && VAR9 == VAR10)
        {
            continue;
        }
        FUN3(VAR8);
        FUN4(VAR8, >, 0);
        VAR7 += VAR8;
    }
}