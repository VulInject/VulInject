static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    uint64_t VAR7;
    int VAR8;
    uint64_t VAR9, VAR10;
    int VAR11;
    VAR3 *VAR12 = NULL;
    VAR7 = VAR6->VAR13 * VAR6->VAR14;
    VAR11 = VAR6->VAR15 ? (VAR6->VAR16 / VAR6->VAR15) : 1;
    VAR9 = VAR6->VAR14 / VAR11;
    VAR10 = VAR6->VAR13 * VAR9;
    if (VAR7 != (8 * 1024 * 1024) && VAR7 != (16 * 1024 * 1024) && VAR7 != (32 * 1024 * 1024) && VAR7 != (64 * 1024 * 1024))
        return NULL;
    FUN3(&VAR6->VAR17, FUN4(VAR2), VAR6->VAR18 ? &VAR19 : &VAR20, VAR6, VAR6->VAR21, VAR7, &VAR12);
    if (VAR12)
    {
        FUN5(VAR4, VAR12);
        return;
    }
    FUN6(&VAR6->VAR17, FUN7(VAR6));
    VAR6->VAR22 = FUN8(&VAR6->VAR17);
    FUN9(FUN10(VAR2), &VAR6->VAR17);
    if (VAR6->VAR23)
    {
        VAR8 = FUN11(VAR6->VAR23, 0, VAR6->VAR22, VAR7 >> 9);
        if (VAR8 < 0)
        {
            FUN12(&VAR6->VAR17, FUN7(VAR6));
            FUN13(VAR4, "");
            return;
        }
    }
    if (VAR6->VAR23)
    {
        VAR6->VAR24 = FUN14(VAR6->VAR23);
    }
    else
    {
        VAR6->VAR24 = 0;
    }
    if (!VAR6->VAR25)
    {
        VAR6->VAR25 = VAR6->VAR15;
    }
    VAR6->VAR26 = FUN15(VAR27, VAR28, VAR6);
    VAR6->VAR29 = 0;
    VAR6->VAR30 = 0;
    VAR6->VAR31 = 0;
    VAR6->VAR32 = 0x52;
    VAR6->VAR33[0x10] = '';
    VAR6->VAR33[0x11] = '';
    VAR6->VAR33[0x12] = '';
    VAR6->VAR33[0x13] = 0x01;
    VAR6->VAR33[0x14] = 0x00;
    VAR6->VAR33[0x15] = 0x31;
    VAR6->VAR33[0x16] = 0x00;
    VAR6->VAR33[0x17] = 0x00;
    VAR6->VAR33[0x18] = 0x00;
    VAR6->VAR33[0x19] = 0x00;
    VAR6->VAR33[0x1A] = 0x00;
    VAR6->VAR33[0x1B] = 0x45;
    VAR6->VAR33[0x1C] = 0x55;
    VAR6->VAR33[0x1D] = 0x00;
    VAR6->VAR33[0x1E] = 0x00;
    VAR6->VAR33[0x1F] = 0x07;
    VAR6->VAR33[0x20] = 0x07;
    VAR6->VAR33[0x21] = 0x0a;
    VAR6->VAR33[0x22] = 0x00;
    VAR6->VAR33[0x23] = 0x04;
    VAR6->VAR33[0x24] = 0x04;
    VAR6->VAR33[0x25] = 0x04;
    VAR6->VAR33[0x26] = 0x00;
    VAR6->VAR33[0x27] = FUN16(VAR10);
    VAR6->VAR33[0x28] = 0x02;
    VAR6->VAR33[0x29] = 0x00;
    if (VAR6->VAR16 == 1)
    {
        VAR6->VAR33[0x2A] = 0x08;
    }
    else
    {
        VAR6->VAR33[0x2A] = 0x0B;
    }
    VAR6->VAR34 = 1 << VAR6->VAR33[0x2A];
    VAR6->VAR33[0x2B] = 0x00;
    VAR6->VAR33[0x2C] = 0x01;
    VAR6->VAR33[0x2D] = VAR9 - 1;
    VAR6->VAR33[0x2E] = (VAR9 - 1) >> 8;
    VAR6->VAR33[0x2F] = VAR6->VAR13 >> 8;
    VAR6->VAR33[0x30] = VAR6->VAR13 >> 16;
    VAR6->VAR33[0x31] = '';
    VAR6->VAR33[0x32] = '';
    VAR6->VAR33[0x33] = '';
    VAR6->VAR33[0x34] = '';
    VAR6->VAR33[0x35] = '';
    VAR6->VAR33[0x36] = 0x00;
    VAR6->VAR33[0x37] = 0x00;
    VAR6->VAR33[0x38] = 0x00;
    VAR6->VAR33[0x39] = 0x00;
    VAR6->VAR33[0x3a] = 0x00;
    VAR6->VAR33[0x3b] = 0x00;
    VAR6->VAR33[0x3c] = 0x00;
    VAR6->VAR33[0x3f] = 0x01;
}