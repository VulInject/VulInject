static VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    uint32_t VAR6 = 0;
    int VAR7, VAR8;
    VAR5 = FUN2(VAR3);
    VAR3->VAR9 &= ~VAR10;
    if (FUN3(VAR3->VAR11) == VAR12)
    {
        FUN4("");
        return 0;
    }
    VAR7 = VAR3->VAR13;
    if (FUN3(VAR3->VAR11) == VAR14)
    {
        VAR7 %= VAR15;
        if (VAR7 == 0)
        {
            VAR8 = VAR3->VAR16 - VAR3->VAR13;
            if (VAR8 > VAR15)
                VAR8 = VAR15;
            FUN5(VAR5->VAR17, FUN6(VAR5), VAR3->VAR18, VAR8);
        }
    }
    VAR6 = VAR3->VAR18[VAR7];
    if (++VAR3->VAR13 == VAR3->VAR16)
    {
        VAR3->VAR13 = 0;
        if (FUN3(VAR3->VAR11) == VAR14)
        {
            FUN7(VAR3, 0x20, 0x00, 0x00);
        }
        else
        {
            FUN8(VAR3);
            FUN9(VAR3);
        }
    }
    FUN10("", VAR6);
    return VAR6;
}