static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    unsigned VAR5 = 0;
    VAR6 *VAR7 = NULL;
    AddrRange VAR8;
    unsigned VAR9;
    FUN2(VAR4, &VAR2->VAR10)
    {
        for (VAR9 = 0; VAR9 < VAR4->VAR11->VAR5; ++VAR9)
        {
            VAR8 = FUN3(VAR4->VAR11->VAR7[VAR9].VAR12, FUN4(VAR4->VAR12.VAR13, FUN5(VAR4->VAR14)));
            if (FUN6(VAR4->VAR12, VAR8))
            {
                ++VAR5;
                VAR7 = FUN7(VAR7, VAR5 * sizeof(*VAR7));
                VAR7[VAR5 - 1] = VAR4->VAR11->VAR7[VAR9];
                VAR7[VAR5 - 1].VAR12 = VAR8;
            }
        }
    }
    FUN8(VAR2, VAR7, VAR5, VAR2->VAR7, VAR2->VAR5);
    FUN9(VAR2->VAR7);
    VAR2->VAR7 = VAR7;
    VAR2->VAR5 = VAR5;
}