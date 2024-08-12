FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2();
    VAR5 *VAR6;
    if (VAR4 == NULL)
    {
        return NULL;
    }
    for (VAR6 = FUN3(VAR4); VAR6; VAR6 = FUN4(VAR6))
    {
        VAR7 *VAR8 = FUN5(VAR6);
        VAR9 *VAR10 = FUN6(VAR8);
        if (VAR10->VAR2 == VAR2)
        {
            FUN7(VAR4);
            return VAR8;
        }
        FUN8(VAR8);
    }
    FUN7(VAR4);
    return NULL;
}