void FUN1(void)
{
    if (FUN2(!(((VAR1)VAR2 == VAR3 && (VAR1)VAR4 == -1ULL) || (VAR1)VAR4 == 0)))
    {
        VAR5 = 0;
        VAR2 = (VAR1)VAR2 / (VAR1)VAR4;
    }
    else
    {
        VAR6 = 1;
        VAR5 = 1;
        VAR2 = (-1ULL) * ((VAR7)VAR2 >> 63);
    }
}