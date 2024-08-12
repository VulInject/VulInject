static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    nut_packet_t VAR8;
    int VAR9;
    VAR9 = FUN2(VAR6->VAR10, &VAR8);
    if (VAR9 || FUN3(VAR4, VAR8.VAR11) < 0)
    {
        if (VAR9 != VAR12)
            FUN4(VAR2, VAR13, "", FUN5(VAR9));
        return -1;
    }
    if (VAR8.VAR14 & VAR15)
        VAR4->VAR14 |= VAR16;
    VAR4->VAR17 = VAR8.VAR17;
    VAR4->VAR18 = VAR8.VAR19;
    VAR4->VAR20 = FUN6(&VAR2->VAR21);
    VAR9 = FUN7(VAR6->VAR10, &VAR8.VAR11, VAR4->VAR22);
    return VAR9;
}