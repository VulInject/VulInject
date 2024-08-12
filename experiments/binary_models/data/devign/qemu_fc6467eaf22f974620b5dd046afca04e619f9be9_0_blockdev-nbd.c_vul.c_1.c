void FUN1(VAR1 **VAR2)
{
    while (!FUN2(&VAR3))
    {
        VAR4 *VAR5 = FUN3(&VAR3);
        FUN4(&VAR5->VAR6, FUN5(VAR5->VAR7));
    }
    FUN6(VAR8, NULL, NULL, NULL, NULL);
    close(VAR8);
    VAR8 = -1;
}