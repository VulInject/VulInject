static bool FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    if (VAR2->VAR4 != VAR3)
    {
        VAR2->VAR4 = VAR3;
        if (FUN2(VAR2))
        {
            FUN3(VAR2);
        }
        return true;
    }
    return false;