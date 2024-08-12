static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5, *VAR6;
    test_data VAR7;
    memset(&VAR7, 0, sizeof(VAR7));
    VAR7.VAR8 = FUN2(VAR2);
    FUN3(VAR2, false);
    for (VAR3 = 0; VAR3 < VAR2->VAR8->VAR9; ++VAR3)
    {
        VAR10 *VAR11, *VAR12;
        VAR5 = &FUN4(VAR2->VAR8, VAR4, VAR3);
        VAR6 = &FUN4(VAR7.VAR8, VAR4, VAR3);
        FUN5(VAR2->VAR8, VAR5);
        VAR11 = FUN6(VAR5->VAR11);
        FUN5(VAR7.VAR8, VAR6);
        VAR12 = FUN6(VAR6->VAR11);
        FUN7(!FUN8(VAR11->VAR13, VAR12->VAR13));
        FUN9(VAR11, true);
        FUN9(VAR12, true);
    }
    FUN10(&VAR7);
}