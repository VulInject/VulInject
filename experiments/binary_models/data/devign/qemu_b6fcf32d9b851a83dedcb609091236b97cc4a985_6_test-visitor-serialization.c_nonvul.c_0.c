static void FUN1(gconstpointer VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    const VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = NULL, *VAR8, *VAR9, *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    void *VAR13;
    int VAR14 = 0;
    for (VAR14 = 0; VAR14 < 8; VAR14++)
    {
        VAR8 = FUN2(VAR6, 1);
        VAR8->VAR15 = FUN3();
        VAR8->VAR16 = VAR7;
        VAR7 = VAR8;
    }
    VAR5->FUN4(VAR7, &VAR13, VAR17, &VAR12);
    VAR5->FUN5((void **)&VAR10, VAR13, VAR17, &VAR12);
    FUN6(VAR12 == NULL);
    VAR8 = VAR7;
    VAR9 = VAR10;
    while (VAR10)
    {
        FUN6(VAR7);
        FUN7(VAR7->VAR15, VAR10->VAR15);
        VAR7 = VAR7->VAR16;
        VAR10 = VAR10->VAR16;
    }
    FUN8(VAR8);
    FUN8(VAR9);
    VAR5->FUN9(VAR13);
    FUN10(VAR3);
}