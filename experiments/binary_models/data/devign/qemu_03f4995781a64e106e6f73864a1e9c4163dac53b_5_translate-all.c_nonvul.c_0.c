static int FUN1(struct VAR1 *VAR2, abi_ulong VAR3, int VAR4, void **VAR5)
{
    abi_ulong VAR6;
    int VAR7, VAR8;
    if (*VAR5 == NULL)
    {
        return FUN2(VAR2, VAR3, 0);
    }
    if (VAR4 == 0)
    {
        VAR9 *VAR10 = *VAR5;
        for (VAR7 = 0; VAR7 < VAR11; ++VAR7)
        {
            int VAR12 = VAR10[VAR7].VAR13;
            VAR6 = VAR3 | (VAR7 << VAR14);
            if (VAR12 != VAR2->VAR12)
            {
                VAR8 = FUN2(VAR2, VAR6, VAR12);
                if (VAR8 != 0)
                {
                    return VAR8;
                }
            }
        }
    }
    else
    {
        void **VAR15 = *VAR5;
        for (VAR7 = 0; VAR7 < VAR11; ++VAR7)
        {
            VAR6 = VAR3 | ((VAR16)VAR7 << (VAR14 + VAR17 * VAR4));
            VAR8 = FUN1(VAR2, VAR6, VAR4 - 1, VAR15 + VAR7);
            if (VAR8 != 0)
            {
                return VAR8;
            }
        }
    }
    return 0;
}