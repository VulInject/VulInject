static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7.VAR8.VAR9.VAR6;
    uint8_t VAR10[36];
    int VAR11, VAR12, VAR13;
    if ((VAR6[1] & 0x01) || VAR6[2] != 0)
    {
        FUN2(VAR2, VAR4, VAR14, 0x24, 0);
        FUN3(VAR2, VAR4, VAR15, 0, 0);
        return;
    }
    VAR13 = VAR6[3];
    VAR13 = (VAR13 << 8) | VAR6[4];
    VAR12 = FUN4(VAR13, 36);
    memset(VAR10, 0, 36);
    VAR10[0] = 0x7f;
    VAR10[2] = 0x06;
    VAR10[3] = 0x02;
    VAR10[4] = 36 - 5;
    VAR10[7] = 0x10;
    memcpy(&VAR10[16], "", 16);
    memcpy(&VAR10[8], "", 8);
    VAR4->VAR16 = 0;
    FUN5(VAR4);
    VAR11 = FUN6(VAR2, VAR4, 0, VAR10, VAR12);
    if (VAR11 < 0)
    {
        FUN2(VAR2, VAR4, VAR17, 0, 0);
        FUN3(VAR2, VAR4, VAR15, 0, 0);
    }
    else
    {
        FUN3(VAR2, VAR4, 0, 36 - VAR11, 0);
    }
}