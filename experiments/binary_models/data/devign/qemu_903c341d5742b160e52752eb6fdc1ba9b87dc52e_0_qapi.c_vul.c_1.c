VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4 = NULL, **VAR5 = &VAR4;
    VAR6 *VAR7;
    VAR2 *VAR8 = NULL;
    for (VAR7 = FUN2(NULL); VAR7; VAR7 = FUN2(VAR7))
    {
        VAR1 *VAR9 = FUN3(sizeof(*VAR9));
        FUN4(VAR7, &VAR9->VAR10, &VAR8);
        if (VAR8)
        {
            FUN5(VAR3, VAR8);
            goto VAR11;
        }
        *VAR5 = VAR9;
        VAR5 = &VAR9->VAR12;
    }
    return VAR4;
VAR11:
    FUN6(VAR4);
    return NULL;
}