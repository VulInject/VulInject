void FUN1(VAR1 *VAR2)
{
    if (!FUN2(VAR2))
    {
        return;
    }
    if (VAR2->VAR3.VAR4)
    {
        VAR2->VAR5 = fopen(VAR2->VAR3.VAR4, "");
        if (!VAR2->VAR5)
        {
            VAR2->VAR5 = VAR6;
        }
        VAR2->VAR3.VAR4 = NULL;
    }
    FUN3(VAR2);
    FUN4("");
    if (VAR2->VAR3.VAR7)
    {
        if (!FUN5(VAR2->VAR3.VAR7))
        {
            FUN4("");
        }
        VAR2->VAR3.VAR7 = NULL;
    }
    FUN6(VAR2->VAR8);
    VAR2->VAR9 = false;
    if (!FUN7(VAR2->VAR10))
    {
        FUN4("", VAR2->VAR10);
    }
}