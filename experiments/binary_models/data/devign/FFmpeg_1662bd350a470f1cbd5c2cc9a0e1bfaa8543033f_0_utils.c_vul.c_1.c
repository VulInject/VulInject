static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    if (VAR3->VAR5 != VAR6 && VAR3->VAR7 < 64 && VAR3->VAR8 != VAR9 && VAR4 != VAR9)
    {
        if (VAR3->VAR5 == VAR10 && VAR4 < VAR3->VAR8)
            return VAR4 + (1LL << VAR3->VAR7);
        else if (VAR3->VAR5 == VAR11 && VAR4 >= VAR3->VAR8)
            return VAR4 - (1LL << VAR3->VAR7);
    }
    return VAR4;
}