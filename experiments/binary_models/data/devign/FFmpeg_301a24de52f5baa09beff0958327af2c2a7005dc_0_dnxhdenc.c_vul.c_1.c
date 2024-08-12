static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    const uint8_t VAR8[5] = {0x00, 0x00, 0x02, 0x80, 0x01};
    memcpy(VAR4, VAR8, 5);
    VAR4[5] = VAR6->VAR9 ? VAR6->VAR10 + 2 : 0x01;
    VAR4[6] = 0x80;
    VAR4[7] = 0xa0;
    FUN2(VAR4 + 0x18, VAR2->VAR11);
    FUN2(VAR4 + 0x1a, VAR2->VAR12);
    FUN2(VAR4 + 0x1d, VAR2->VAR11);
    VAR4[0x21] = 0x38;
    VAR4[0x22] = 0x88 + (VAR6->VAR13.VAR14 << 2);
    FUN3(VAR4 + 0x28, VAR6->VAR15);
    VAR4[0x2c] = VAR6->VAR9 ? 0 : 0x80;
    VAR4[0x5f] = 0x01;
    VAR4[0x167] = 0x02;
    FUN2(VAR4 + 0x16a, VAR6->VAR16.VAR17 * 4 + 4);
    VAR4[0x16d] = VAR6->VAR16.VAR17;
    VAR4[0x16f] = 0x10;
    VAR6->VAR18 = VAR4 + 0x170;
    return 0;