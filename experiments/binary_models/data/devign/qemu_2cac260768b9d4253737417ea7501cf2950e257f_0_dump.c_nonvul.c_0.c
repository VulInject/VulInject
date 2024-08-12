static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, hwaddr VAR6, hwaddr VAR7)
{
    Elf64_Phdr VAR8;
    int VAR9;
    int VAR10 = VAR2->VAR11.VAR12;
    memset(&VAR8, 0, sizeof(VAR13));
    VAR8.VAR14 = FUN2(VAR15, VAR10);
    VAR8.VAR16 = FUN3(VAR6, VAR10);
    VAR8.VAR17 = FUN3(VAR4->VAR18, VAR10);
    VAR8.VAR19 = FUN3(VAR7, VAR10);
    VAR8.VAR20 = FUN3(VAR4->VAR21, VAR10);
    VAR8.VAR22 = FUN3(VAR4->VAR23, VAR10);
    assert(VAR4->VAR21 >= VAR7);
    VAR9 = FUN4(&VAR8, sizeof(VAR13), VAR2);
    if (VAR9 < 0)
    {
        FUN5(VAR2, "");
        return -1;
    }
    return 0;
}