VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8;
    VAR5 = FUN2(sizeof(VAR4));
    VAR5->VAR9 = FUN3(VAR10, VAR11, VAR3, 0, 2);
    FUN4(0xcf8, 4, 4, VAR12, VAR5);
    FUN5(0xcf8, 4, 4, VAR13, VAR5);
    FUN4(0xcfc, 4, 1, VAR14, VAR5);
    FUN4(0xcfc, 4, 2, VAR15, VAR5);
    FUN4(0xcfc, 4, 4, VAR16, VAR5);
    FUN5(0xcfc, 4, 1, VAR17, VAR5);
    FUN5(0xcfc, 4, 2, VAR18, VAR5);
    FUN5(0xcfc, 4, 4, VAR19, VAR5);
    VAR8 = FUN6(0, VAR20, VAR21, VAR5);
    FUN7(0x80800000, 0x00400000, VAR8);
    VAR7 = FUN8(VAR5->VAR9, "", sizeof(VAR6), 0, NULL, NULL);
    VAR7->VAR22[0x00] = 0x57;
    VAR7->VAR22[0x01] = 0x10;
    VAR7->VAR22[0x02] = 0x01;
    VAR7->VAR22[0x03] = 0x48;
    VAR7->VAR22[0x08] = 0x00;
    VAR7->VAR22[0x0A] = 0x00;
    VAR7->VAR22[0x0B] = 0x06;
    VAR7->VAR22[0x0C] = 0x08;
    VAR7->VAR22[0x0D] = 0x10;
    VAR7->VAR22[0x0E] = 0x00;
    VAR7->VAR22[0x34] = 0x00;
    return VAR5->VAR9;
}