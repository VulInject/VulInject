bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR4 = FUN2(&VAR2->VAR5);
    if (!VAR4)
    {
        return false;
    }
    FUN3(&VAR2->VAR5, VAR6);
    FUN4(VAR4, NULL);
    return true;
}