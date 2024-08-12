static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    int VAR6, VAR7;
    if (VAR2 < (VAR5->VAR8 - VAR9))
    {
        VAR6 = VAR10;
        VAR2 += VAR9;
        VAR7 = FUN2(VAR2);
    }
    else
    {
        int VAR11;
        VAR2 -= (VAR5->VAR8 - VAR9);
        VAR11 = VAR2 / VAR9;
        VAR2 %= VAR9;
        VAR6 = 1 << VAR11;
        VAR7 = VAR6;
    }
    if (VAR3 == FUN3(VAR2, VAR6))
    {
        return;
    }
    if (VAR3)
    {
        FUN4(VAR2, VAR6);
        if (FUN5(VAR2) || FUN6(VAR2, VAR6))
        {
            FUN7("", VAR2, VAR7);
            FUN8(VAR2, VAR7);
        }
    }
    else
    {
        FUN9(VAR2, VAR6);
    }
    FUN10(VAR5);
}