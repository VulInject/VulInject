void FUN1(VAR1 *VAR2, bool VAR3, uint64_t VAR4)
{
    double VAR5 = 1.0;
    if (VAR2->VAR6.VAR7 && VAR4 > VAR2->VAR6.VAR7)
    {
        VAR5 = (double)VAR4 / VAR2->VAR6.VAR7;
    }
    VAR2->VAR6.VAR8[VAR9].VAR10 += VAR4;
    VAR2->VAR6.VAR8[VAR11].VAR10 += VAR5;
    if (VAR3)
    {
        VAR2->VAR6.VAR8[VAR12].VAR10 += VAR4;
        VAR2->VAR6.VAR8[VAR13].VAR10 += VAR5;
    }
    else
    {
        VAR2->VAR6.VAR8[VAR14].VAR10 += VAR4;
        VAR2->VAR6.VAR8[VAR15].VAR10 += VAR5;
    }
}