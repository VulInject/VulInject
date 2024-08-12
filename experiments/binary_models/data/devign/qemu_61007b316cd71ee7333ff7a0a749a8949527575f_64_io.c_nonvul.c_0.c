int FUN1(void)
{
    VAR1 *VAR2 = NULL;
    int VAR3 = 0;
    while ((VAR2 = FUN2(VAR2)))
    {
        VAR4 *VAR5 = FUN3(VAR2);
        int VAR6;
        FUN4(VAR5);
        VAR6 = FUN5(VAR2);
        if (VAR6 < 0 && !VAR3)
        {
            VAR3 = VAR6;
        }
        FUN6(VAR5);
    }
    return VAR3;
}