static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    AddrRange VAR7;
    FUN2(VAR4, &VAR8.VAR9)
    {
        if (VAR4->VAR2 == VAR2)
        {
            FUN3(FUN4(VAR4->VAR10.VAR11), FUN4(VAR4->VAR10.VAR12));
            FUN5(VAR6, &VAR2->VAR13, VAR14)
            {
                VAR7 = FUN6(VAR6->VAR10, FUN7(VAR4->VAR10.VAR11, FUN8(VAR4->VAR15)));
                if (!FUN9(VAR7, VAR4->VAR10))
                {
                    continue;
                }
                VAR7 = FUN10(VAR7, VAR4->VAR10);
                FUN11(FUN4(VAR7.VAR11), FUN4(VAR7.VAR12));
            }
        }
    }
}