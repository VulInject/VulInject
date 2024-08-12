void FUN1(void)
{
    int64_t VAR1;
    if ((VAR2 == VAR3 && VAR4 == -1) || VAR4 == 0)
    {
        VAR5 = (long)((-1) * (VAR5 >> 31));
        VAR6->VAR7[VAR8] = 0;
        VAR9 = 1;
        VAR10 = 1;
    }
    else
    {
        VAR1 = ((VAR11)VAR5 << 32) | VAR6->VAR7[VAR8];
        VAR6->VAR7[VAR8] = VAR1 % VAR12;
        VAR1 /= VAR4;
        if (VAR1 > (VAR13)VAR14 || VAR1 < (VAR13)VAR3)
        {
            VAR9 = 1;
            VAR10 = 1;
        }
        else
        {
            VAR9 = 0;
        }
        VAR5 = VAR1;
    }
}