static int FUN1(VAR1 *VAR2, int VAR3)
{
    if (FUN2(VAR2->VAR4) || (VAR2->VAR5 && !FUN3(VAR2->VAR4, VAR3, 0)))
    {
        FUN4(VAR2->VAR4, 1);
        return 0;
    }
    FUN4(VAR2->VAR4, 0);
    return 1;
}