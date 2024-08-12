static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4 = open(VAR3, VAR5);
    int VAR6 = -1;
    if (VAR4 == -1)
        return -1;
    if (FUN2(VAR4, VAR7, FUN2(VAR4, VAR8) | VAR9) != -1)
        VAR6 = read(VAR4, VAR2, sizeof(*VAR2));
    close(VAR4);
    return VAR6;
}