static bool FUN1(struct VAR1 *VAR2, int32_t VAR3, int32_t VAR4)
{
    if (VAR3 < 0)
    {
        int64_t VAR5 = VAR4 + ((VAR6)VAR2->VAR7 - 1) * VAR3;
        int32_t VAR8 = VAR4 + VAR2->VAR9;
        if (VAR5 < 0 || VAR8 > VAR2->VAR10.VAR11)
        {
            return true;
        }
    }
    else
    {
        int64_t VAR8 = VAR4 + ((VAR6)VAR2->VAR7 - 1) * VAR3 + VAR2->VAR9;
        if (VAR8 > VAR2->VAR10.VAR11)
        {
            return true;
        }
    }
    return false;
}