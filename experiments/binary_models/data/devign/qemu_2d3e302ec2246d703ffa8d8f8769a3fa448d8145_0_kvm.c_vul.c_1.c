bool FUN1(const char *VAR1)
{
    VAR2 *VAR3 = FUN2(VAR1, NULL);
    char *VAR4 = FUN3(VAR3, "", NULL);
    long VAR5;
    if (VAR4)
    {
        VAR5 = FUN4(VAR4);
    }
    else
    {
        VAR5 = FUN5();
    }
    return VAR5 >= VAR6;