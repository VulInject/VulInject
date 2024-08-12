static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8)
{
    if (VAR7 == 1)
    {
        VAR3 *VAR9 = VAR4 + 2 * 16;
        int VAR10;
        FUN2(void, VAR3 *VAR11, const VAR3 *VAR9, ptrdiff_t VAR12);
        for (VAR10 = 0; VAR10 < 15; VAR10++)
        {
            if (FUN3(VAR2->VAR13[VAR10], "", VAR14[VAR6][VAR10]))
            {
                FUN4();
                FUN5(VAR15, VAR9, 12 * VAR16);
                FUN6(VAR17, VAR9, 12 * VAR16);
                if (memcmp(VAR4, VAR5, VAR18))
                    FUN7();
                FUN8(VAR17, VAR9, 12 * VAR16);
            }
        }
    }
}