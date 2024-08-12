void FUN1(void)
{
    VAR1 *VAR2;
    FUN2(VAR2, &VAR3, VAR4)
    {
        VAR5 *VAR6 = FUN3(VAR2);
        FUN4(VAR6);
        FUN5(VAR2);
        FUN6(VAR6);
    }
}