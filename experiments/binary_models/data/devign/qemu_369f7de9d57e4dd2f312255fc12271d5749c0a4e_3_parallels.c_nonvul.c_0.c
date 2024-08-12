static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    uint32_t VAR5, VAR6;
    VAR5 = VAR4 / VAR3->VAR7;
    VAR6 = VAR4 % VAR3->VAR7;
    if ((VAR5 >= VAR3->VAR8) || (VAR3->VAR9[VAR5] == 0))
    {
        return -1;
    }
    return (VAR10)VAR3->VAR9[VAR5] * VAR3->VAR11 + VAR6;
}