void FUN1(void)
{
    VAR1 *VAR2;
    BdrvNextIterator VAR3;
    VAR4 *VAR5 = NULL;
    for (VAR2 = FUN2(&VAR3); VAR2; VAR2 = FUN3(&VAR3))
    {
        VAR6 *VAR7 = FUN4(VAR2);
        FUN5(VAR7);
        FUN6(VAR7);
        FUN7(VAR2);
        FUN8(VAR7);
    }
    while ((VAR5 = FUN9(VAR5)))
    {
        VAR6 *VAR7 = FUN10(VAR5->VAR8);
        FUN5(VAR7);
        FUN11(VAR5);
        FUN8(VAR7);
    }
}