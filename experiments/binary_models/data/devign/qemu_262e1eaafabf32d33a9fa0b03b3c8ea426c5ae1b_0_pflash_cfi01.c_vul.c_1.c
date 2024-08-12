VAR1 *FUN1(target_phys_addr_t VAR2, VAR3 *VAR4, const char *VAR5, target_phys_addr_t VAR6, VAR7 *VAR8, uint32_t VAR9, int VAR10, int VAR11, uint16_t VAR12, uint16_t VAR13, uint16_t VAR14, uint16_t VAR15, int VAR16)
{
    VAR1 *VAR17;
    target_phys_addr_t VAR18;
    int VAR19;
    VAR18 = VAR9 * VAR10;
    if (VAR18 != (8 * 1024 * 1024) && VAR18 != (16 * 1024 * 1024) && VAR18 != (32 * 1024 * 1024) && VAR18 != (64 * 1024 * 1024))
        return NULL;
    VAR17 = FUN2(sizeof(VAR1));
    FUN3(&VAR17->VAR20, VAR16 ? &VAR21 : &VAR22, VAR17, VAR5, VAR6);
    FUN4(&VAR17->VAR20, VAR4);
    VAR17->VAR23 = FUN5(&VAR17->VAR20);
    FUN6(FUN7(), VAR2, &VAR17->VAR20);
    VAR17->VAR8 = VAR8;
    if (VAR17->VAR8)
    {
        VAR19 = FUN8(VAR17->VAR8, 0, VAR17->VAR23, VAR18 >> 9);
        if (VAR19 < 0)
        {
            FUN9(FUN7(), &VAR17->VAR20);
            FUN10(&VAR17->VAR20, VAR4);
            FUN11(&VAR17->VAR20);
            FUN12(VAR17);
            return NULL;
        }
        FUN13(VAR17->VAR8, VAR17);
    }
    if (VAR17->VAR8)
    {
        VAR17->VAR24 = FUN14(VAR17->VAR8);
    }
    else
    {
        VAR17->VAR24 = 0;
    }
    VAR17->VAR25 = FUN15(VAR26, VAR27, VAR17);
    VAR17->VAR2 = VAR2;
    VAR17->VAR9 = VAR9;
    VAR17->VAR18 = VAR18;
    VAR17->VAR11 = VAR11;
    VAR17->VAR28 = 0;
    VAR17->VAR29 = 0;
    VAR17->VAR30 = 0;
    VAR17->VAR31[0] = VAR12;
    VAR17->VAR31[1] = VAR13;
    VAR17->VAR31[2] = VAR14;
    VAR17->VAR31[3] = VAR15;
    VAR17->VAR32 = 0x52;
    VAR17->VAR33[0x10] = '';
    VAR17->VAR33[0x11] = '';
    VAR17->VAR33[0x12] = '';
    VAR17->VAR33[0x13] = 0x01;
    VAR17->VAR33[0x14] = 0x00;
    VAR17->VAR33[0x15] = 0x31;
    VAR17->VAR33[0x16] = 0x00;
    VAR17->VAR33[0x17] = 0x00;
    VAR17->VAR33[0x18] = 0x00;
    VAR17->VAR33[0x19] = 0x00;
    VAR17->VAR33[0x1A] = 0x00;
    VAR17->VAR33[0x1B] = 0x45;
    VAR17->VAR33[0x1C] = 0x55;
    VAR17->VAR33[0x1D] = 0x00;
    VAR17->VAR33[0x1E] = 0x00;
    VAR17->VAR33[0x1F] = 0x07;
    VAR17->VAR33[0x20] = 0x07;
    VAR17->VAR33[0x21] = 0x0a;
    VAR17->VAR33[0x22] = 0x00;
    VAR17->VAR33[0x23] = 0x04;
    VAR17->VAR33[0x24] = 0x04;
    VAR17->VAR33[0x25] = 0x04;
    VAR17->VAR33[0x26] = 0x00;
    VAR17->VAR33[0x27] = FUN16(VAR18);
    VAR17->VAR33[0x28] = 0x02;
    VAR17->VAR33[0x29] = 0x00;
    if (VAR11 == 1)
    {
        VAR17->VAR33[0x2A] = 0x08;
    }
    else
    {
        VAR17->VAR33[0x2A] = 0x0B;
    }
    VAR17->VAR34 = 1 << VAR17->VAR33[0x2A];
    VAR17->VAR33[0x2B] = 0x00;
    VAR17->VAR33[0x2C] = 0x01;
    VAR17->VAR33[0x2D] = VAR10 - 1;
    VAR17->VAR33[0x2E] = (VAR10 - 1) >> 8;
    VAR17->VAR33[0x2F] = VAR9 >> 8;
    VAR17->VAR33[0x30] = VAR9 >> 16;
    VAR17->VAR33[0x31] = '';
    VAR17->VAR33[0x32] = '';
    VAR17->VAR33[0x33] = '';
    VAR17->VAR33[0x34] = '';
    VAR17->VAR33[0x35] = '';
    VAR17->VAR33[0x36] = 0x00;
    VAR17->VAR33[0x37] = 0x00;
    VAR17->VAR33[0x38] = 0x00;
    VAR17->VAR33[0x39] = 0x00;
    VAR17->VAR33[0x3a] = 0x00;
    VAR17->VAR33[0x3b] = 0x00;
    VAR17->VAR33[0x3c] = 0x00;
    return VAR17;
}