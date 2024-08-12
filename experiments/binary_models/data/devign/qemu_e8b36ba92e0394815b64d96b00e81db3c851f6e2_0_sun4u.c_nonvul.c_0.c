FUN1(VAR1 *VAR2)
{
    FUN2(&VAR2->VAR3);
    VAR2->VAR4[0x04] = 0x06;
    VAR2->VAR4[0x05] = 0x00;
    VAR2->VAR4[0x06] = 0xa0;
    VAR2->VAR4[0x07] = 0x03;
    VAR2->VAR4[0x09] = 0x00;
    VAR2->VAR4[0x0D] = 0x0a;
    FUN3(VAR2, 0, 0x1000000, VAR5, VAR6);
    FUN3(VAR2, 1, 0x800000, VAR5, VAR6);
    return 0;
}