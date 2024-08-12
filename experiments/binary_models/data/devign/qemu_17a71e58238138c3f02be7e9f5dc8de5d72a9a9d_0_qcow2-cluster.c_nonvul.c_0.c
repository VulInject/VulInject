static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5, unsigned int *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    FUN2(FUN3(), VAR3, *VAR5, *VAR6);
    FUN4(FUN3());
    if (*VAR5 == 0)
    {
        int64_t VAR10 = FUN5(VAR2, *VAR6 * VAR8->VAR11);
        if (VAR10 < 0)
        {
            return VAR10;
        }
        *VAR5 = VAR10;
        return 0;
    }
    else
    {
        int VAR12 = FUN6(VAR2, *VAR5, *VAR6);
        if (VAR12 < 0)
        {
            return VAR12;
        }
        *VAR6 = VAR12;
        return 0;
    }
}