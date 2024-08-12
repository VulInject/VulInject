static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    if (!VAR2->VAR4)
    {
        if (VAR2->VAR5 == VAR6)
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
            {
                FUN2(VAR2->VAR8, VAR2, VAR3, &VAR2->VAR9);
            }
        }
        else if (VAR2->VAR5 == VAR10)
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
            {
                FUN3(VAR2->VAR8, VAR2, VAR3, &VAR2->VAR9);
            }
        }
    }
    else
    {
        uint64_t VAR11;
        if (VAR2->VAR5 == VAR6)
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
            {
                FUN2(VAR2->VAR8, VAR2, VAR3, &VAR11);
                FUN3(VAR2->VAR9, VAR2, VAR3, &VAR11);
            }
        }
        else if (VAR2->VAR5 == VAR10)
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
            {
                FUN2(VAR2->VAR9, VAR2, VAR3, &VAR11);
                FUN3(VAR2->VAR8, VAR2, VAR3, &VAR11);
            }
        }
    }
}