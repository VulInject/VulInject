static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6 = VAR2->VAR7[0][VAR5].VAR3;
    int VAR8 = FUN2(VAR4 - VAR6);
    if (VAR8 == 0 || VAR2->VAR7[0][VAR5].VAR9->VAR10)
    {
        return 256;
    }
    else
    {
        int VAR11 = FUN2(VAR3 - VAR6);
        int VAR12 = (16384 + (FUN3(VAR8) >> 1)) / VAR8;
        return FUN4((VAR11 * VAR12 + 32) >> 6, 10);
    }
}