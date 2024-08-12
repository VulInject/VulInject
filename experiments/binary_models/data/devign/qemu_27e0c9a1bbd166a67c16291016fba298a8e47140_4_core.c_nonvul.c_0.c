static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    uint32_t VAR5;
    VAR4 = (VAR3 *)VAR2->VAR6;
    if (VAR2->VAR7)
        goto VAR8;
    memset(VAR4, 0, sizeof(VAR2->VAR6));
    VAR5 = VAR2->VAR9 * VAR2->VAR10 * VAR2->VAR11;
    FUN2(VAR4 + 0, 0x848a);
    FUN2(VAR4 + 1, VAR2->VAR9);
    FUN2(VAR4 + 3, VAR2->VAR10);
    FUN2(VAR4 + 6, VAR2->VAR11);
    FUN2(VAR4 + 7, VAR2->VAR12 >> 16);
    FUN2(VAR4 + 8, VAR2->VAR12);
    FUN3((char *)(VAR4 + 10), VAR2->VAR13, 20);
    FUN2(VAR4 + 22, 0x0004);
    FUN3((char *)(VAR4 + 23), VAR2->VAR14, 8);
    FUN3((char *)(VAR4 + 27), VAR2->VAR15, 40);
    FUN2(VAR4 + 47, 0x8000 | VAR16);
    FUN2(VAR4 + 47, 0x0000);
    FUN2(VAR4 + 49, 0x0f00);
    FUN2(VAR4 + 51, 0x0002);
    FUN2(VAR4 + 52, 0x0001);
    FUN2(VAR4 + 53, 0x0003);
    FUN2(VAR4 + 54, VAR2->VAR9);
    FUN2(VAR4 + 55, VAR2->VAR10);
    FUN2(VAR4 + 56, VAR2->VAR11);
    FUN2(VAR4 + 57, VAR5);
    FUN2(VAR4 + 58, VAR5 >> 16);
    if (VAR2->VAR17)
        FUN2(VAR4 + 59, 0x100 | VAR2->VAR17);
    FUN2(VAR4 + 60, VAR2->VAR12);
    FUN2(VAR4 + 61, VAR2->VAR12 >> 16);
    FUN2(VAR4 + 63, 0x0203);
    FUN2(VAR4 + 64, 0x0001);
    FUN2(VAR4 + 65, 0x0096);
    FUN2(VAR4 + 66, 0x0096);
    FUN2(VAR4 + 68, 0x00b4);
    FUN2(VAR4 + 82, 0x400c);
    FUN2(VAR4 + 83, 0x7068);
    FUN2(VAR4 + 84, 0x4000);
    FUN2(VAR4 + 85, 0x000c);
    FUN2(VAR4 + 86, 0x7044);
    FUN2(VAR4 + 87, 0x4000);
    FUN2(VAR4 + 91, 0x4060);
    FUN2(VAR4 + 129, 0x0002);
    FUN2(VAR4 + 130, 0x0005);
    FUN2(VAR4 + 131, 0x0001);
    FUN2(VAR4 + 132, 0x0000);
    FUN2(VAR4 + 160, 0x8100);
    FUN2(VAR4 + 161, 0x8001);
    VAR2->VAR7 = 1;
VAR8:
    memcpy(VAR2->VAR18, VAR4, sizeof(VAR2->VAR6));
}