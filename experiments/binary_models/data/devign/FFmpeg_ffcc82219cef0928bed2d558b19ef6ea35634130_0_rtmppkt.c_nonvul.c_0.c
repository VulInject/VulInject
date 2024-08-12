int FUN1(const VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4, VAR1 *VAR5, int VAR6)
{
    GetByteContext VAR7;
    if (VAR2 >= VAR3)
        return -1;
    FUN2(&VAR7, VAR2, VAR3 - VAR2);
    return FUN3(&VAR7, VAR4, VAR5, VAR6);
}