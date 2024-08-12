bool FUN1(VAR1 *VAR2)
{
    BlockDriverInfo VAR3;
    if (VAR2->VAR4 || !(VAR2->VAR5 & VAR6))
    {
        return false;
    }
    if (FUN2(VAR2, &VAR3) == 0)
    {
        return VAR3.VAR7;
    }
    return false;
}