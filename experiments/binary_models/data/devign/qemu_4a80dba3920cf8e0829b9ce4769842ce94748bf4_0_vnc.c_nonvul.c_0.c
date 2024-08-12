void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    if (VAR5 == NULL || VAR5->VAR6 == NULL)
    {
        *VAR4 = FUN2("");
    }
    else
    {
        VAR7 *VAR8;
        VAR8 = FUN3();
        if (VAR5->VAR9)
        {
            VAR10 *VAR11 = VAR5->VAR9;
            while (VAR11)
            {
                if (VAR11->VAR12)
                {
                    FUN4(VAR11->VAR12);
                    FUN5(VAR8, VAR11->VAR12);
                }
                VAR11 = VAR11->VAR13;
            }
        }
        *VAR4 = FUN2("", FUN6(VAR8));
        assert(*VAR4 != NULL);
        if (FUN7(FUN8(*VAR4)) < 0)
        {
            FUN9(*VAR4);
            *VAR4 = NULL;
        }
    }
}