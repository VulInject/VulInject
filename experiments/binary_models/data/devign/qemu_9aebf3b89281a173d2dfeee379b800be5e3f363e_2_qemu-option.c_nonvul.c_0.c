VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR1 *VAR8 = NULL;
    if (VAR4)
    {
        if (!FUN2(VAR4))
        {
            FUN3(VAR7, VAR9, "", "");
            FUN4("");
            return NULL;
        }
        VAR8 = FUN5(VAR3, VAR4);
        if (VAR8 != NULL)
        {
            if (VAR5 && !VAR3->VAR10)
            {
                FUN6(VAR7, "", VAR4, VAR3->VAR11);
                return NULL;
            }
            else
            {
                return VAR8;
            }
        }
    }
    else if (VAR3->VAR10)
    {
        VAR8 = FUN5(VAR3, NULL);
        if (VAR8)
        {
            return VAR8;
        }
    }
    VAR8 = FUN7(sizeof(*VAR8));
    VAR8->VAR4 = FUN8(VAR4);
    VAR8->VAR3 = VAR3;
    FUN9(&VAR8->VAR12);
    FUN10(&VAR8->VAR13);
    FUN11(&VAR3->VAR13, VAR8, VAR14);
    return VAR8;
}