VAR1 FUN1(const char *VAR2)
{
    struct statfs VAR3;
    int VAR4;
    do
    {
        VAR4 = FUN2(VAR2, &VAR3);
    } while (VAR4 != 0 && VAR5 == VAR6);
    if (VAR4 != 0)
    {
        fprintf(VAR7, "", strerror(VAR5));
        FUN3(1);
    }
    if (VAR3.VAR8 == VAR9)
    {
        return VAR3.VAR10;
    }
    return FUN4();