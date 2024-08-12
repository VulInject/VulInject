void FUN1(VAR1)(VAR2 *VAR3, uint64_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    uint64_t VAR7 = 4 << VAR6->VAR8;
    uint64_t VAR9 = VAR4 & ~(VAR7 - 1);
    {
        int VAR10 = FUN3(VAR7, VAR11);
        void *VAR12[VAR10];
        int try, VAR13;
        unsigned VAR14 = FUN4(VAR3, false);
        TCGMemOpIdx VAR15 = FUN5(VAR16, VAR14);
        for (try = 0; try < 2; try++)
        {
            for (VAR13 = 0; VAR13 < VAR10; VAR13++)
            {
                VAR12[VAR13] = FUN6(VAR3, VAR9 + VAR11 * VAR13, 1, VAR14);
                if (!VAR12[VAR13])
                {
                    break;
                }
            }
            if (VAR13 == VAR10)
            {
                for (VAR13 = 0; VAR13 < VAR10 - 1; VAR13++)
                {
                    memset(VAR12[VAR13], 0, VAR11);
                }
                memset(VAR12[VAR13], 0, VAR7 - (VAR13 * VAR11));
                return;
            }
            FUN7(VAR3, VAR4, 0, VAR15, FUN8());
            for (VAR13 = 0; VAR13 < VAR10; VAR13++)
            {
                uint64_t VAR17 = VAR9 + VAR11 * VAR13;
                if (VAR17 != (VAR4 & VAR18))
                {
                    FUN7(VAR3, VAR17, 0, VAR15, FUN8());
                }
            }
        }
        for (VAR13 = 0; VAR13 < VAR7; VAR13++)
        {
            FUN7(VAR3, VAR9 + VAR13, 0, VAR15, FUN8());
        }
    }
    memset(FUN9(VAR9), 0, VAR7);
}