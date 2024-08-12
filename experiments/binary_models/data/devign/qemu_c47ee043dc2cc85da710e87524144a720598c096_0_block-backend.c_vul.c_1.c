void FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    char *VAR6;
    assert(!VAR2->VAR7);
    if (VAR5)
    {
        FUN3(VAR5, VAR3);
        VAR6 = FUN4(VAR2);
        FUN5(FUN6(VAR2), VAR6, VAR3, &VAR8);
        FUN7(VAR6);
    }
}