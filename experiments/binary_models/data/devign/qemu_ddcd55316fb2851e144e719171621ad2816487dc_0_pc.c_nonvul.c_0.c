void FUN1(ram_addr_t VAR1, ram_addr_t VAR2, const char *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9, VAR8 *VAR10, VAR6 *VAR11)
{
    int VAR12, VAR13, VAR14;
    FDriveType VAR15[2] = {VAR16, VAR16};
    static pc_cmos_init_late_arg VAR17;
    VAR18 *VAR19 = FUN2(VAR5);
    VAR20 *VAR21 = NULL;
    VAR12 = FUN3(VAR1 / 1024, 640);
    FUN4(VAR11, 0x15, VAR12);
    FUN4(VAR11, 0x16, VAR12 >> 8);
    if (VAR1 > 1024 * 1024)
    {
        VAR12 = (VAR1 - 1024 * 1024) / 1024;
    }
    else
    {
        VAR12 = 0;
    }
    if (VAR12 > 65535)
        VAR12 = 65535;
    FUN4(VAR11, 0x17, VAR12);
    FUN4(VAR11, 0x18, VAR12 >> 8);
    FUN4(VAR11, 0x30, VAR12);
    FUN4(VAR11, 0x31, VAR12 >> 8);
    if (VAR1 > 16 * 1024 * 1024)
    {
        VAR12 = (VAR1 - 16 * 1024 * 1024) / 65536;
    }
    else
    {
        VAR12 = 0;
    }
    if (VAR12 > 65535)
        VAR12 = 65535;
    FUN4(VAR11, 0x34, VAR12);
    FUN4(VAR11, 0x35, VAR12 >> 8);
    VAR12 = VAR2 / 65536;
    FUN4(VAR11, 0x5b, VAR12);
    FUN4(VAR11, 0x5c, VAR12 >> 8);
    FUN4(VAR11, 0x5d, VAR12 >> 16);
    FUN4(VAR11, 0x5f, VAR22 - 1);
    FUN5(FUN6(VAR5), "", VAR23, (VAR24 **)&VAR19->VAR25, VAR26, VAR27, &VAR28);
    FUN7(FUN6(VAR5), FUN6(VAR11), "", &VAR28);
    FUN8(VAR11, VAR3, &VAR21);
    if (VAR21)
    {
        FUN9("", FUN10(VAR21));
        FUN11(1);
    }
    if (VAR7)
    {
        for (VAR14 = 0; VAR14 < 2; VAR14++)
        {
            VAR15[VAR14] = FUN12(VAR7, VAR14);
        }
    }
    VAR12 = (FUN13(VAR15[0]) << 4) | FUN13(VAR15[1]);
    FUN4(VAR11, 0x10, VAR12);
    VAR12 = 0;
    VAR13 = 0;
    if (VAR15[0] < VAR16)
    {
        VAR13++;
    }
    if (VAR15[1] < VAR16)
    {
        VAR13++;
    }
    switch (VAR13)
    {
    case 0:
        break;
    case 1:
        VAR12 |= 0x01;
        break;
    case 2:
        VAR12 |= 0x41;
        break;
    }
    VAR12 |= 0x02;
    VAR12 |= 0x04;
    FUN4(VAR11, VAR29, VAR12);
    VAR17.VAR30 = VAR11;
    VAR17.VAR31[0] = VAR9;
    VAR17.VAR31[1] = VAR10;
    FUN14(VAR32, &VAR17);
}