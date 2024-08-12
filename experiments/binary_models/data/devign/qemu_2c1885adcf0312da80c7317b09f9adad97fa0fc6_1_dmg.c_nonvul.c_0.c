static inline int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4)
{
    if (VAR3 >= VAR2->VAR5 || VAR2->VAR6[VAR3] > VAR4 || VAR2->VAR6[VAR3] + VAR2->VAR7[VAR3] <= VAR4)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}