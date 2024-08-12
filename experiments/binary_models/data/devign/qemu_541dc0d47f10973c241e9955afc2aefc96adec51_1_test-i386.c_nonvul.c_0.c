void FUN1(void)
{
    struct modify_ldt_ldt_s VAR1;
    long long VAR2[3];
    int VAR3, VAR4;
    char VAR5;
    struct
    {
        uint32_t VAR6;
        uint16_t VAR7;
    } QEMU_PACKED VAR8;
    VAR1.VAR9 = 1;
    VAR1.VAR10 = (unsigned long)&VAR11;
    VAR1.VAR12 = (sizeof(VAR11) + 0xfff) >> 12;
    VAR1.VAR13 = 1;
    VAR1.VAR14 = VAR15;
    VAR1.VAR16 = 0;
    VAR1.VAR17 = 1;
    VAR1.VAR18 = 0;
    VAR1.VAR19 = 1;
    FUN2(1, &VAR1, sizeof(VAR1));
    VAR1.VAR9 = 2;
    VAR1.VAR10 = (unsigned long)&VAR20;
    VAR1.VAR12 = (sizeof(VAR20) + 0xfff) >> 12;
    VAR1.VAR13 = 1;
    VAR1.VAR14 = VAR15;
    VAR1.VAR16 = 0;
    VAR1.VAR17 = 1;
    VAR1.VAR18 = 0;
    VAR1.VAR19 = 1;
    FUN2(1, &VAR1, sizeof(VAR1));
    FUN2(0, &VAR2, sizeof(VAR2));
    {
        int VAR21;
        for (VAR21 = 0; VAR21 < 3; VAR21++)
            FUN3("", VAR21, VAR2[VAR21]);
    }
    asm volatile(""
                 :
                 : ""(FUN4(1)));
    VAR11[1] = 0xaa;
    VAR20[1] = 0x55;
    asm volatile(""
                 : ""(VAR3));
    FUN3("", VAR3);
    asm volatile(""
                 ""
                 ""
                 ""
                 : ""(VAR3)
                 : ""(FUN4(2)));
    FUN3("", VAR3);
    VAR5 = 0xa5;
    asm volatile(""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 ""
                 : ""(VAR3), ""(VAR4)
                 : ""(FUN4(1)), ""(&VAR5));
    FUN3("", VAR3);
    FUN3("", VAR4);
    VAR8.VAR7 = FUN4(2);
    VAR8.VAR6 = 0xabcdef12;
    asm volatile(""
                 ""
                 : ""(VAR3), ""(VAR4)
                 : ""(VAR8));
    FUN3("", VAR4, VAR3);
    FUN5("", "", FUN4(2), 0x0100);
    FUN5("", "", FUN4(2), 0x0100);
    FUN5("", "", FUN4(2), 0);
    FUN5("", "", FUN4(2), 0);
    FUN5("", "", 0xfff8, 0);
    FUN5("", "", 0xfff8, 0);
    FUN5("", "", 0xfff8, 0);
    FUN5("", "", 0xfff8, 0);
    FUN6("", "", 0x12345678 | 3, 0x762123c | 1);
    FUN6("", "", 0x12345678 | 1, 0x762123c | 3);
    FUN6("", "", 0x12345678 | 1, 0x762123c | 1);
}