static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = &VAR6[VAR3->VAR7];
    FUN2(VAR3->VAR7, VAR3->VAR8);
    FUN3(&VAR9);
    if (VAR3->VAR8)
    {
        int64_t VAR10 = FUN4(VAR11);
        FUN5(VAR3->VAR7, VAR3->VAR8);
        FUN6(VAR3->VAR8);
        VAR3->VAR8 = NULL;
        FUN7(VAR3->VAR12, VAR10 + VAR5->VAR13);
    }
    else
    {
        FUN8(VAR14, VAR3);
        FUN6(VAR3->VAR15);
        FUN9(VAR3->VAR12);
        FUN10(VAR3);
    }
    FUN11(&VAR9);
}