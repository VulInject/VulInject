bool FUN1(VAR1 *VAR2)
{
    BlockDriverInfo VAR3;
    if (VAR2->VAR4)
    {
        return false;
    }
    if (FUN2(VAR2, &VAR3) == 0)
    {
        return VAR3.VAR5;
    }
    return false;
}