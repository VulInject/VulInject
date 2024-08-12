void FUN1(void)
{
    VAR1 = VAR2 + ~VAR1 + VAR3;
    if (FUN2(VAR1 >= VAR2 && (VAR3 == 0 || VAR1 != VAR2)))
    {
        VAR3 = 0;
    }
    else
    {
        VAR3 = 1;
    }
}