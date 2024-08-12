static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    VAR4 = FUN2(VAR3->VAR5, VAR3->VAR6, sizeof(VAR3->VAR6), 0);
    if (VAR4 < 0)
        return;
    if (VAR4 == 0)
    {
        FUN3(VAR3, false);
        FUN4(VAR3, false);
        return;
    }
    if (FUN5(&VAR3->VAR7, VAR3->VAR6, VAR4, VAR8) == 0)
    {
        FUN3(VAR3, false);
    }
}