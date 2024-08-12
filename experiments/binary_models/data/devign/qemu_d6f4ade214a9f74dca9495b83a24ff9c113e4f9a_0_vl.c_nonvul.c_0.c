static int FUN1(void)
{
    int VAR1;
    if (!VAR2)
        VAR1 = 5000;
    else
    {
        int64_t VAR3;
        int64_t VAR4;
        VAR4 = FUN2();
        if (VAR4 > 0)
        {
            VAR1 = (VAR4 + 999999) / 1000000;
        }
        else
        {
            VAR3 = FUN3();
            if (VAR3 > 10000000)
                VAR3 = 10000000;
            VAR4 += VAR3;
            VAR5 += FUN4(VAR3);
            VAR1 = VAR4 / 1000000;
            if (VAR1 < 0)
                VAR1 = 0;
        }
    }
    return VAR1;
    return 1000;
}