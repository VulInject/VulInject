bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    FUN2(VAR2);
    if (VAR2->VAR5)
    {
        FUN3(VAR2, NULL, VAR6, 0);
        FUN4(VAR2);
        return true;
    }
    FUN4(VAR2);
    return false;
}