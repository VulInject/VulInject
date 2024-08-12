static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    if (!VAR6)
        return -1;
    VAR8 = FUN2(&VAR2->VAR9);
    if (!VAR8)
    {
        int VAR10;
        int VAR11 = FUN2(&VAR2->VAR9);
        VAR6->VAR12.VAR13 = !!(VAR11 & 0x80);
        VAR6->VAR12.VAR14 = !!(VAR11 & 0x40);
        VAR6->VAR12.VAR15 = !!(VAR11 & 0x20);
        VAR6->VAR12.VAR16 = !!(VAR11 & 0x08);
        VAR6->VAR12.VAR17 = !!(VAR11 & 0x04);
        VAR6->VAR12.VAR18 = !!(VAR11 & 0x02);
        VAR6->VAR12.VAR19 = FUN3(&VAR2->VAR9);
        FUN3(&VAR2->VAR9);
        VAR6->VAR12.VAR20 = FUN2(&VAR2->VAR9);
        VAR6->VAR12.VAR21 = FUN2(&VAR2->VAR9);
        VAR6->VAR12.VAR22 = FUN2(&VAR2->VAR9);
        VAR6->VAR12.VAR23 = FUN2(&VAR2->VAR9);
        VAR10 = FUN4(&VAR2->VAR9);
        VAR6->VAR12.VAR24 = VAR10 >> 12;
        VAR6->VAR12.VAR25 = (VAR10 >> 7) & 0x1f;
        VAR6->VAR12.VAR26 = (VAR10 >> 2) & 0x1f;
    }
    else
    {
        FUN5(VAR2->VAR27, "");
        return 0;