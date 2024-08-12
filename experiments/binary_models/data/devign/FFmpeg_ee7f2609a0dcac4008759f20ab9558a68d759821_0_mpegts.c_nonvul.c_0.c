static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR4;
    int64_t VAR6 = FUN2(VAR4);
    if (VAR6 < 0)
        return;
    VAR6 += VAR2->VAR7 - VAR2->VAR8;
    if (VAR6 == VAR9)
    {
        VAR2->VAR10[0]++;
    }
    else if (VAR6 == VAR11)
    {
        VAR2->VAR10[1]++;
    }
    else if (VAR6 == VAR12)
    {
        VAR2->VAR10[2]++;
    }
    VAR2->VAR13++;
    if (VAR2->VAR13 > VAR14)
    {
        int VAR15 = 0;
        if (VAR2->VAR10[0] > VAR14)
        {
            VAR15 = VAR9;
        }
        else if (VAR2->VAR10[1] > VAR14)
        {
            VAR15 = VAR11;
        }
        else if (VAR2->VAR10[2] > VAR14)
        {
            VAR15 = VAR12;
        }
        if (VAR15 && VAR15 != VAR2->VAR7)
        {
            FUN3(VAR2->VAR5, VAR16, "", VAR15);
            VAR2->VAR7 = VAR15;
        }
        VAR2->VAR13 = 0;
        memset(VAR2->VAR10, 0, sizeof(VAR2->VAR10));
    }
}