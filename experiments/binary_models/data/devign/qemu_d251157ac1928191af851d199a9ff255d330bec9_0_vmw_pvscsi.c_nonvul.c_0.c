FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = FUN2(VAR2, VAR4);
    uint32_t VAR5 = VAR6 * VAR7;
    if (VAR3 != VAR2->VAR8 && VAR3 - VAR2->VAR8 < VAR5)
    {
        uint32_t VAR9 = VAR2->VAR8++ & VAR2->VAR10;
        uint32_t VAR11 = VAR9 / VAR7;
        uint32_t VAR12 = VAR9 % VAR7;
        return VAR2->VAR13[VAR11] + VAR12 * sizeof(VAR14);
    }
    else
    {
        return 0;
    }
}