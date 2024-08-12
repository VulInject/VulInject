VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = NULL, **VAR5 = &VAR4;
    VAR6 *VAR7;
    VAR2 *VAR8 = NULL;
    for (VAR7 = FUN2(NULL); VAR7; VAR7 = FUN2(VAR7))
    {
        VAR1 *VAR9;
        if (!*FUN3(VAR7))
        {
            continue;
        }
        VAR9 = FUN4(sizeof(*VAR9));
        FUN5(VAR7, &VAR9->VAR10, &VAR8);
        if (VAR8)
        {
            FUN6(VAR3, VAR8);
            FUN7(VAR9);
            FUN8(VAR4);
            return NULL;
        }
        *VAR5 = VAR9;
        VAR5 = &VAR9->VAR11;
    }
    return VAR4;
}