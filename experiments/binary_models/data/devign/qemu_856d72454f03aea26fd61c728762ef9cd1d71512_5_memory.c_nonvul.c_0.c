static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    unsigned VAR7 = 0;
    VAR8 *VAR9 = NULL;
    AddrRange VAR10;
    unsigned VAR11;
    VAR4 = FUN2(VAR2);
    FUN3(VAR6, VAR4)
    {
        for (VAR11 = 0; VAR11 < VAR6->VAR12->VAR7; ++VAR11)
        {
            VAR10 = FUN4(VAR6->VAR12->VAR9[VAR11].VAR13, FUN5(VAR6->VAR13.VAR14, FUN6(VAR6->VAR15)));
            if (FUN7(VAR6->VAR13, VAR10))
            {
                ++VAR7;
                VAR9 = FUN8(VAR9, VAR7 * sizeof(*VAR9));
                VAR9[VAR7 - 1] = VAR6->VAR12->VAR9[VAR11];
                VAR9[VAR7 - 1].VAR13 = VAR10;
            }
        }
    }
    FUN9(VAR2, VAR9, VAR7, VAR2->VAR9, VAR2->VAR7);
    FUN10(VAR2->VAR9);
    VAR2->VAR9 = VAR9;
    VAR2->VAR7 = VAR7;
    FUN11(VAR4);
}