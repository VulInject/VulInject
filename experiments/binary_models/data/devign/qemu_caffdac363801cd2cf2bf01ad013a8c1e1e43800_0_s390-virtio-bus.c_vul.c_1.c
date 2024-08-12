static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(&VAR4->VAR6);
    FUN4(VAR6, &(VAR4->VAR7));
    FUN5(VAR6, FUN6(&VAR2->VAR8));
    if (FUN7(VAR6) < 0)
    {
        return -1;
    }
    return FUN8(VAR2, FUN9(VAR6));
}