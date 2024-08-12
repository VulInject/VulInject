static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR9, VAR3, VAR3)->VAR10;
    uint16_t VAR11 = 0xa000;
    static const uint8_t VAR12[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    if (VAR8->VAR13[20] & FUN3(6))
    {
        FUN4("");
        return -1;
    }
    if (VAR8->VAR13[8] & 0x80)
    {
        FUN5("", VAR8);
        return -1;
    }
    else if (VAR6 < 64 && (VAR8->VAR13[7] & FUN3(0)))
    {
        FUN5("", VAR8, VAR6);
        VAR8->VAR14.VAR15++;
        return -1;
    }
    else if ((VAR6 > VAR16 + 4) && !(VAR8->VAR13[18] & FUN3(3)))
    {
        FUN5("", VAR8, VAR6);
        return -1;
    }
    else if (memcmp(VAR5, VAR8->VAR17.VAR18.VAR19, 6) == 0)
    {
        FUN6(VAR20, FUN5("", VAR8, VAR6));
    }
    else if (memcmp(VAR5, VAR12, 6) == 0)
    {
        FUN6(VAR20, FUN5("", VAR8, VAR6));
        VAR11 |= 0x0002;
    }
    else if (VAR5[0] & 0x01)
    {
        FUN6(VAR20, FUN5("", VAR8, VAR6, FUN7(VAR5, VAR6)));
        if (VAR8->VAR13[21] & FUN3(3))
        {
        }
        else
        {
            unsigned VAR21 = FUN8(VAR5);
            assert(VAR21 < 64);
            if (VAR8->VAR22[VAR21 >> 3] & (1 << (VAR21 & 7)))
            {
            }
            else if (VAR8->VAR13[15] & FUN3(0))
            {
                VAR11 |= 0x0004;
            }
            else
            {
                FUN6(VAR20, FUN5("", VAR8));
                return -1;
            }
        }
        VAR11 |= 0x0002;
    }
    else if (VAR8->VAR13[15] & FUN3(0))
    {
        FUN6(VAR20, FUN5("", VAR8, VAR6));
        VAR11 |= 0x0004;
    }
    else
    {
        FUN6(VAR20, FUN5("", VAR8, VAR6, FUN7(VAR5, VAR6)));
        return VAR6;
    }
    if (FUN9(VAR8) != VAR23)
    {
        FUN5("", FUN9(VAR8));
        FUN10(VAR8);
        VAR8->VAR14.VAR24++;
        assert(!"");
        return -1;
    }
    eepro100_rx_t VAR25;
    FUN11(VAR8->VAR26 + VAR8->VAR27, (VAR4 *)&VAR25, FUN12(VAR28, VAR29));
    uint16_t VAR30 = FUN13(VAR25.VAR31);
    uint16_t VAR32 = FUN13(VAR25.VAR6);
    if (VAR6 > VAR32)
    {
        FUN5("" VAR33 ""
               "",
               VAR32, VAR6);
        VAR6 = VAR32;
    }
    if (VAR6 < 64)
    {
        VAR11 |= 0x0080;
    }
    FUN6(VAR34, FUN5("", VAR30, VAR25.VAR35, VAR25.VAR36, VAR32));
    FUN14(VAR8->VAR26 + VAR8->VAR27 + FUN12(VAR28, VAR37), VAR11);
    FUN14(VAR8->VAR26 + VAR8->VAR27 + FUN12(VAR28, VAR38), VAR6);
    FUN15(VAR8);
    if (VAR8->VAR13[18] & FUN3(2))
    {
        FUN4("");
        return -1;
    }
    assert(!(VAR8->VAR13[17] & FUN3(0)));
    FUN16(VAR8->VAR26 + VAR8->VAR27 + FUN12(VAR28, VAR29), VAR5, VAR6);
    VAR8->VAR14.VAR39++;
    FUN17(VAR8);
    VAR8->VAR27 = FUN18(VAR25.VAR35);
    if (VAR30 & VAR40)
    {
        FUN5("");
        FUN19(VAR8, VAR41);
    }
    if (VAR30 & VAR42)
    {
        FUN19(VAR8, VAR41);
    }
    return VAR6;
}