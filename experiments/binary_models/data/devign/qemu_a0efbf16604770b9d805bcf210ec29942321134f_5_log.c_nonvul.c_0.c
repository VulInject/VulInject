bool FUN1(uint64_t VAR1)
{
    if (VAR2)
    {
        int VAR3 = 0;
        for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
        {
            VAR5 *VAR6 = &FUN2(VAR2, VAR5, VAR3);
            if (FUN3(VAR6, VAR1))
            {
                return true;
            }
        }
        return false;
    }
    else
    {
        return true;
    }
}