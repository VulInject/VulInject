static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR5 *VAR6)
{
    VAR7 *VAR8 = NULL;
    VAR4->VAR9.FUN2(VAR2, VAR6, &VAR8);
    if (FUN3(VAR2))
    {
        FUN4(VAR2, VAR8);
    }
    else
    {
        if (VAR8)
            VAR4->FUN5(VAR2, VAR8);
    }
    FUN6(VAR8);
}