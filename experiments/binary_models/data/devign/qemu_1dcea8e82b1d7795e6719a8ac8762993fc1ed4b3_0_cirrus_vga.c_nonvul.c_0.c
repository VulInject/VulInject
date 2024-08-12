static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    static int VAR6;
    if (!VAR6)
    {
        VAR6 = 1;
        for (VAR5 = 0; VAR5 < 256; VAR5++)
            VAR7[VAR5] = VAR8;
        VAR7[VAR9] = 0;
        VAR7[VAR10] = 1;
        VAR7[VAR11] = 2;
        VAR7[VAR12] = 3;
        VAR7[VAR13] = 4;
        VAR7[VAR14] = 5;
        VAR7[VAR15] = 6;
        VAR7[VAR16] = 7;
        VAR7[VAR17] = 8;
        VAR7[VAR18] = 9;
        VAR7[VAR19] = 10;
        VAR7[VAR20] = 11;
        VAR7[VAR21] = 12;
        VAR7[VAR22] = 13;
        VAR7[VAR23] = 14;
        VAR7[VAR24] = 15;
        VAR2->VAR3 = VAR3;
        if (VAR4)
            VAR2->VAR25 = VAR26;
        else
            VAR2->VAR25 = VAR27;
    }
    FUN2(0x3c0, 16, 1, VAR28, VAR2);
    FUN2(0x3b4, 2, 1, VAR28, VAR2);
    FUN2(0x3d4, 2, 1, VAR28, VAR2);
    FUN2(0x3ba, 1, 1, VAR28, VAR2);
    FUN2(0x3da, 1, 1, VAR28, VAR2);
    FUN3(0x3c0, 16, 1, VAR29, VAR2);
    FUN3(0x3b4, 2, 1, VAR29, VAR2);
    FUN3(0x3d4, 2, 1, VAR29, VAR2);
    FUN3(0x3ba, 1, 1, VAR29, VAR2);
    FUN3(0x3da, 1, 1, VAR29, VAR2);
    VAR2->VAR30 = FUN4(0, VAR31, VAR32, VAR2);
    FUN5(VAR33 + 0x000a0000, 0x20000, VAR2->VAR30);
    FUN6(VAR33 + 0x000a0000, 0x20000);
    VAR2->VAR34 = FUN4(0, VAR35, VAR36, VAR2);
    VAR2->VAR37 = FUN4(0, VAR38, VAR39, VAR2);
    VAR2->VAR40 = FUN4(0, VAR41, VAR42, VAR2);
    VAR2->VAR43 = (VAR2->VAR3 == VAR44) ? 4096 * 1024 : 2048 * 1024;
    VAR2->VAR45 = VAR2->VAR43 - 1;
    VAR2->VAR46 = VAR2->VAR43 - 256;
    VAR2->VAR47 = VAR48;
    VAR2->VAR49 = VAR50;
    VAR2->VAR51 = VAR52;
    VAR2->VAR53 = VAR54;
    VAR2->VAR55 = VAR56;
    FUN7(VAR57, VAR2);
    FUN8(VAR2);
    FUN9("", 0, 2, VAR58, VAR59, VAR2);
}