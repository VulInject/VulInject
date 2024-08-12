FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5;
    VAR3 = FUN2();
    if (VAR3 == NULL)
    {
        return NULL;
    }
    for (VAR5 = FUN3(VAR2); VAR5; VAR5 = FUN4(VAR5))
    {
        VAR6 *VAR7 = FUN5(VAR5);
        VAR4 *VAR8 = FUN6(VAR7);
        FUN7(VAR7);
        FUN8(VAR3, VAR8);
    }
    return VAR3;
}