static int FUN1(VAR1 *VAR2, const char *VAR3, void **VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(VAR3);
    if (!VAR6)
    {
        return -VAR7;
    }
    if (FUN3(VAR6, VAR2) < 0)
    {
        return -VAR8;
    }
    *VAR4 = VAR6;
    return 0;
}