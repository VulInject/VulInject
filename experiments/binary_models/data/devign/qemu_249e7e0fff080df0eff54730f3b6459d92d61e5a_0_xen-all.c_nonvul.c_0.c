static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    if (VAR2->VAR4 == VAR5)
    {
        if (!VAR2->VAR6)
        {
            VAR2->VAR7 = FUN2(VAR2->VAR8, VAR2->VAR9);
        }
        else
        {
            uint32_t VAR10;
            for (VAR3 = 0; VAR3 < VAR2->VAR11; VAR3++)
            {
                VAR10 = FUN2(VAR2->VAR8, VAR2->VAR9);
                FUN3(VAR2->VAR7, VAR2, VAR3, &VAR10);
            }
        }
    }
    else if (VAR2->VAR4 == VAR12)
    {
        if (!VAR2->VAR6)
        {
            FUN4(VAR2->VAR8, VAR2->VAR9, VAR2->VAR7);
        }
        else
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR11; VAR3++)
            {
                uint32_t VAR10 = 0;
                FUN5(VAR2->VAR7, VAR2, VAR3, &VAR10);
                FUN4(VAR2->VAR8, VAR2->VAR9, VAR10);
            }
        }
    }
}