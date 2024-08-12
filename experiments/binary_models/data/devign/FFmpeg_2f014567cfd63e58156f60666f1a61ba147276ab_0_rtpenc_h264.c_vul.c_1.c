static const VAR1 *FUN1(const VAR1 *VAR2, const VAR1 *VAR3, int VAR4)
{
    int VAR5 = 0;
    if (VAR3 - VAR2 < VAR4)
        return NULL;
    while (VAR4--)
        VAR5 = (VAR5 << 8) | *VAR2++;
    if (VAR2 + VAR5 > VAR3 || VAR5 < 0 || VAR2 + VAR5 < VAR2)
        return NULL;
    return VAR2 + VAR5;
}