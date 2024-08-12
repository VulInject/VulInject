void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    VAR3 *VAR7 = NULL;
    FUN2(VAR2, &VAR7);
    if (VAR7)
    {
        FUN3(VAR4, VAR7);
        return;
    }
    VAR2->VAR8++;
    FUN4(VAR6);
}