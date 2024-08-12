static int FUN1(VAR1 *VAR2, int VAR3)
{
    uint16_t VAR4;
    bool VAR5, VAR6;
    int VAR7, VAR8;
    if (pread(VAR2->VAR9.VAR10, &VAR4, sizeof(VAR4), VAR2->VAR11 + VAR3 + VAR12) != sizeof(VAR4))
    {
        return -VAR13;
    }
    VAR4 = FUN2(VAR4);
    VAR5 = !!(VAR4 & VAR14);
    VAR6 = !!(VAR4 & VAR15);
    VAR8 = 1 << ((VAR4 & VAR16) >> 1);
    FUN3(VAR2->VAR9.VAR17, VAR3);
    VAR7 = FUN4(&VAR2->VAR18, VAR3, VAR8, VAR5, VAR6);
    if (VAR7 < 0)
    {
        if (VAR7 == -VAR19)
        {
            return 0;
        }
        FUN5("");
        return VAR7;
    }
    VAR2->VAR20 = 0xa + (VAR6 ? 0xa : 0) + (VAR5 ? 0x4 : 0);
    return 0;
}