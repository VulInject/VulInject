VAR1 *FUN1(void)
{
    bool VAR2 = true;
    VAR1 *VAR3;
    VAR4 *VAR5 = NULL;
    while (VAR2 && (VAR5 = FUN2(VAR5, &VAR3)))
    {
        VAR6 *VAR7 = FUN3(VAR3);
        FUN4(VAR7);
        VAR2 = !FUN5(VAR3);
        FUN6(VAR7);
    }
    return VAR3;
}