void FUN1(VAR1 **VAR2)
{
    VAR1 *VAR3 = NULL;
    VAR4 *VAR5 = FUN2(sizeof(VAR4));
    *VAR5 = VAR6;
    FUN3(*VAR5, &VAR3);
    FUN4(VAR7, &VAR3);
    FUN5(VAR8, VAR5, &VAR3);
    if (VAR3)
    {
        FUN6(VAR2, VAR3);
        FUN7(VAR5);
    }
}