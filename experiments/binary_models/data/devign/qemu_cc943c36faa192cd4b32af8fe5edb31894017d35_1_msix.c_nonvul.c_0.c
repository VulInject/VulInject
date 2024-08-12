void FUN1(VAR1 *VAR2, unsigned VAR3)
{
    MSIMessage VAR4;
    if (VAR3 >= VAR2->VAR5 || !VAR2->VAR6[VAR3])
        return;
    if (FUN2(VAR2, VAR3))
    {
        FUN3(VAR2, VAR3);
        return;
    }
    VAR4 = FUN4(VAR2, VAR3);
    FUN5(&VAR2->VAR7, VAR4.VAR8, VAR4.VAR9);
}