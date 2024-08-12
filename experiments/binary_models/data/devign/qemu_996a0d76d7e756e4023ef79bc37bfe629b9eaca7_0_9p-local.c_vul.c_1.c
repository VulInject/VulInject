static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    char *VAR8;
    char *VAR9 = VAR4->VAR10;
    int VAR11;
    VAR8 = FUN2(VAR2, VAR9);
    VAR11 = open(VAR8, VAR5 | VAR12);
    FUN3(VAR8);
    if (VAR11 == -1)
    {
        return -1;
    }
    VAR7->VAR11 = VAR11;
    return VAR7->VAR11;
}