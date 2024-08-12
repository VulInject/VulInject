int FUN1(VAR1 **VAR2, const char *VAR3, int VAR4)
{
    VAR1 *VAR5;
    int VAR6;
    VAR5 = FUN2("");
    VAR6 = FUN3(VAR5, VAR3, VAR4 | VAR7, NULL);
    if (VAR6 < 0)
    {
        FUN4(VAR5);
        return VAR6;
    }
    VAR5->VAR8 = 1;
    *VAR2 = VAR5;
    return 0;
}