void FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6, int *VAR7)
{
    BlockDriverInfo VAR8;
    if (FUN2(VAR2, &VAR8) < 0 || VAR8.VAR9 == 0)
    {
        *VAR6 = VAR3;
        *VAR7 = VAR4;
    }
    else
    {
        int64_t VAR10 = VAR8.VAR9 / VAR11;
        *VAR6 = FUN3(VAR3, VAR10);
        *VAR7 = FUN4(VAR3 - *VAR6 + VAR4, VAR10);
    }
}