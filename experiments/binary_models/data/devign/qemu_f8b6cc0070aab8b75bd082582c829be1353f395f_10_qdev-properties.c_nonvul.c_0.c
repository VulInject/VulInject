static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    VAR6 **VAR7 = FUN2(VAR2, VAR4);
    VAR6 *VAR8;
    VAR8 = FUN3(VAR5);
    if (VAR8 == NULL)
        return -VAR9;
    *VAR7 = VAR8;
    return 0;
}