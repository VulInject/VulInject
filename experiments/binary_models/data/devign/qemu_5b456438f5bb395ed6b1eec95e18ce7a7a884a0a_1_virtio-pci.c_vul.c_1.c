static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(&VAR4->VAR6);
    FUN4(VAR6, FUN5(&VAR2->VAR7));
    if (FUN6(VAR6) < 0)
    {
        return -1;
    }
    FUN7(FUN8(VAR4), FUN8(VAR4->VAR6.VAR8.VAR9), "", NULL);
    return 0;
}