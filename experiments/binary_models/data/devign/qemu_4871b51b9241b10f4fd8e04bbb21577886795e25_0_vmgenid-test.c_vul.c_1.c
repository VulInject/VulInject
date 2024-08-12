static VAR1 FUN1(void)
{
    uint32_t VAR2;
    uint32_t VAR3 = 0;
    AcpiRsdpDescriptor VAR4;
    uint32_t VAR5;
    AcpiRsdtDescriptorRev1 VAR6;
    int VAR7;
    VAR1 *VAR8;
    AcpiTableHeader VAR9;
    VgidTable VAR10;
    int VAR11;
    for (VAR11 = 0; VAR11 < VAR12; VAR11++)
    {
        VAR2 = FUN2();
        if (VAR2 < VAR13)
        {
            break;
        }
        FUN3(VAR14);
    }
    FUN4(VAR2, <, VAR13);
    FUN5(VAR2, &VAR4);
    VAR5 = VAR4.VAR15;
    FUN6(&VAR6, VAR5);
    FUN7(VAR6.VAR16, "");
    VAR7 = (VAR6.VAR17 - sizeof(VAR18)) / sizeof(VAR1);
    FUN8(VAR7, >, 0);
    VAR8 = FUN9(VAR1, VAR7);
    FUN10(VAR8, VAR7, VAR5);
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
    {
        FUN6(&VAR9, VAR8[VAR11]);
        if (!FUN11((char *)VAR9.VAR19, "", 7))
        {
            FUN12(VAR10.VAR20, VAR8[VAR11]);
            FUN13(VAR10.VAR20 == 0x08);
            FUN14(VAR10.VAR21, VAR8[VAR11]);
            FUN13(memcmp(VAR10.VAR21, "", 4) == 0);
            FUN12(VAR10.VAR22, VAR8[VAR11]);
            FUN13(VAR10.VAR22 == 0x0C);
            FUN12(VAR10.VAR23, VAR8[VAR11]);
            VAR3 = VAR10.VAR23 + VAR24;
            break;
        }
    }
    FUN15(VAR8);
    return VAR3;
}