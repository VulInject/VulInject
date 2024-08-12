void FUN1(ram_addr_t VAR1, ram_addr_t VAR2, const char *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR6 *VAR8, VAR4 *VAR9)
{
    int VAR10, VAR11, VAR12;
    FDriveType VAR13[2] = {VAR14, VAR14};
    static pc_cmos_init_late_arg VAR15;
    VAR10 = 640;
    FUN2(VAR9, 0x15, VAR10);
    FUN2(VAR9, 0x16, VAR10 >> 8);
    VAR10 = (VAR1 / 1024) - 1024;
    if (VAR10 > 65535)
        VAR10 = 65535;
    FUN2(VAR9, 0x17, VAR10);
    FUN2(VAR9, 0x18, VAR10 >> 8);
    FUN2(VAR9, 0x30, VAR10);
    FUN2(VAR9, 0x31, VAR10 >> 8);
    if (VAR2)
    {
        FUN2(VAR9, 0x5b, (unsigned int)VAR2 >> 16);
        FUN2(VAR9, 0x5c, (unsigned int)VAR2 >> 24);
        FUN2(VAR9, 0x5d, (VAR16)VAR2 >> 32);
    }
    if (VAR1 > (16 * 1024 * 1024))
        VAR10 = (VAR1 / 65536) - ((16 * 1024 * 1024) / 65536);
    else
        VAR10 = 0;
    if (VAR10 > 65535)
        VAR10 = 65535;
    FUN2(VAR9, 0x34, VAR10);
    FUN2(VAR9, 0x35, VAR10 >> 8);
    FUN2(VAR9, 0x5f, VAR17 - 1);
    if (FUN3(VAR9, VAR3, VAR18))
    {
        FUN4(1);
    }
    if (VAR5)
    {
        for (VAR12 = 0; VAR12 < 2; VAR12++)
        {
            VAR13[VAR12] = FUN5(VAR5, VAR12);
        }
    }
    VAR10 = (FUN6(VAR13[0]) << 4) | FUN6(VAR13[1]);
    FUN2(VAR9, 0x10, VAR10);
    VAR10 = 0;
    VAR11 = 0;
    if (VAR13[0] < VAR14)
    {
        VAR11++;
    }
    if (VAR13[1] < VAR14)
    {
        VAR11++;
    }
    switch (VAR11)
    {
    case 0:
        break;
    case 1:
        VAR10 |= 0x01;
        break;
    case 2:
        VAR10 |= 0x41;
        break;
    }
    VAR10 |= 0x02;
    VAR10 |= 0x04;
    FUN2(VAR9, VAR19, VAR10);
    VAR15.VAR20 = VAR9;
    VAR15.VAR21[0] = VAR7;
    VAR15.VAR21[1] = VAR8;
    FUN7(VAR22, &VAR15);
}