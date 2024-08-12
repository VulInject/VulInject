static void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    while ((VAR4 = FUN2(VAR2)) != NULL)
    {
        FUN3(&VAR2->VAR5, VAR4, VAR6);
        FUN4(VAR4);
    }
    FUN4(VAR2);
}