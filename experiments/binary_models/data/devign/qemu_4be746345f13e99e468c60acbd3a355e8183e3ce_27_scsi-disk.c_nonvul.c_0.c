static int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3[16];
    uint8_t VAR4[36];
    uint8_t VAR5[8];
    sg_io_hdr_t VAR6;
    int VAR7;
    memset(VAR3, 0, sizeof(VAR3));
    memset(VAR4, 0, sizeof(VAR4));
    VAR3[0] = VAR8;
    VAR3[4] = sizeof(VAR4);
    memset(&VAR6, 0, sizeof(VAR6));
    VAR6.VAR9 = '';
    VAR6.VAR10 = VAR11;
    VAR6.VAR12 = sizeof(VAR4);
    VAR6.VAR13 = VAR4;
    VAR6.VAR14 = VAR3;
    VAR6.VAR15 = sizeof(VAR3);
    VAR6.VAR16 = sizeof(VAR5);
    VAR6.VAR17 = VAR5;
    VAR6.VAR18 = 6000;
    VAR7 = FUN2(VAR2->VAR19.VAR20.VAR21, VAR22, &VAR6);
    if (VAR7 < 0 || VAR6.VAR23 || VAR6.VAR24)
    {
        return -1;
    }
    VAR2->VAR19.VAR25 = VAR4[0];
    if (VAR4[1] & 0x80)
    {
        VAR2->VAR26 |= 1 << VAR27;
    }
    return 0;
}