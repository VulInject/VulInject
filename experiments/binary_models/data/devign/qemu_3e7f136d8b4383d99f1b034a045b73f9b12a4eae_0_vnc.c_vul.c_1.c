static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR5 *VAR6 = NULL;
    VAR4 = FUN2(sizeof(*VAR4));
    FUN3(VAR3->VAR7, FUN4(VAR4), &VAR6);
    VAR4->VAR8 = true;
    VAR4->VAR9 = FUN5(FUN6(VAR3));
    if (VAR6)
    {
        FUN7(VAR4);
        VAR4 = NULL;
        FUN8(VAR6);
    }
    return VAR4;
}