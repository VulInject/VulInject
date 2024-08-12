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
    }
    FUN2(0x3c0, 16, 1, VAR25, VAR2);
    FUN2(0x3b4, 2, 1, VAR25, VAR2);
    FUN2(0x3d4, 2, 1, VAR25, VAR2);
    FUN2(0x3ba, 1, 1, VAR25, VAR2);
    FUN2(0x3da, 1, 1, VAR25, VAR2);
    FUN3(0x3c0, 16, 1, VAR26, VAR2);
    FUN3(0x3b4, 2, 1, VAR26, VAR2);
    FUN3(0x3d4, 2, 1, VAR26, VAR2);
    FUN3(0x3ba, 1, 1, VAR26, VAR2);
    FUN3(0x3da, 1, 1, VAR26, VAR2);
    VAR2->VAR27 = FUN4(0, VAR28, VAR29, VAR2);
    FUN5(VAR30 + 0x000a0000, 0x20000, VAR2->VAR27);
    VAR2->VAR31[0x06] = 0x0f;
    if (VAR3 == VAR32)
    {
        VAR2->VAR31[0x1F] = 0x2d;
        VAR2->VAR33[0x18] = 0x0f;
        VAR2->VAR31[0x0f] = 0x98;
        VAR2->VAR31[0x17] = 0x20;
        VAR2->VAR31[0x15] = 0x04;
        VAR2->VAR34 = 4096 * 1024;
        VAR2->VAR31[0x0f] = 0x18;
        VAR2->VAR31[0x17] = 0x20;
        VAR2->VAR31[0x15] = 0x03;
        VAR2->VAR34 = 2048 * 1024;
    }
    else
    {
        VAR2->VAR31[0x1F] = 0x22;
        VAR2->VAR31[0x0F] = VAR35;
        if (VAR4)
            VAR2->VAR31[0x17] = VAR36;
        else
            VAR2->VAR31[0x17] = VAR37;
        VAR2->VAR34 = 2048 * 1024;
        VAR2->VAR31[0x15] = 0x03;
    }
    VAR2->VAR38[0x27] = VAR3;
    memset(VAR2->VAR39, 0xff, VAR2->VAR34);
    VAR2->VAR40 = 5;
    VAR2->VAR41 = 0;
    VAR2->VAR42 = FUN4(0, VAR43, VAR44, VAR2);
    VAR2->VAR44 = FUN6(VAR2->VAR42);
    VAR2->VAR45 = FUN4(0, VAR46, VAR47, VAR2);
    VAR2->VAR48 = FUN4(0, VAR49, VAR50, VAR2);
    VAR2->VAR51 = VAR2->VAR34 - 1;
    VAR2->VAR52 = VAR2->VAR34 - 256;
    VAR2->VAR53 = VAR54;
    VAR2->VAR55 = VAR56;
    VAR2->VAR57 = VAR58;
    VAR2->VAR59 = VAR60;
    VAR2->VAR61 = VAR62;
    FUN7("", 0, 2, VAR63, VAR64, VAR2);