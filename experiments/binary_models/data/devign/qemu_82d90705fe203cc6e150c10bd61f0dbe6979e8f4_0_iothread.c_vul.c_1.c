void FUN1(void)
{
    VAR1 *VAR2 = FUN2();
    VAR3 *VAR4;
    BdrvNextIterator VAR5;
    for (VAR4 = FUN3(&VAR5); VAR4; VAR4 = FUN4(&VAR5))
    {
        VAR6 *VAR7 = FUN5(VAR4);
        if (VAR7 == FUN6())
        {
            continue;
        }
        FUN7(VAR7);
        FUN8(VAR4, FUN6());
        FUN9(VAR7);
    }
    FUN10(VAR2, VAR8, NULL);
}