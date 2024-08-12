static void FUN1(void *VAR1, int VAR2)
{
    if (VAR2 == VAR3)
    {
        VAR4 *VAR5;
        VAR6 *VAR7 = VAR1;
        FUN2(&VAR7->VAR8->VAR9, VAR10);
        VAR5 = FUN3();
        assert(VAR5 != NULL);
        FUN4(VAR7, VAR5);
        FUN5(VAR5);
    }
}