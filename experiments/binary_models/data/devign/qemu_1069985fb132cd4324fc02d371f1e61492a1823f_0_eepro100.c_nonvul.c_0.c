static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR9, VAR3, VAR3)->VAR10;
    uint16_t VAR11 = 0xa000;
    uint8_t VAR12[60];
    static const uint8_t VAR13[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    if (VAR6 < sizeof(VAR12))
    {
        memcpy(VAR12, VAR5, VAR6);
        memset(&VAR12[VAR6], 0, sizeof(VAR12) - VAR6);
        VAR5 = VAR12;
        VAR6 = sizeof(VAR12);
    }
    if (VAR8->VAR14[8] & 0x80)
    {
        FUN3("", VAR8);
        return -1;
    }
    else if (VAR6 < 64 && (VAR8->VAR14[7] & FUN4(0)))
    {
        FUN3("", VAR8, VAR6);
        VAR8->VAR15.VAR16++;
        return -1;
    }
    else if ((VAR6 > VAR17 + 4) && !(VAR8->VAR14[18] & FUN4(3)))
    {
        FUN3("", VAR8, VAR6);
        return -1;
    }
    else if (memcmp(VAR5, VAR8->VAR18.VAR19.VAR20, 6) == 0)
    {
        FUN5(VAR21, FUN3("", VAR8, VAR6));
    }
    else if (memcmp(VAR5, VAR13, 6) == 0)
    {
        FUN5(VAR21, FUN3("", VAR8, VAR6));
        VAR11 |= 0x0002;
    }
    else if (VAR5[0] & 0x01)
    {
        FUN5(VAR21, FUN3("", VAR8, VAR6, FUN6(VAR5, VAR6)));
        if (VAR8->VAR14[21] & FUN4(3))
        {
        }
        else
        {
            unsigned VAR22 = FUN7(VAR5);
            assert(VAR22 < 64);
            if (VAR8->VAR23[VAR22 >> 3] & (1 << (VAR22 & 7)))
            {
            }
            else if (VAR8->VAR14[15] & FUN4(0))
            {
                VAR11 |= 0x0004;
            }
            else
            {
                FUN5(VAR21, FUN3("", VAR8));
                return -1;
            }
        }
        VAR11 |= 0x0002;
    }
    else if (VAR8->VAR14[15] & FUN4(0))
    {
        FUN5(VAR21, FUN3("", VAR8, VAR6));
        VAR11 |= 0x0004;
    }
    else if (VAR8->VAR14[20] & FUN4(6))
    {
        unsigned VAR22 = FUN8(VAR5);
        assert(VAR22 < 64);
        if (VAR8->VAR23[VAR22 >> 3] & (1 << (VAR22 & 7)))
        {
            FUN5(VAR21, FUN3("", VAR8));
        }
        else
        {
            FUN5(VAR21, FUN3("", VAR8));
            return -1;
        }
    }
    else
    {
        FUN5(VAR21, FUN3("", VAR8, VAR6, FUN6(VAR5, VAR6)));
        return VAR6;
    }
    if (FUN9(VAR8) != VAR24)
    {
        FUN3("", FUN9(VAR8));
        FUN10(VAR8);
        VAR8->VAR15.VAR25++;
        assert(!"");
        return -1;
    }
    eepro100_rx_t VAR26;
    FUN11(&VAR8->VAR27, VAR8->VAR28 + VAR8->VAR29, &VAR26, sizeof(VAR30));
    uint16_t VAR31 = FUN12(VAR26.VAR32);
    uint16_t VAR33 = FUN12(VAR26.VAR6);
    if (VAR6 > VAR33)
    {
        FUN3("" VAR34 ""
               "",
               VAR33, VAR6);
        VAR6 = VAR33;
    }
    if (VAR6 < 64)
    {
        VAR11 |= 0x0080;
    }
    FUN5(VAR35, FUN3("", VAR31, VAR26.VAR36, VAR26.VAR37, VAR33));
    FUN13(&VAR8->VAR27, VAR8->VAR28 + VAR8->VAR29 + FUN14(VAR30, VAR38), VAR11);
    FUN13(&VAR8->VAR27, VAR8->VAR28 + VAR8->VAR29 + FUN14(VAR30, VAR39), VAR6);
    FUN15(VAR8);
    if (VAR8->VAR14[18] & FUN4(2))
    {
        FUN16("");
        return -1;
    }
    assert(!(VAR8->VAR14[17] & FUN4(0)));
    FUN17(&VAR8->VAR27, VAR8->VAR28 + VAR8->VAR29 + sizeof(VAR30), VAR5, VAR6);
    VAR8->VAR15.VAR40++;
    FUN18(VAR8);
    VAR8->VAR29 = FUN19(VAR26.VAR36);
    if (VAR31 & VAR41)
    {
        FUN3("");
        FUN20(VAR8, VAR42);
        FUN10(VAR8);
    }
    if (VAR31 & VAR43)
    {
        FUN20(VAR8, VAR44);
    }
    return VAR6;
}