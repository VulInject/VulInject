static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = VAR4->VAR2.VAR7;
    FUN3(VAR6, VAR8);
    FUN4(VAR6, VAR9);
    VAR6[0x04] = 0x00;
    VAR6[0x05] = 0x00;
    VAR6[0x06] = 0x80;
    VAR6[0x07] = 0x02;
    VAR6[0x08] = 0x01;
    VAR6[0x09] = 0x00;
    FUN5(VAR6, VAR10);
    VAR6[VAR11] = VAR12;
    VAR6[0x10] = 0x01;
    VAR6[0x11] = 0x00;
    VAR6[0x12] = 0x00;
    VAR6[0x13] = 0x00;
    VAR6[0x14] = 0x01;
    VAR6[0x15] = 0x00;
    VAR6[0x16] = 0x00;
    VAR6[0x17] = 0x00;
    VAR6[0x2c] = 0x86;
    VAR6[0x2d] = 0x80;
    VAR6[0x2e] = 0x00;
    VAR6[0x2f] = 0x00;
    VAR6[0x3c] = 0x00;
    VAR6[0x3d] = 0x01;
    FUN6(&VAR4->VAR2, 0, 256 * 4, VAR13, VAR14);
    FUN6(&VAR4->VAR2, 1, 64 * 4, VAR13, VAR14);
    FUN7("", 0, 2, VAR15, VAR16, VAR4);
    FUN8(VAR17, VAR4);
    FUN9("", &VAR4->VAR18);
    FUN10(VAR4);
}