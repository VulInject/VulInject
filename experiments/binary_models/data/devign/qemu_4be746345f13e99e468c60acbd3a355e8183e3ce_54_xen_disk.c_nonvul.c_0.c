static void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    if (VAR4->VAR5)
    {
        FUN3(VAR4->VAR5, VAR4);
        FUN4(VAR4->VAR5);
        VAR4->VAR5 = NULL;
    }
    FUN5(&VAR4->VAR2);
    if (VAR4->VAR6)
    {
        FUN6(VAR4->VAR2.VAR7, VAR4->VAR6, 1);
        VAR4->VAR8--;
        VAR4->VAR6 = NULL;
    }
}