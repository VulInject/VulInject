static bool FUN1(VAR1 *VAR2, size_t VAR3)
{
    int VAR4;
    if (VAR3 <= VAR2->VAR5)
    {
        return VAR2->VAR6[VAR7] != VAR2->VAR6[VAR8];
    }
    if (VAR2->VAR6[VAR7] < VAR2->VAR6[VAR8])
    {
        VAR4 = VAR2->VAR6[VAR8] - VAR2->VAR6[VAR7];
    }
    else if (VAR2->VAR6[VAR7] > VAR2->VAR6[VAR8])
    {
        VAR4 = VAR2->VAR6[VAR9] / sizeof(struct VAR10) + VAR2->VAR6[VAR8] - VAR2->VAR6[VAR7];
    }
    else
    {
        return false;
    }
    return VAR3 <= VAR4 * VAR2->VAR5;
}