static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8 = &VAR6->VAR9;
    VAR10 *VAR11;
    ssize_t VAR12;
    while ((VAR11 = FUN2(VAR8)))
    {
        struct
        {
            uint32_t VAR13;
            uint8_t VAR14;
            uint16_t VAR15;
        } QEMU_PACKED VAR16;
        VAR17 *VAR18;
        VAR18 = FUN3(VAR4, sizeof(VAR17));
        if (!VAR18)
        {
            FUN4(VAR11);
            break;
        }
        FUN5(VAR18->VAR19 == 0 || VAR18->VAR20 == 0);
        FUN6(sizeof VAR16 != 7);
        VAR6->VAR21[VAR11->VAR22] = VAR18;
        VAR12 = FUN7(VAR18->VAR23, VAR18->VAR19, 0, &VAR16, sizeof VAR16);
        FUN5(VAR12 != sizeof VAR16);
        VAR11->VAR24 = FUN8(VAR16.VAR13);
        VAR11->VAR14 = VAR16.VAR14;
        VAR11->VAR25 = FUN9(VAR16.VAR15);
        FUN10(&VAR11->VAR26);
        FUN11(VAR11);
    }
}