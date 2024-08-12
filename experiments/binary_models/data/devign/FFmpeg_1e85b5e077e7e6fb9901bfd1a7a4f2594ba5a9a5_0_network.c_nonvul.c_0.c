int FUN1(int VAR1, int write, int64_t VAR2, VAR3 *VAR4)
{
    int VAR5;
    int64_t VAR6 = 0;
    while (1)
    {
        if (FUN2(VAR4))
            return VAR7;
        VAR5 = FUN3(VAR1, write);
        if (VAR5 != FUN4(VAR8))
            return VAR5;
        if (VAR2 > 0)
        {
            if (!VAR6)
                VAR6 = FUN5();
            else if (FUN5() - VAR6 > VAR2)
                return FUN4(VAR9);
        }
    }
}