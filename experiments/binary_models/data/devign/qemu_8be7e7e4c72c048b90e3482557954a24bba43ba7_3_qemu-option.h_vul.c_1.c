int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5)
{
    VAR6 *VAR7;
    VAR7 = FUN2(VAR2, VAR3, 1);
    if (VAR7 == NULL)
    {
        return -1;
    }
    return FUN3(VAR7, VAR4, VAR5);
}