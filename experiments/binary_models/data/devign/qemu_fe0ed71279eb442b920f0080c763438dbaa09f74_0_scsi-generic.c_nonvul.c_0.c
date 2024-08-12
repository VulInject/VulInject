static int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3[10];
    uint8_t VAR4[8];
    uint8_t VAR5[8];
    sg_io_hdr_t VAR6;
    int VAR7;
    memset(VAR3, 0, sizeof(VAR3));
    memset(VAR4, 0, sizeof(VAR4));
    VAR3[0] = VAR8;
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
    VAR7 = FUN2(VAR2, VAR19, &VAR6);
    if (VAR7 < 0 || VAR6.VAR20 || VAR6.VAR21)
    {
        return -1;
    }
    return (VAR4[4] << 24) | (VAR4[5] << 16) | (VAR4[6] << 8) | VAR4[7];
}