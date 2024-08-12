static VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4)
{
    int64_t VAR5 = FUN2(VAR6);
    if (VAR3->VAR7 < VAR5)
    {
        VAR3->VAR7 = VAR5 + VAR8;
        VAR3->VAR9 = 0;
    }
    if (VAR3->VAR9 == 0 || VAR3->VAR9 + VAR4 <= VAR3->VAR10)
    {
        VAR3->VAR9 += VAR4;
        return 0;
    }
    else
    {
        VAR3->VAR9 = VAR4;
        return VAR3->VAR7 - VAR5;
    }
}