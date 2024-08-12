VAR1 *FUN1(target_phys_addr_t VAR2, ram_addr_t VAR3, VAR4 *VAR5, uint32_t VAR6, int VAR7, int VAR8, uint16_t VAR9, uint16_t VAR10, uint16_t VAR11, uint16_t VAR12)
{
    VAR1 *VAR13;
    target_phys_addr_t VAR14;
    int VAR15;
    VAR14 = VAR6 * VAR7;
    if (VAR14 != (8 * 1024 * 1024) && VAR14 != (16 * 1024 * 1024) && VAR14 != (32 * 1024 * 1024) && VAR14 != (64 * 1024 * 1024))
        return NULL;
    VAR13 = FUN2(sizeof(VAR1));
    VAR13->VAR16 = FUN3(VAR3);
    VAR13->VAR17 = FUN4(VAR18, VAR19, VAR13);
    VAR13->VAR3 = VAR3;
    FUN5(VAR2, VAR14, VAR3 | VAR13->VAR17 | VAR20);
    VAR13->VAR5 = VAR5;
    if (VAR13->VAR5)
    {
        VAR15 = FUN6(VAR13->VAR5, 0, VAR13->VAR16, VAR14 >> 9);
        if (VAR15 < 0)
        {
            FUN7(VAR13->VAR17);
            FUN8(VAR13);
            return NULL;
        }
    }
    VAR13->VAR21 = 1;
    VAR13->VAR21 = 0;
    VAR13->VAR22 = FUN9(VAR23, VAR24, VAR13);
    VAR13->VAR2 = VAR2;
    VAR13->VAR6 = VAR6;
    VAR13->VAR14 = VAR14;
    VAR13->VAR8 = VAR8;
    VAR13->VAR25 = 0;
    VAR13->VAR26 = 0;
    VAR13->VAR27 = 0;
    VAR13->VAR28[0] = VAR9;
    VAR13->VAR28[1] = VAR10;
    VAR13->VAR28[2] = VAR11;
    VAR13->VAR28[3] = VAR12;
    VAR13->VAR29 = 0x52;
    VAR13->VAR30[0x10] = '';
    VAR13->VAR30[0x11] = '';
    VAR13->VAR30[0x12] = '';
    VAR13->VAR30[0x13] = 0x01;
    VAR13->VAR30[0x14] = 0x00;
    VAR13->VAR30[0x15] = 0x31;
    VAR13->VAR30[0x16] = 0x00;
    VAR13->VAR30[0x17] = 0x00;
    VAR13->VAR30[0x18] = 0x00;
    VAR13->VAR30[0x19] = 0x00;
    VAR13->VAR30[0x1A] = 0x00;
    VAR13->VAR30[0x1B] = 0x45;
    VAR13->VAR30[0x1C] = 0x55;
    VAR13->VAR30[0x1D] = 0x00;
    VAR13->VAR30[0x1E] = 0x00;
    VAR13->VAR30[0x1F] = 0x07;
    VAR13->VAR30[0x20] = 0x07;
    VAR13->VAR30[0x21] = 0x0a;
    VAR13->VAR30[0x22] = 0x00;
    VAR13->VAR30[0x23] = 0x04;
    VAR13->VAR30[0x24] = 0x04;
    VAR13->VAR30[0x25] = 0x04;
    VAR13->VAR30[0x26] = 0x00;
    VAR13->VAR30[0x27] = FUN10(VAR14);
    VAR13->VAR30[0x28] = 0x02;
    VAR13->VAR30[0x29] = 0x00;
    VAR13->VAR30[0x2A] = 0x0B;
    VAR13->VAR30[0x2B] = 0x00;
    VAR13->VAR30[0x2C] = 0x01;
    VAR13->VAR30[0x2D] = VAR7 - 1;
    VAR13->VAR30[0x2E] = (VAR7 - 1) >> 8;
    VAR13->VAR30[0x2F] = VAR6 >> 8;
    VAR13->VAR30[0x30] = VAR6 >> 16;
    VAR13->VAR30[0x31] = '';
    VAR13->VAR30[0x32] = '';
    VAR13->VAR30[0x33] = '';
    VAR13->VAR30[0x34] = '';
    VAR13->VAR30[0x35] = '';
    VAR13->VAR30[0x36] = 0x00;
    VAR13->VAR30[0x37] = 0x00;
    VAR13->VAR30[0x38] = 0x00;
    VAR13->VAR30[0x39] = 0x00;
    VAR13->VAR30[0x3a] = 0x00;
    VAR13->VAR30[0x3b] = 0x00;
    VAR13->VAR30[0x3c] = 0x00;
    return VAR13;
}