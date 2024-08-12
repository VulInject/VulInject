static int FUN1(VAR1 *VAR2)
{
    Elf64_Phdr VAR3;
    int VAR4 = VAR2->VAR5.VAR6;
    hwaddr VAR7 = VAR2->VAR8 - VAR2->VAR9;
    int VAR10;
    memset(&VAR3, 0, sizeof(VAR11));
    VAR3.VAR12 = FUN2(VAR13, VAR4);
    VAR3.VAR14 = FUN3(VAR7, VAR4);
    VAR3.VAR15 = 0;
    VAR3.VAR16 = FUN3(VAR2->VAR9, VAR4);
    VAR3.VAR17 = FUN3(VAR2->VAR9, VAR4);
    VAR3.VAR18 = 0;
    VAR10 = FUN4(&VAR3, sizeof(VAR11), VAR2);
    if (VAR10 < 0)
    {
        FUN5(VAR2, "");
        return -1;
    }
    return 0;
}