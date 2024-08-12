static int FUN1(int VAR1, int VAR2)
{
    int VAR3 = 0;
    int VAR4 = (VAR2) ? 31 : 15;
    int VAR5 = 1 << (VAR4 - 1);
    if (VAR1)
    {
        if (VAR1 == -1)
            return VAR4;
        if (VAR1 < 0)
            VAR1 = ~VAR1;
        VAR3 = VAR4 - FUN2(VAR1) - 1;
        VAR3 = FUN3(VAR3, 0);
    }
    return VAR3;
}