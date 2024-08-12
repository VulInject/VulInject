static int FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = !FUN2(&VAR2->VAR4);
    if (VAR2->VAR3)
    {
        VAR2->VAR5 = FUN2(&VAR2->VAR4);
        VAR2->VAR6 = FUN2(&VAR2->VAR4);
        VAR2->VAR7 = FUN3(&VAR2->VAR4, 16);
        FUN4(&VAR2->VAR4);
        FUN5(&VAR2->VAR4);
    }
    return 0;
}