static bool FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    uint64_t VAR5;
    FUN2(VAR2->VAR6, &VAR5);
    if (VAR3 > VAR5 || VAR4 > VAR5 - VAR3)
    {
        return false;
    }
    return true;
}