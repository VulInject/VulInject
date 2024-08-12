int FUN1(VAR1 *VAR2)
{
    int VAR3;
    ssize_t VAR4;
    char VAR5[512];
    VAR3 = 0;
    do
    {
        VAR4 = read(VAR2->VAR6, VAR5, sizeof(VAR5));
        VAR3 |= (VAR4 > 0);
    } while ((VAR4 == -1 && VAR7 == VAR8) || VAR4 == sizeof(VAR5));
    return VAR3;
}