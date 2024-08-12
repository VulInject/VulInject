static void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR3;
    int VAR4 = 0;
    while (!FUN2(&VAR2->VAR5))
    {
        VAR3 = FUN3(&VAR2->VAR5);
        VAR4 += FUN4(VAR3);
        FUN5(VAR3);
    }
    if (VAR4)
        FUN6(&VAR2->VAR6);
}