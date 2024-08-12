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
        FUN2("");
        return;
    }
    VAR2->VAR12 &= ~VAR13;
    if (VAR2->VAR9 & VAR14)
    {
        VAR6 = VAR2->VAR15++;
        VAR6 %= VAR16;
        VAR2->VAR17[VAR6] = VAR3;
        if (VAR6 == VAR16 - 1 || VAR2->VAR15 == VAR2->VAR18)
        {
            VAR5 = FUN3(VAR2);
            if (FUN4(VAR5->VAR19, FUN5(VAR5), VAR2->VAR17, 1) < 0)
            {
                FUN2("", FUN5(VAR5));
                return;
            }
            if (!FUN6(VAR2, VAR5))
            {
                FUN2("", FUN5(VAR5));
                return;
            }
        }
        if (VAR2->VAR15 == VAR2->VAR18)
            FUN7(VAR2, 0x00, 0x00, 0x00);
        return;
    }
    if (VAR2->VAR15 == 0)
    {
        VAR6 = VAR20[VAR3 & 0xff];
        FUN2("", VAR21[VAR6].VAR22);
        VAR2->VAR18 = VAR21[VAR6].VAR23 + 1;
        VAR2->VAR9 |= VAR24;
    }
    FUN2("", VAR25, VAR3);
    VAR2->VAR17[VAR2->VAR15++] = VAR3;
    if (VAR2->VAR15 == VAR2->VAR18)
    {
        if (VAR2->VAR26 & VAR27)
        {
            FUN8(VAR2);
            return;
        }
        VAR6 = VAR20[VAR2->VAR17[0] & 0xff];
        FUN2("", VAR21[VAR6].VAR22);
        (*VAR21[VAR6].VAR28)(VAR2, VAR21[VAR6].VAR29);
    }
}