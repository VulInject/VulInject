static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    uint64_t VAR5;
    size_t VAR6;
    int VAR7;
    while (1)
    {
        FUN3(VAR4, VAR2, 0, VAR2->VAR8 + VAR2->VAR9.VAR10);
        if (VAR2->VAR11)
        {
            FUN4(VAR2->VAR11);
            FUN5(VAR2->VAR11);
            VAR2->VAR11 = NULL;
        }
        VAR2->VAR12 += VAR2->VAR9.VAR10;
        VAR2->VAR8 += VAR2->VAR9.VAR10;
        FUN6(&VAR2->VAR9);
        if (VAR2->VAR8 >= VAR2->VAR13)
        {
            FUN7(VAR2, 0);
            return;
        }
        VAR6 = VAR2->VAR13 - VAR2->VAR8;
        VAR7 = FUN8(VAR4, &VAR2->VAR14, VAR2->VAR8, &VAR6, &VAR5);
        if (VAR7 < 0)
        {
            FUN7(VAR2, VAR7);
            return;
        }
        if (VAR2->VAR15 & VAR16)
        {
            VAR7 = FUN9(VAR2, VAR7, VAR5, VAR6);
        }
        else
        {
            VAR7 = FUN10(VAR2, VAR7, VAR5, VAR6);
        }
        if (VAR7 < 0)
        {
            if (VAR7 != -VAR17)
            {
                FUN7(VAR2, VAR7);
            }
            return;
        }
    }
}