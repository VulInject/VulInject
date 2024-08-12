static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, target_ulong VAR7, uint32_t VAR8, target_ulong VAR9)
{
    struct tm VAR10;
    if (VAR8 != 8)
    {
        FUN2(VAR9, 0, VAR11);
        return;
    }
    FUN3(&VAR10, VAR4->VAR12);
    FUN2(VAR9, 0, VAR13);
    FUN2(VAR9, 1, VAR10.VAR14 + 1900);
    FUN2(VAR9, 2, VAR10.VAR15 + 1);
    FUN2(VAR9, 3, VAR10.VAR16);
    FUN2(VAR9, 4, VAR10.VAR17);
    FUN2(VAR9, 5, VAR10.VAR18);
    FUN2(VAR9, 6, VAR10.VAR19);
    FUN2(VAR9, 7, 0);
}