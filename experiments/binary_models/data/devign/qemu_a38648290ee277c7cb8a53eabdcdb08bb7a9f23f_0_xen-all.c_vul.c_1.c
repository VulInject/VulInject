static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR4 = VAR2->VAR5 ? -1 : 1;
    if (!VAR2->VAR6)
    {
        if (VAR2->VAR7 == VAR8)
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
            {
                FUN2(VAR2->VAR10 + (VAR4 * VAR3 * (VAR11)VAR2->VAR12), (VAR13 *)&VAR2->VAR14, VAR2->VAR12);
            }
        }
        else if (VAR2->VAR7 == VAR15)
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
            {
                FUN3(VAR2->VAR10 + (VAR4 * VAR3 * (VAR11)VAR2->VAR12), (VAR13 *)&VAR2->VAR14, VAR2->VAR12);
            }
        }
    }
    else
    {
        uint64_t VAR16;
        if (VAR2->VAR7 == VAR8)
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
            {
                FUN2(VAR2->VAR10 + (VAR4 * VAR3 * (VAR11)VAR2->VAR12), (VAR13 *)&VAR16, VAR2->VAR12);
                FUN3(VAR2->VAR14 + (VAR4 * VAR3 * (VAR11)VAR2->VAR12), (VAR13 *)&VAR16, VAR2->VAR12);
            }
        }
        else if (VAR2->VAR7 == VAR15)
        {
            for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
            {
                FUN2(VAR2->VAR14 + (VAR4 * VAR3 * (VAR11)VAR2->VAR12), (VAR13 *)&VAR16, VAR2->VAR12);
                FUN3(VAR2->VAR10 + (VAR4 * VAR3 * (VAR11)VAR2->VAR12), (VAR13 *)&VAR16, VAR2->VAR12);
            }
        }
    }
}