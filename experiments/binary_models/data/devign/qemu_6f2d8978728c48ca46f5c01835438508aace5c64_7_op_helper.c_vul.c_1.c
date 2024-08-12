void FUN1(void)
{
    if (((VAR1)VAR2 == VAR3 && (VAR1)VAR4 == -1) || (VAR1)VAR4 == 0)
    {
        VAR2 = (long)((-1) * (VAR2 >> 31));
        VAR5->VAR6[VAR7] = 0;
        VAR8 = 1;
        VAR9 = 1;
    }
    else
    {
        VAR2 = (VAR1)VAR2 / (VAR1)VAR4;
        VAR5->VAR6[VAR7] = (VAR1)VAR2 % (VAR1)VAR4;
        VAR8 = 0;
    }
}