static void FUN1(void)
{
    unsigned int VAR1, VAR2, VAR3;
    double VAR4;
    VAR2 = 10000;
    VAR3 = 1000;
    VAR5 *VAR6;
    FUN2();
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
    {
        NestData VAR7 = {
            .VAR8 = 0,
            .VAR9 = 0,
            .VAR10 = VAR3,
        };
        VAR6 = FUN3(VAR11);
        FUN4(VAR6, &VAR7);
    }
    VAR4 = FUN5();
    FUN6("", VAR2, VAR3, VAR4);
}