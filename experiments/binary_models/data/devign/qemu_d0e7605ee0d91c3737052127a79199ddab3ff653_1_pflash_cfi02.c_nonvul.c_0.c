VAR1 *FUN1(target_phys_addr_t VAR2, ram_addr_t VAR3, VAR4 *VAR5, uint32_t VAR6, int VAR7, int VAR8, int VAR9, uint16_t VAR10, uint16_t VAR11, uint16_t VAR12, uint16_t VAR13, uint16_t VAR14, uint16_t VAR15)
{
    VAR1 *VAR16;
    int32_t VAR17;
    int VAR18;
    VAR17 = VAR6 * VAR7;
    if (VAR19 != (8 * 1024 * 1024) && VAR19 != (16 * 1024 * 1024) && VAR19 != (32 * 1024 * 1024) && VAR19 != (64 * 1024 * 1024))
        return NULL;
    VAR16 = FUN2(sizeof(VAR1));
    VAR16->VAR20 = FUN3(VAR3);
    VAR16->VAR21 = FUN4(VAR22, VAR23, VAR16);
    VAR16->VAR3 = VAR3;
    VAR16->VAR2 = VAR2;
    VAR16->VAR17 = VAR17;
    VAR16->VAR24 = VAR8;
    FUN5(VAR16, 1);
    VAR16->VAR5 = VAR5;
    if (VAR16->VAR5)
    {
        VAR18 = FUN6(VAR16->VAR5, 0, VAR16->VAR20, VAR17 >> 9);
        if (VAR18 < 0)
        {
            FUN7(VAR16->VAR21);
            FUN8(VAR16);
            return NULL;
        }
    }
    VAR16->VAR25 = 1;
    VAR16->VAR25 = 0;
    VAR16->VAR26 = FUN9(VAR27, VAR28, VAR16);
    VAR16->VAR6 = VAR6;
    VAR16->VAR9 = VAR9;
    VAR16->VAR29 = 0;
    VAR16->VAR30 = 0;
    VAR16->VAR31 = 0;
    VAR16->VAR32[0] = VAR10;
    VAR16->VAR32[1] = VAR11;
    VAR16->VAR32[2] = VAR12;
    VAR16->VAR32[3] = VAR13;
    VAR16->VAR33[0] = VAR14;
    VAR16->VAR33[1] = VAR15;
    VAR16->VAR34 = 0x52;
    VAR16->VAR35[0x10] = '';
    VAR16->VAR35[0x11] = '';
    VAR16->VAR35[0x12] = '';
    VAR16->VAR35[0x13] = 0x02;
    VAR16->VAR35[0x14] = 0x00;
    VAR16->VAR35[0x15] = 0x31;
    VAR16->VAR35[0x16] = 0x00;
    VAR16->VAR35[0x17] = 0x00;
    VAR16->VAR35[0x18] = 0x00;
    VAR16->VAR35[0x19] = 0x00;
    VAR16->VAR35[0x1A] = 0x00;
    VAR16->VAR35[0x1B] = 0x27;
    VAR16->VAR35[0x1C] = 0x36;
    VAR16->VAR35[0x1D] = 0x00;
    VAR16->VAR35[0x1E] = 0x00;
    VAR16->VAR35[0x1F] = 0x07;
    VAR16->VAR35[0x20] = 0x00;
    VAR16->VAR35[0x21] = 0x09;
    VAR16->VAR35[0x22] = 0x0C;
    VAR16->VAR35[0x23] = 0x01;
    VAR16->VAR35[0x24] = 0x00;
    VAR16->VAR35[0x25] = 0x0A;
    VAR16->VAR35[0x26] = 0x0D;
    VAR16->VAR35[0x27] = FUN10(VAR17);
    VAR16->VAR35[0x28] = 0x02;
    VAR16->VAR35[0x29] = 0x00;
    VAR16->VAR35[0x2A] = 0x00;
    VAR16->VAR35[0x2B] = 0x00;
    VAR16->VAR35[0x2C] = 0x01;
    VAR16->VAR35[0x2D] = VAR7 - 1;
    VAR16->VAR35[0x2E] = (VAR7 - 1) >> 8;
    VAR16->VAR35[0x2F] = VAR6 >> 8;
    VAR16->VAR35[0x30] = VAR6 >> 16;
    VAR16->VAR35[0x31] = '';
    VAR16->VAR35[0x32] = '';
    VAR16->VAR35[0x33] = '';
    VAR16->VAR35[0x34] = '';
    VAR16->VAR35[0x35] = '';
    VAR16->VAR35[0x36] = 0x00;
    VAR16->VAR35[0x37] = 0x00;
    VAR16->VAR35[0x38] = 0x00;
    VAR16->VAR35[0x39] = 0x00;
    VAR16->VAR35[0x3a] = 0x00;
    VAR16->VAR35[0x3b] = 0x00;
    VAR16->VAR35[0x3c] = 0x00;
    return VAR16;
}