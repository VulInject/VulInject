VAR1 FUN1(VAR2 *VAR3, int VAR4, MemTxAttrs VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9 = 1 << VAR4;
    VAR7 = FUN2(VAR3, VAR4, VAR5);
    if (VAR7 >= VAR10)
    {
        FUN3("", VAR7);
        return VAR7;
    }
    if (FUN4(VAR7, VAR4) >= VAR3->VAR11[VAR4])
    {
        FUN3("", VAR7);
        return 1023;
    }
    if (VAR3->VAR12 == VAR13 || VAR3->VAR12 == VAR14)
    {
        FUN5(VAR7, FUN6(VAR7) ? VAR15 : VAR9);
        VAR6 = VAR7;
    }
    else
    {
        if (VAR7 < VAR16)
        {
            assert(VAR3->VAR17[VAR7][VAR4] != 0);
            VAR8 = FUN7(VAR3->VAR17[VAR7][VAR4]);
            VAR3->VAR17[VAR7][VAR4] &= ~(1 << VAR8);
            if (VAR3->VAR17[VAR7][VAR4] == 0)
            {
                FUN5(VAR7, FUN6(VAR7) ? VAR15 : VAR9);
            }
            VAR6 = VAR7 | ((VAR8 & 0x7) << 10);
        }
        else
        {
            FUN5(VAR7, FUN6(VAR7) ? VAR15 : VAR9);
            VAR6 = VAR7;
        }
    }
    FUN8(VAR3, VAR4, VAR7);
    FUN9(VAR3);
    FUN3("", VAR7);
    return VAR6;