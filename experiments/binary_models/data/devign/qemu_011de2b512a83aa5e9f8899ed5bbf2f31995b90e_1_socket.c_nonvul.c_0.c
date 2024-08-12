static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    if (VAR4->VAR5 != -1)
    {
        FUN3(VAR4->VAR5, NULL, NULL, NULL);
        close(VAR4->VAR5);
        VAR4->VAR5 = -1;
    }
    if (VAR4->VAR6 != -1)
    {
        FUN3(VAR4->VAR6, NULL, NULL, NULL);
        FUN4(VAR4->VAR6);
        VAR4->VAR6 = -1;
    }
}