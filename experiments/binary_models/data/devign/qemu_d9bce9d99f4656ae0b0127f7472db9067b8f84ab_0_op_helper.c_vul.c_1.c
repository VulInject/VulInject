void FUN1(void)
{
    VAR1 = VAR2;
    VAR2 += VAR3 + VAR4;
    if (FUN2(!(VAR2 < VAR1 || (VAR4 == 1 && VAR2 == VAR1))))
    {
        VAR4 = 0;
    }
    else
    {
        VAR4 = 1;
    }
}