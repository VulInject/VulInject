static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    if (FUN2(VAR2))
        return 0;
    if (VAR5->VAR6)
    {
        int64_t VAR7 = VAR5->FUN3(VAR2);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        VAR3 = FUN4(VAR7, VAR8);
    }
    VAR2->VAR9 = VAR3;
    return 0;
}