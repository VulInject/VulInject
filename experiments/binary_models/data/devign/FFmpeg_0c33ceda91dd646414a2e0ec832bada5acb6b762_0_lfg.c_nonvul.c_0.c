int main(void)
{
    int VAR1 = 0;
    int VAR2, VAR3;
    AVLFG VAR4;
    FUN1(&VAR4, 0xdeadbeef);
    for (VAR3 = 0; VAR3 < 10000; VAR3++)
    {
        START_TIMER for (VAR2 = 0; VAR2 < 624; VAR2++) { VAR1 += FUN2(&VAR4); }
        FUN3("");
    }
    FUN4(NULL, VAR5, "", VAR1);
    {
        double VAR6 = 1000;
        double VAR7 = 53;
        double VAR8 = 0.0, VAR9 = 0.0;
        double VAR10, VAR11;
        FUN1(&VAR4, 42);
        for (VAR2 = 0; VAR2 < 1000; VAR2 += 2)
        {
            double VAR12[2];
            FUN5(&VAR4, VAR12);
            VAR10 = VAR12[0] * VAR7 + VAR6;
            VAR11 = VAR12[1] * VAR7 + VAR6;
            VAR8 += VAR10 + VAR11;
            VAR9 += VAR10 * VAR10 + VAR11 * VAR11;
            FUN4(NULL, VAR13, "", VAR10, VAR11);
        }
        VAR8 /= 1000;
        VAR9 /= 999;
        VAR9 -= (1000.0 / 999.0) * VAR8 * VAR8;
        VAR9 = FUN6(VAR9);
        FUN4(NULL, VAR13, ""
                                  ""
                                  ""
                                  "",
               VAR8, VAR6, VAR9, VAR7);
    }
    return 0;
}