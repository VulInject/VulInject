static void FUN1(VAR1 *VAR2)
{
    if ((VAR2->VAR3 & VAR4) != 0)
    {
        SDRequest VAR5;
        uint8_t VAR6[16];
        VAR5.VAR7 = 0x0C;
        VAR5.VAR8 = 0;
        FUN2("", VAR5.VAR7, VAR5.VAR8);
        FUN3(&VAR2->VAR9, &VAR5, VAR6);
        VAR2->VAR10[3] = (VAR6[0] << 24) | (VAR6[1] << 16) | (VAR6[2] << 8) | VAR6[3];
    }
    VAR2->VAR11 &= ~(VAR12 | VAR13 | VAR14 | VAR15 | VAR16 | VAR17);
    if (VAR2->VAR18 & VAR19)
    {
        VAR2->VAR20 |= VAR21;
    }
    FUN4(VAR2);
}