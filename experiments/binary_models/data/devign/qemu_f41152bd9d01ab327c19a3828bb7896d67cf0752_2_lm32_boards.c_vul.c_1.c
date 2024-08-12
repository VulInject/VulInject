static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = FUN2();
    VAR11 *VAR13 = FUN3(VAR11, 1);
    VAR14 *VAR15, VAR16[32];
    VAR17 *VAR18;
    int VAR19;
    hwaddr VAR20 = 0x04000000;
    size_t VAR21 = 256 * 1024;
    size_t VAR22 = 32 * 1024 * 1024;
    hwaddr VAR23 = 0x08000000;
    size_t VAR24 = 64 * 1024 * 1024;
    hwaddr VAR25 = 0x80002000;
    hwaddr VAR26 = 0x80006000;
    hwaddr VAR27 = 0x8000a000;
    int VAR28 = 0;
    int VAR29 = 1;
    int VAR30 = 3;
    VAR18 = FUN4(sizeof(VAR17));
    if (VAR3 == NULL)
    {
        VAR3 = "";
        VAR6 = FUN5(VAR3);
        VAR8 = &VAR6->VAR8;
        VAR18->VAR6 = VAR6;
        VAR18->VAR20 = VAR20;
        FUN6(VAR13, NULL, "", VAR24);
        FUN7(VAR13);
        FUN8(VAR12, VAR23, VAR13);
        VAR10 = FUN9(VAR31, 0, 0);
        FUN10(VAR20, NULL, "", VAR22, VAR10 ? VAR10->VAR32 : NULL, VAR21, VAR22 / VAR21, 1, 2, 0x01, 0x7e, 0x43, 0x00, 0x555, 0x2aa, 1);
        VAR15 = FUN11(VAR33, VAR6, 1);
        VAR8->VAR34 = FUN12(*VAR15);
        for (VAR19 = 0; VAR19 < 32; VAR19++)
        {
            VAR16[VAR19] = FUN13(VAR8->VAR34, VAR19);
            FUN14("", VAR26, VAR16[VAR28]);
            FUN14("", VAR25, VAR16[VAR29]);
            FUN14("", VAR27, VAR16[VAR30]);
            VAR8->VAR35 = FUN15();
            VAR18->VAR36 = VAR20;
            if (VAR4)
            {
                uint64_t VAR37;
                int VAR38;
                VAR38 = FUN16(VAR4, NULL, NULL, &VAR37, NULL, NULL, 1, VAR39, 0);
                VAR18->VAR36 = VAR37;
                if (VAR38 < 0)
                {
                    VAR38 = FUN17(VAR4, VAR23, VAR24);
                    VAR18->VAR36 = VAR23;
                    if (VAR38 < 0)
                    {
                        fprintf(VAR40, "", VAR4);
                        FUN18(VAR41, VAR18)