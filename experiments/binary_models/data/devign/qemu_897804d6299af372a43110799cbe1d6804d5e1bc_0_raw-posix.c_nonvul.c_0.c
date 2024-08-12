static int FUN1(const char *VAR1)
{
    int VAR2, VAR3;
    int VAR4 = 0;
    VAR2 = open(VAR1, VAR5 | VAR6);
    if (VAR2 < 0)
    {
        goto VAR7;
    }
    VAR3 = FUN2(VAR2, VAR8, VAR9);
    if (VAR3 >= 0)
        VAR4 = 100;
    close(VAR2);
VAR7:
    return VAR4;
}