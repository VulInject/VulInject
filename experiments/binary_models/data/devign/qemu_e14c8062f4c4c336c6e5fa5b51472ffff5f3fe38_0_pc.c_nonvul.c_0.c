void FUN1(ram_addr_t VAR1, ram_addr_t VAR2, const char *VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    FDriveType VAR15[2];
    VAR16 *VAR17[2];
    static pc_cmos_init_late_arg VAR18;
    VAR9 = 640;
    FUN2(VAR8, 0x15, VAR9);
    FUN2(VAR8, 0x16, VAR9 >> 8);
    VAR9 = (VAR1 / 1024) - 1024;
    if (VAR9 > 65535)
        VAR9 = 65535;
    FUN2(VAR8, 0x17, VAR9);
    FUN2(VAR8, 0x18, VAR9 >> 8);
    FUN2(VAR8, 0x30, VAR9);
    FUN2(VAR8, 0x31, VAR9 >> 8);
    if (VAR2)
    {
        FUN2(VAR8, 0x5b, (unsigned int)VAR2 >> 16);
        FUN2(VAR8, 0x5c, (unsigned int)VAR2 >> 24);
        FUN2(VAR8, 0x5d, (VAR19)VAR2 >> 32);
    }
    if (VAR1 > (16 * 1024 * 1024))
        VAR9 = (VAR1 / 65536) - ((16 * 1024 * 1024) / 65536);
    else
        VAR9 = 0;
    if (VAR9 > 65535)
        VAR9 = 65535;
    FUN2(VAR8, 0x34, VAR9);
    FUN2(VAR8, 0x35, VAR9 >> 8);
    FUN2(VAR8, 0x5f, VAR20 - 1);
    if (FUN3(VAR8, VAR3, VAR21))
    {
        FUN4(1);
    }
    for (VAR14 = 0; VAR14 < 2; VAR14++)
    {
        VAR17[VAR14] = FUN5(VAR22, 0, VAR14);
        if (VAR17[VAR14] && FUN6(VAR17[VAR14]->VAR23))
        {
            FUN7(VAR17[VAR14]->VAR23, &VAR11, &VAR12, &VAR13, VAR24, &VAR15[VAR14]);
        }
        else
        {
            VAR15[VAR14] = VAR24;
        }
    }
    VAR9 = (FUN8(VAR15[0]) << 4) | FUN8(VAR15[1]);
    FUN2(VAR8, 0x10, VAR9);
    VAR9 = 0;
    VAR10 = 0;
    if (VAR15[0] < VAR24)
    {
        VAR10++;
    }
    if (VAR15[1] < VAR24)
    {
        VAR10++;
    }
    switch (VAR10)
    {
    case 0:
        break;
    case 1:
        VAR9 |= 0x01;
        break;
    case 2:
        VAR9 |= 0x41;
        break;
    }
    VAR9 |= 0x02;
    VAR9 |= 0x04;
    FUN2(VAR8, VAR25, VAR9);
    VAR18.VAR26 = VAR8;
    VAR18.VAR5 = VAR5;
    VAR18.VAR6 = VAR6;
    FUN9(VAR27, &VAR18);
}