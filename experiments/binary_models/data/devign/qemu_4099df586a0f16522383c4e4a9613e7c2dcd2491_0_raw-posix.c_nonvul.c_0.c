static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    int VAR4;
    int VAR5 = 0;
    struct stat VAR6;
    int64_t VAR7 = 0;
    while (VAR3 && VAR3->VAR8)
    {
        if (!strcmp(VAR3->VAR8, ""))
        {
            VAR7 = VAR3->VAR9.VAR10 / 512;
        }
        VAR3++;
    }
    VAR4 = open(VAR1, VAR11 | VAR12);
    if (VAR4 < 0)
        return -VAR13;
    if (FUN2(VAR4, &VAR6) < 0)
        VAR5 = -VAR13;
    else if (!FUN3(VAR6.VAR14) && !FUN4(VAR6.VAR14))
        VAR5 = -VAR13;
    else if (FUN5(VAR4, 0, VAR15) < VAR7 * 512)
        VAR5 = -VAR16;
    close(VAR4);
    return VAR5;
}