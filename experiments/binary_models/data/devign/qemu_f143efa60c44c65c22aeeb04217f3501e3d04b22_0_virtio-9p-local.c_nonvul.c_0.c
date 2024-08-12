static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    char *VAR5;
    int VAR6;
    VAR5 = FUN2(FUN3(VAR2, VAR3));
    VAR6 = FUN4(VAR5, FUN3(VAR2, VAR4));
    if (VAR6 == -1)
    {
        int VAR7 = VAR8;
        FUN5(VAR5);
        VAR8 = VAR7;
    }
    else
    {
        FUN5(VAR5);
    }
    return VAR6;
}