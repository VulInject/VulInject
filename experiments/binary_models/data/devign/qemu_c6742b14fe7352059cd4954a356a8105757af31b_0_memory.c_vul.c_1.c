bool FUN1(VAR1 *VAR2, hwaddr VAR3)
{
    VAR1 *VAR4 = FUN2(VAR2, VAR3, 1).VAR4;
    if (!VAR4 || (VAR4 == VAR2))
    {
        return false;
    }
    FUN3(VAR4);
    return true;
}