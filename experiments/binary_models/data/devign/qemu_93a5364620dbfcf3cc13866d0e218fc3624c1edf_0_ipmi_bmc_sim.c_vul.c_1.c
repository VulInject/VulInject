static int FUN1(VAR1 *VAR2, unsigned int VAR3, const VAR4 *VAR5)
{
    if ((VAR3 & 1) || (VAR3 > VAR6) || (VAR2->VAR7[VAR3 / 2]))
    {
        return -1;
    }
    VAR2->VAR7[VAR3 / 2] = VAR5;
    return 0;
}