static int FUN1(VAR1 *VAR2)
{
    hwaddr VAR3 = VAR2->VAR4 - VAR2->VAR5;
    Elf32_Phdr VAR6;
    int VAR7 = VAR2->VAR8.VAR9;
    int VAR10;
    memset(&VAR6, 0, sizeof(VAR11));
    VAR6.VAR12 = FUN2(VAR13, VAR7);
    VAR6.VAR14 = FUN2(VAR3, VAR7);
    VAR6.VAR15 = 0;
    VAR6.VAR16 = FUN2(VAR2->VAR5, VAR7);
    VAR6.VAR17 = FUN2(VAR2->VAR5, VAR7);
    VAR6.VAR18 = 0;
    VAR10 = FUN3(&VAR6, sizeof(VAR11), VAR2);
    if (VAR10 < 0)
    {
        FUN4(VAR2, "");
        return -1;
    }
    return 0;
}