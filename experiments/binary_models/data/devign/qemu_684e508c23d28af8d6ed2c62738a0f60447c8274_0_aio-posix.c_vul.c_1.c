static bool FUN1(VAR1 *VAR2, bool VAR3)
{
    if (VAR3 && VAR2->VAR4 && VAR2->VAR5 == 0)
    {
        int64_t VAR6 = FUN2((VAR7)FUN3(VAR2), (VAR7)VAR2->VAR4);
        if (VAR6)
        {
            if (FUN4(VAR2, VAR6))
            {
                return true;
            }
        }
    }
    return false;
}