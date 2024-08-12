static void FUN1(const struct VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR3;
    hwaddr VAR4 = VAR2->VAR5;
    hwaddr VAR6;
    VAR6 = VAR4 + VAR7;
    FUN2(VAR6, 5);
    FUN2(VAR6, 0x54410001);
    FUN2(VAR6, 1);
    FUN2(VAR6, 0x1000);
    FUN2(VAR6, 0);
    FUN2(VAR6, 4);
    FUN2(VAR6, 0x54410002);
    FUN2(VAR6, VAR2->VAR8);
    FUN2(VAR6, VAR2->VAR5);
    if (VAR3)
    {
        FUN2(VAR6, 4);
        FUN2(VAR6, 0x54420005);
        FUN2(VAR6, VAR2->VAR5 + VAR9);
        FUN2(VAR6, VAR3);
    }
    if (VAR2->VAR10 && *VAR2->VAR10)
    {
        int VAR11;
        VAR11 = strlen(VAR2->VAR10);
        FUN3(VAR6 + 8, (void *)VAR2->VAR10, VAR11 + 1);
        VAR11 = (VAR11 >> 2) + 1;
        FUN2(VAR6, VAR11 + 2);
        FUN2(VAR6, 0x54410009);
        VAR6 += VAR11 * 4;
    }
    if (VAR2->VAR12)
    {
        int VAR13;
        uint8_t VAR14[0x1000];
        VAR13 = (VAR2->FUN4(VAR2, VAR14) + 3) & ~3;
        FUN2(VAR6, (VAR13 + 8) >> 2);
        FUN2(VAR6, 0x414f4d50);
        FUN3(VAR6, VAR14, VAR13);
        VAR6 += VAR13;
    }
    FUN2(VAR6, 0);
    FUN2(VAR6, 0);
}