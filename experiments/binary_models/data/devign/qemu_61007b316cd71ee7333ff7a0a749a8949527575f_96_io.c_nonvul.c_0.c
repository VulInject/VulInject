static int FUN1(VAR1 *VAR2)
{
    BlockDriverInfo VAR3;
    int VAR4;
    VAR4 = FUN2(VAR2, &VAR3);
    if (VAR4 < 0 || VAR3.VAR5 == 0)
    {
        return VAR2->VAR6;
    }
    else
    {
        return VAR3.VAR5;
    }
}