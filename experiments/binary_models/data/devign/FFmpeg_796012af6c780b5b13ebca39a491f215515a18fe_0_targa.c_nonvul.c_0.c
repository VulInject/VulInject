static VAR1 *FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int *VAR5, int VAR6, int VAR7)
{
    *VAR5 += VAR7;
    if (*VAR5 < VAR6)
    {
        return VAR3 + VAR7 * VAR4;
    }
    else
    {
        *VAR5 = (*VAR5 + 1) & (VAR7 - 1);
        if (*VAR5 && *VAR5 < VAR6)
        {
            return VAR2 + *VAR5 * VAR4;
        }
        else
        {
            return NULL;
        }
    }
}