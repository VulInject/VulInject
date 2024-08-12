static VAR1 *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8, *VAR9;
    VAR10 *VAR11;
    VAR1 *VAR12 = NULL;
    VAR4 = FUN2();
    VAR8 = FUN3(VAR4);
    FUN4(VAR8, NULL, &VAR2, &VAR13);
    VAR11 = FUN5(VAR4);
    FUN6(VAR4);
    if (!VAR11)
    {
        return NULL;
    }
    VAR6 = FUN7(VAR11, true);
    VAR9 = FUN8(VAR6);
    FUN4(VAR9, NULL, &VAR12, &VAR13);
    FUN9(VAR6);
    FUN10(VAR11);
    return VAR12;
}