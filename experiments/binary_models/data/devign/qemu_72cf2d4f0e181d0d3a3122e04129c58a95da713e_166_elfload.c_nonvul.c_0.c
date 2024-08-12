static void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    while (!FUN2(&VAR2->VAR5))
    {
        VAR4 = FUN3(&VAR2->VAR5);
        FUN4(&VAR2->VAR5, VAR4, VAR6);
        FUN5(VAR4);
    }
    FUN5(VAR2->VAR7);
    FUN5(VAR2->VAR8);
    FUN5(VAR2->VAR9);
}