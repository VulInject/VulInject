static inline int FUN1(int VAR1, int VAR2)
{
    if (VAR2 > 0)
        return VAR1 << VAR2;
    return VAR1 >> -VAR2;
}