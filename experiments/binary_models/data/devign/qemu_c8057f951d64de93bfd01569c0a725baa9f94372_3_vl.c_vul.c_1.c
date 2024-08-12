static VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3, *VAR4 = NULL;
    if (VAR2)
    {
        VAR4 = FUN2(VAR2);
    }
    if (VAR4)
    {
        return VAR4;
    }
    FUN3("");
    for (VAR3 = VAR5; VAR3 != NULL; VAR3 = VAR3->VAR6)
    {
        if (VAR3->VAR7)
        {
            FUN3("", VAR3->VAR7, VAR3->VAR8, VAR3->VAR2);
        }
        FUN3("", VAR3->VAR2, VAR3->VAR8, VAR3->VAR9 ? "" : "");
    }
    FUN4(!VAR2 || *VAR2 != '');
}