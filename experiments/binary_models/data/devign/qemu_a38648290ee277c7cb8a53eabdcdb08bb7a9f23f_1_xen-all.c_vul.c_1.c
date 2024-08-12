static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR4 = VAR2->VAR5 ? -1 : 1;
    if (VAR2->VAR6 == VAR7)
    {
        if (!VAR2->VAR8)
        {
            VAR2->VAR9 = FUN2(VAR2->VAR10, VAR2->VAR11);
        }
        else
        {
            uint32_t VAR12;
            for (VAR3 = 0; VAR3 < VAR2->VAR13; VAR3++)
            {
                VAR12 = FUN2(VAR2->VAR10, VAR2->VAR11);
                FUN3(VAR2->VAR9 + (VAR4 * VAR3 * (VAR14)VAR2->VAR11), (VAR15 *)&VAR12, VAR2->VAR11);
            }
        }
    }
    else if (VAR2->VAR6 == VAR16)
    {
        if (!VAR2->VAR8)
        {
            FUN4(VAR2->VAR10, VAR2->VAR11, VAR2->VAR9);
        }
        else
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR13; VAR3++)
            {
                uint32_t VAR12 = 0;
                FUN5(VAR2->VAR9 + (VAR4 * VAR3 * (VAR14)VAR2->VAR11), (VAR15 *)&VAR12, VAR2->VAR11);
                FUN4(VAR2->VAR10, VAR2->VAR11, VAR12);
            }
        }
    }
}