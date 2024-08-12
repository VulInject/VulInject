VAR1 FUN1(const char *VAR2, int VAR3, hwaddr VAR4, size_t VAR5)
{
    VAR6 *VAR7;
    ssize_t VAR8;
    VAR7 = FUN2(VAR5);
    VAR8 = read(VAR3, VAR7, VAR5);
    if (VAR8 > 0)
        FUN3("", VAR7, VAR8, VAR4);
    FUN4(VAR7);
    return VAR8;
}