static void FUN1(VAR1 *VAR2, unsigned int VAR3, bool VAR4)
{
    bool VAR5 = FUN2(&VAR2->VAR6, VAR4);
    if (VAR5 || !FUN3(&VAR2->VAR7[VAR4]))
    {
        FUN4(&VAR2->VAR7[VAR4]);
    }
    FUN5(&VAR2->VAR6, VAR4, VAR3);
    if (FUN2(&VAR2->VAR6, VAR4))
    {
        return;
    }
    FUN6(&VAR2->VAR7[VAR4]);
}