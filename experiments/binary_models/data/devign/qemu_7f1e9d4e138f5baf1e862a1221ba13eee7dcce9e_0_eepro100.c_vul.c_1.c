static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    uint16_t VAR10 = 0xa000;
    static const uint8_t VAR11[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    assert(!(VAR8->VAR12[20] & FUN2(6)));
    if (VAR8->VAR12[8] & 0x80)
    {
        FUN3("", VAR8);
        return -1;
    }
    else if (VAR6 < 64 && (VAR8->VAR12[7] & 1))
    {
        FUN3("", VAR8, VAR6);
        VAR8->VAR13.VAR14++;
    }
    else if ((VAR6 > VAR15 + 4) && !(VAR8->VAR12[18] & 8))
    {
        FUN3("", VAR8, VAR6);
        return -1;
    }
    else if (memcmp(VAR5, VAR8->VAR16, 6) == 0)
    {
        FUN4(VAR17, FUN3("", VAR8, VAR6));
    }
    else if (memcmp(VAR5, VAR11, 6) == 0)
    {
        FUN4(VAR17, FUN3("", VAR8, VAR6));
        VAR10 |= 0x0002;
    }
    else if (VAR5[0] & 0x01)
    {
        FUN4(VAR17, FUN3("", VAR8, VAR6));
        assert(!(VAR8->VAR12[21] & FUN2(3)));
        int VAR18 = FUN5(VAR5);
        if (!(VAR8->VAR19[VAR18 >> 3] & (1 << (VAR18 & 7))))
        {
            return VAR6;
        }
        VAR10 |= 0x0002;
    }
    else if (VAR8->VAR12[15] & 1)
    {
        FUN4(VAR17, FUN3("", VAR8, VAR6));
        VAR10 |= 0x0004;
    }
    else
    {
        FUN4(VAR17, FUN3("", VAR8, VAR6, FUN6(VAR5, VAR6)));
        return VAR6;
    }
    if (FUN7(VAR8) != VAR20)
    {
        FUN3("", FUN7(VAR8));
        VAR8->VAR13.VAR21++;
        return -1;
    }
    eepro100_rx_t VAR22;
    FUN8(VAR8->VAR23 + VAR8->VAR24, (VAR4 *)&VAR22, FUN9(VAR25, VAR26));
    uint16_t VAR27 = FUN10(VAR22.VAR28);
    uint16_t VAR29 = FUN10(VAR22.VAR6);
    assert(VAR6 <= VAR29);
    if (VAR6 < 64)
    {
        VAR10 |= 0x0080;
    }
    FUN4(VAR30, FUN3("", VAR27, VAR22.VAR31, VAR22.VAR32, VAR29));
    FUN11(VAR8->VAR23 + VAR8->VAR24 + FUN9(VAR25, VAR33), VAR10);
    FUN11(VAR8->VAR23 + VAR8->VAR24 + FUN9(VAR25, VAR34), VAR6);
    assert(!(VAR8->VAR12[18] & 4));
    FUN12(VAR8->VAR23 + VAR8->VAR24 + FUN9(VAR25, VAR26), VAR5, VAR6);
    VAR8->VAR13.VAR35++;
    FUN13(VAR8);
    VAR8->VAR24 = FUN14(VAR22.VAR31);
    if (VAR27 & 0x8000)
    {
        assert(0);
    }
    if (VAR27 & 0x4000)
    {
        FUN15(VAR8, VAR36);
    }
    return VAR6;
}