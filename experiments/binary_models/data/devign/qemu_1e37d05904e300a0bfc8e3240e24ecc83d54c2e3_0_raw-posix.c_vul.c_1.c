static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    int VAR4;
    int64_t VAR5 = 0;
    while (VAR3 && VAR3->VAR6)
    {
        if (!strcmp(VAR3->VAR6, VAR7))
        {
            VAR5 = VAR3->VAR8.VAR9 / 512;
        }
        VAR3++;
    }
    VAR4 = open(VAR1, VAR10 | VAR11 | VAR12 | VAR13, 0644);
    if (VAR4 < 0)
        return -VAR14;
    FUN2(VAR4, VAR5 * 512);
    close(VAR4);
    return 0;
}