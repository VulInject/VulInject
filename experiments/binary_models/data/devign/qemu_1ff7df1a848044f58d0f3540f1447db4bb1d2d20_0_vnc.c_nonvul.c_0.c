void FUN1(VAR1 *VAR2)
{
    if (VAR3 == NULL || VAR3->VAR4 == NULL)
    {
        FUN2(VAR2, "");
    }
    else
    {
        char *VAR5 = FUN3("", VAR3->VAR6);
        if (!VAR5)
            return;
        FUN2(VAR2, "");
        FUN2(VAR2, "", VAR5);
        free(VAR5);
        FUN2(VAR2, "", FUN4(VAR3));
        if (VAR3->VAR7)
        {
            VAR8 *VAR9 = VAR3->VAR7;
            while (VAR9)
            {
                FUN5(VAR2, VAR9);
                VAR9 = VAR9->VAR10;
            }
        }
        else
        {
            FUN2(VAR2, "");
        }
    }
}