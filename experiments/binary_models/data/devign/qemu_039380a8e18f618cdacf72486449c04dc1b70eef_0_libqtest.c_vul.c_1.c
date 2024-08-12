void FUN1(VAR1 *VAR2, const char *VAR3, ...)
{
    va_list VAR4;
    bool VAR5 = false;
    int VAR6 = 0;
    FUN2(VAR4, VAR3);
    FUN3(VAR2->VAR7, VAR3, VAR4);
    FUN4(VAR4);
    while (!VAR5 || VAR6 > 0)
    {
        ssize_t VAR8;
        char VAR9;
        VAR8 = read(VAR2->VAR7, &VAR9, 1);
        if (VAR8 == -1 && VAR10 == VAR11)
        {
            continue;
            switch (VAR9)
            {
            case '':
                VAR6++;
                VAR5 = true;
                break;
            case '':
                VAR6--;
                break