static void FUN1(void)
{
    int VAR1, VAR2[8] = {
               [VAR3] = VAR4,
               [VAR5] = VAR6,
               [VAR7] = VAR8,
               [VAR9] = VAR10,
               [VAR11] = VAR12,
               [VAR13] = VAR14,
               [VAR15] = VAR16,
               [VAR17] = VAR18,
           };
    FUN2();
    FUN3();
    FUN4(VAR19, VAR20);
    FUN5(VAR19, VAR21);
    FUN6();
    FUN7(VAR19, VAR21);
    FUN8();
    FUN9();
    FUN10(VAR19, VAR20);
    for (VAR1 = 0; VAR1 < 64; VAR1++)
    {
        FUN11(VAR1, VAR2[VAR1 & 7], VAR2[VAR1 >> 3]);
    }
    for (VAR1 = 64; VAR1 < VAR22; VAR1++)
    {
        FUN11(VAR1, VAR18, VAR4);
    }
    VAR23;
    VAR24;
    VAR25;
    VAR26;
    VAR27[''] = '';
    VAR27[0x04] = VAR28;
    VAR27[0x0a] = VAR29;
    VAR27[0x0b] = VAR30;
    VAR27[0x18] = VAR31;
    VAR27[0x19] = VAR32;
    VAR27[0x9c] = VAR33;
    VAR27[0xb0] = VAR34;
    VAR27[0xb1] = VAR35;
    VAR27[0xb3] = VAR36;
    VAR27[0xb4] = VAR37;
    VAR27[0xbf] = VAR38;
    VAR27[0xc0] = VAR39;
    VAR27[0xc1] = VAR40;
    VAR27[0xc2] = VAR41;
    VAR27[0xc3] = VAR42;
    VAR27[0xc4] = VAR43;
    VAR27[0xc5] = VAR44;
    VAR27[0xce] = VAR45;
    VAR27[0xd8] = VAR46;
    VAR27[0xd9] = VAR47;
    VAR27[0xda] = VAR48;
    VAR27[0xdb] = VAR49;
    VAR27[0xe3] = VAR50;
    VAR27[0xf1] = VAR51;
    VAR27[0xf2] = VAR52;
    VAR27[0xf3] = VAR53;
    VAR27[0xf8] = VAR54;
    VAR27[0xfe] = VAR55;
}