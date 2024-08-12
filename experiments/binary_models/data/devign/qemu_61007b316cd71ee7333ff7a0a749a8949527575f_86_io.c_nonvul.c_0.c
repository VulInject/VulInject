static bool FUN1(VAR1 *VAR2, int64_t VAR3, unsigned int VAR4)
{
    if (VAR3 >= VAR2->VAR5 + VAR2->VAR6)
    {
        return false;
    }
    if (VAR2->VAR5 >= VAR3 + VAR4)
    {
        return false;
    }
    return true;
}