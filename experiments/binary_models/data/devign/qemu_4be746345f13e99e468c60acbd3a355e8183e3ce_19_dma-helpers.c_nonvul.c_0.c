static void FUN1(VAR1 *VAR2, int VAR3)
{
    FUN2(VAR2, VAR3, VAR2->VAR4.VAR5);
    FUN3(VAR2);
    if (VAR2->VAR4.VAR5)
    {
        VAR2->VAR4.FUN4(VAR2->VAR4.VAR6, VAR3);
    }
    FUN5(&VAR2->VAR7);
    if (VAR2->VAR8)
    {
        FUN6(VAR2->VAR8);
        VAR2->VAR8 = NULL;
    }
    FUN7(VAR2);
}