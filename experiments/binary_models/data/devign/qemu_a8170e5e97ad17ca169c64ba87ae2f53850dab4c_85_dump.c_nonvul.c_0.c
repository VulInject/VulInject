static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, hwaddr VAR6)
{
    Elf32_Phdr VAR7;
    int VAR8;
    int VAR9 = VAR2->VAR10.VAR11;
    memset(&VAR7, 0, sizeof(VAR12));
    VAR7.VAR13 = FUN2(VAR14, VAR9);
    VAR7.VAR15 = FUN2(VAR6, VAR9);
    VAR7.VAR16 = FUN2(VAR4->VAR17, VAR9);
    if (VAR6 == -1)
    {
        VAR7.VAR18 = 0;
    }
    else
    {
        VAR7.VAR18 = FUN2(VAR4->VAR19, VAR9);
    }
    VAR7.VAR20 = FUN2(VAR4->VAR19, VAR9);
    VAR7.VAR21 = FUN2(VAR4->VAR22, VAR9);
    VAR8 = FUN3(&VAR7, sizeof(VAR12), VAR2);
    if (VAR8 < 0)
    {
        FUN4(VAR2, "");
        return -1;
    }
    return 0;
}