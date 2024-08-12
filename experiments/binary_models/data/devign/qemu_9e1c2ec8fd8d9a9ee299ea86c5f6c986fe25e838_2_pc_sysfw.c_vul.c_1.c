void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR6 = (VAR5 *)FUN2(NULL, "");
    FUN3(FUN4(VAR6));
    if (VAR6->VAR7)
    {
        FUN5(VAR2);
        return;
    }
    VAR4 = FUN6(VAR8, 0, 0);
    if (VAR9 && FUN7())
    {
        if (VAR4 != NULL)
        {
            fprintf(VAR10, "");
            FUN8(1);
        }
        else
        {
            VAR6->VAR7 = 1;
            FUN5(VAR2);
            return;
        }
    }
    if (VAR4 == NULL)
    {
        FUN9();
        VAR4 = FUN6(VAR8, 0, 0);
    }
    if (VAR4 != NULL)
    {
        FUN10(VAR2, VAR4);
    }
    else
    {
        fprintf(VAR10, "");
        FUN8(1);
    }
}