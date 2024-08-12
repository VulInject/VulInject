static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (VAR2->VAR5)
    {
        memcpy(VAR2->VAR6, VAR2->VAR7, sizeof(VAR2->VAR7));
        return;
    }
    memset(VAR2->VAR6, 0, 512);
    VAR4 = (VAR3 *)VAR2->VAR6;
    FUN2(VAR4 + 0, (2 << 14) | (5 << 8) | (1 << 7) | (2 << 5) | (0 << 0));
    FUN3((char *)(VAR4 + 10), VAR2->VAR8, 20);
    FUN2(VAR4 + 20, 3);
    FUN2(VAR4 + 21, 512);
    FUN2(VAR4 + 22, 4);
    FUN3((char *)(VAR4 + 23), VAR2->VAR9, 8);
    FUN3((char *)(VAR4 + 27), VAR2->VAR10, 40);
    FUN2(VAR4 + 48, 1);
    FUN2(VAR4 + 49, 1 << 9 | 1 << 8);
    FUN2(VAR4 + 53, 7);
    FUN2(VAR4 + 62, 7);
    FUN2(VAR4 + 63, 7);
    FUN2(VAR4 + 49, 1 << 9);
    FUN2(VAR4 + 53, 3);
    FUN2(VAR4 + 63, 0x103);
    FUN2(VAR4 + 64, 3);
    FUN2(VAR4 + 65, 0xb4);
    FUN2(VAR4 + 66, 0xb4);
    FUN2(VAR4 + 67, 0x12c);
    FUN2(VAR4 + 68, 0xb4);
    FUN2(VAR4 + 71, 30);
    FUN2(VAR4 + 72, 30);
    if (VAR2->VAR11)
    {
        FUN2(VAR4 + 75, VAR2->VAR11 - 1);
        FUN2(VAR4 + 76, (1 << 8));
    }
    FUN2(VAR4 + 80, 0x1e);
    FUN2(VAR4 + 88, 0x3f | (1 << 13));
    memcpy(VAR2->VAR7, VAR4, sizeof(VAR2->VAR7));
    VAR2->VAR5 = 1;
}