static void FUN1(void)
{
    const unsigned long VAR1 = 40000000;
    unsigned long VAR2 = 0;
    double VAR3;
    unsigned long VAR4;
    VAR5 *VAR6;
    FUN2();
    while (VAR2++ < VAR1)
    {
        VAR6 = FUN3(VAR7);
        FUN4(VAR6, &VAR2);
        FUN4(VAR6, NULL);
    }
    VAR3 = FUN5();
    VAR4 = (long)(VAR1 / (VAR3 * 1000));
    FUN6(""
                   "",
                   VAR1, VAR3, VAR4, (unsigned long)(1000000000 * VAR3) / VAR1);
}