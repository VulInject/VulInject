static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5 = 0;
    VAR6 *VAR7;
    int VAR8;
    int VAR9 = 0;
    FUN2(VAR7, &VAR10.VAR11, VAR12)
    {
        if (VAR7->VAR13 == 0)
        {
            if (FUN3(VAR2, VAR4, VAR7) == 1)
            {
                VAR7->VAR13 = 1;
            }
            VAR5 += VAR7->VAR14;
            VAR9 = 1;
            break;
        }
        else
        {
            VAR5 += VAR7->VAR14;
        }
    }
    VAR8 = VAR5 * 100 / VAR10.VAR15;
    if (VAR8 != VAR10.VAR16)
    {
        VAR10.VAR16 = VAR8;
        FUN4(VAR4, (VAR8 << VAR17) | VAR18);
        FUN5(VAR2, "", VAR8);
        FUN6(VAR2);
    }
    return VAR9;
}