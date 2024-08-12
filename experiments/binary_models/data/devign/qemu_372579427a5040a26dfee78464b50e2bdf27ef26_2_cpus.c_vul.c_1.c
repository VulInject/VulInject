static void FUN1(void)
{
    if (!VAR1 && FUN2(VAR2))
    {
        VAR1 = FUN3(VAR3, VAR4, NULL);
        FUN4(VAR1, FUN5());
    }
}