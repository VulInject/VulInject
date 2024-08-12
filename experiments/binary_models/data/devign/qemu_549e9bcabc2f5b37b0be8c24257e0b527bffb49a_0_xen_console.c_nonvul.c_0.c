static void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    if (VAR4->VAR5)
    {
        FUN3(VAR4->VAR5, NULL, NULL, NULL, NULL);
        FUN4(VAR4->VAR5);
    }
    FUN5(&VAR4->VAR2);
    if (VAR4->VAR6)
    {
        if (!VAR2->VAR7)
        {
            FUN6(VAR4->VAR6, VAR8);
        }
        else
        {
            FUN7(VAR2->VAR9, VAR4->VAR6, 1);
        }
        VAR4->VAR6 = NULL;
    }
}