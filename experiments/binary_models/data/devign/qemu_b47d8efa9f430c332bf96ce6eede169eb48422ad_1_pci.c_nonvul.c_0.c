static void FUN1(VAR1 *VAR2)
{
    if (!FUN2(&VAR2->VAR3))
    {
        return;
    }
    FUN3(VAR2);
    FUN4(VAR2);
    FUN5(VAR2, VAR4);
    FUN6(VAR2->VAR5);
    close(VAR2->VAR5);
    FUN7(VAR2);
    if (FUN2(&VAR6))
    {
        FUN8(VAR7, NULL);
    }
}