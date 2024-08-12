static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    if (VAR8)
    {
        VAR7 = FUN2(VAR2);
        if (VAR7 < 0)
        {
            return VAR7;
        }
    }
    FUN3(VAR2->VAR9, VAR10);
    VAR7 = FUN4(VAR2->VAR9, VAR3, VAR5->VAR11, VAR5->VAR12);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR5->VAR13 = VAR3;
    return 0;