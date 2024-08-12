static inline int FUN1(int VAR1, int VAR2)
{
    if (VAR1 < 0)
        return -VAR1;
    else if (VAR1 > VAR2)
        return 2 * VAR2 - VAR1;
    else
        return VAR1;
}