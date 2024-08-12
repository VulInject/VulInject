static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5;
    int VAR6;
    if (!(VAR2->VAR7 & VAR8))
    {
        FUN2("");
        return;
    }
    if (!(VAR2->VAR9 & VAR10) || (VAR2->VAR9 & VAR11))
    {
        FUN3("");
        return;
    }
    VAR2->VAR12 &= ~VAR13;
    if (VAR2->VAR9 & VAR14)
    {
        VAR2->VAR15[VAR2->VAR16++] = VAR3;
        if (VAR2->VAR16 % VAR17 == (VAR17 - 1) || VAR2->VAR16 == VAR2->VAR18)
        {
            VAR5 = FUN4(VAR2);
            if (FUN5(VAR5->VAR19, FUN6(VAR5), VAR2->VAR15, 1) < 0)
            {
                FUN3("", FUN6(VAR5));
                return;
            }
            if (!FUN7(VAR2, VAR5))
            {
                FUN2("", FUN6(VAR5));
                return;
            }
        }
        if (VAR2->VAR16 == VAR2->VAR18)
            FUN8(VAR2, VAR20, 0x00, 0x00);
        return;
    }
    if (VAR2->VAR16 == 0)
    {
        VAR6 = VAR21[VAR3 & 0xff];
        FUN2("", VAR22[VAR6].VAR23);
        VAR2->VAR18 = VAR22[VAR6].VAR24 + 1;
    }
    FUN2("", VAR25, VAR3);
    VAR2->VAR15[VAR2->VAR16++] = VAR3;
    if (VAR2->VAR16 == VAR2->VAR18)
    {
        if (VAR2->VAR26 & VAR27)
        {
            FUN9(VAR2);
            return;
        }
        VAR6 = VAR21[VAR2->VAR15[0] & 0xff];
        FUN2("", VAR22[VAR6].VAR23);
        (*VAR22[VAR6].VAR28)(VAR2, VAR22[VAR6].VAR29);
    }
}