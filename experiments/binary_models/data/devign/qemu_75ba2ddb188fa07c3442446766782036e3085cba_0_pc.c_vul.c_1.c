static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7 = -1;
    VAR8 *VAR9;
    VAR5 *VAR10 = NULL;
    VAR11 *VAR12 = FUN2(VAR4);
    VAR13 *VAR14 = FUN3(VAR2);
    FUN4(FUN5(VAR14), VAR12->VAR15, &VAR7);
    assert(VAR7 != -1);
    if (VAR7 == 0)
    {
        FUN6(&VAR10, "");
        VAR9 = FUN7(VAR14->VAR16);
        VAR9->FUN8(FUN9(VAR14->VAR16), VAR4, &VAR10);
        if (VAR10)
        {
        VAR17:
            FUN10(VAR6, VAR10)