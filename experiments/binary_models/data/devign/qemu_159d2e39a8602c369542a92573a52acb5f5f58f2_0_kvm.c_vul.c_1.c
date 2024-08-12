static long FUN1(void)
{
    long VAR1 = VAR2;
    VAR3 *VAR4;
    if (VAR5)
    {
        return FUN2(VAR5);
    }
    VAR4 = FUN3("", NULL);
    if (!VAR4)
    {
        return FUN4();
    }
    FUN5(VAR4, VAR6, &VAR1);
    if (VAR1 == VAR2)
    {
        return FUN4();
    }
    if (VAR7 == 0 && VAR1 > FUN4())
    {
        static bool VAR8;
        if (!VAR8)
        {
            FUN6("");
            VAR8 = true;
        }
        return FUN4();
    }
    return VAR1;
}