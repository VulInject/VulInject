int FUN1(void)
{
    VAR1 = FUN2();
    if (!VAR1)
    {
        FUN3(NULL, 0, "");
        return -1;
    }
    if (FUN4(FUN5(VAR1), VAR2, NULL, NULL) < 0)
    {
        goto VAR3;
    }
    if (VAR4 == VAR5)
    {
        goto VAR3;
    }
    return 0;
VAR3:
    FUN4(FUN5(VAR1), NULL, NULL, NULL);
    FUN6(VAR1);
    VAR1 = NULL;
    return -1;
}