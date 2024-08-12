static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    if (VAR3->VAR5 != VAR6 && VAR3->VAR7 != VAR8 && VAR4 != VAR8)
    {
        if (VAR3->VAR5 == VAR9 && VAR4 < VAR3->VAR7)
            return VAR4 + (1ULL << VAR3->VAR10);
        else if (VAR3->VAR5 == VAR11 && VAR4 >= VAR3->VAR7)
            return VAR4 - (1ULL << VAR3->VAR10);
    }
    return VAR4;
}