void FUN1(void)
{
    if (FUN2(!((VAR1 == VAR2 && VAR3 == -1) || VAR3 == 0)))
    {
        VAR4 = 0;
        VAR5 = (VAR1 / VAR3);
    }
    else
    {
        VAR6 = 1;
        VAR4 = 1;
        VAR5 = (-1) * ((VAR7)VAR5 >> 31);
    }
}