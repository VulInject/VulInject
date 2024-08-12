FUN1(const char *VAR1)
{
    VAR2 *VAR3 = NULL;
    VAR4 *VAR5;
    FUN2();
    for (VAR5 = FUN3(VAR6); VAR5; VAR5 = FUN4(VAR5))
    {
        VAR2 *VAR7 = FUN5(VAR5);
        if (strcmp(VAR7->VAR1, VAR1) == 0)
        {
            VAR3 = VAR7;
            break;
        }
        FUN6(VAR7);
    }
    FUN7();
    return VAR3;
}