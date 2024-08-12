static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    unsigned int VAR5;
    memset(VAR2->VAR6, 0, 512);
    VAR4 = (VAR3 *)VAR2->VAR6;
    FUN2(VAR4 + 0, 0x0040);
    FUN2(VAR4 + 1, VAR2->VAR7);
    FUN2(VAR4 + 3, VAR2->VAR8);
    FUN2(VAR4 + 4, 512 * VAR2->VAR9);
    FUN2(VAR4 + 5, 512);
    FUN2(VAR4 + 6, VAR2->VAR9);
    FUN2(VAR4 + 20, 3);
    FUN2(VAR4 + 21, 512);
    FUN2(VAR4 + 22, 4);
    FUN3((VAR10 *)(VAR4 + 27), "", 40);
    FUN2(VAR4 + 47, VAR11);
    FUN2(VAR4 + 48, 1);
    FUN2(VAR4 + 49, 1 << 9);
    FUN2(VAR4 + 51, 0x200);
    FUN2(VAR4 + 52, 0x200);
    FUN2(VAR4 + 54, VAR2->VAR7);
    FUN2(VAR4 + 55, VAR2->VAR8);
    FUN2(VAR4 + 56, VAR2->VAR9);
    VAR5 = VAR2->VAR7 * VAR2->VAR8 * VAR2->VAR9;
    FUN2(VAR4 + 57, VAR5);
    FUN2(VAR4 + 58, VAR5 >> 16);
    if (VAR2->VAR12)
        FUN2(VAR4 + 59, 0x100 | VAR2->VAR12);
    FUN2(VAR4 + 60, VAR2->VAR13);
    FUN2(VAR4 + 61, VAR2->VAR13 >> 16);
    FUN2(VAR4 + 80, (1 << 1) | (1 << 2));
    FUN2(VAR4 + 82, (1 << 14));
    FUN2(VAR4 + 83, (1 << 14));
    FUN2(VAR4 + 84, (1 << 14));
    FUN2(VAR4 + 85, (1 << 14));
    FUN2(VAR4 + 86, 0);
    FUN2(VAR4 + 87, (1 << 14));
}