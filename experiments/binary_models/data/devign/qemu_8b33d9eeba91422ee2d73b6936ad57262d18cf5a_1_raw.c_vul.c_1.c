static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    if (FUN2(VAR2, VAR3, VAR5, VAR6))
    {
        int VAR7;
        VAR7 = FUN3(VAR2, VAR5);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        VAR7 = FUN4(VAR2->VAR8, 1, VAR5 + 512, VAR6 - 1);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        return VAR7 + 512;
    }
    return FUN4(VAR2->VAR8, VAR3, VAR5, VAR6);
}