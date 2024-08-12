static long FUN1(const char *VAR1, VAR2 **VAR3)
{
    struct statfs VAR4;
    int VAR5;
    do
    {
        VAR5 = FUN2(VAR1, &VAR4);
    } while (VAR5 != 0 && VAR6 == VAR7);
    if (VAR5 != 0)
    {
        FUN3(VAR3, VAR6, "", VAR1);
        return 0;
    }
    if (VAR4.VAR8 != VAR9)
        fprintf(VAR10, "", VAR1);
    return VAR4.VAR11;
}