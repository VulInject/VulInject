static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    VirtIOBalloonStat VAR9;
    size_t VAR10 = 0;
    qemu_timeval VAR11;
    VAR6->VAR12 = VAR8 = FUN3(VAR4, sizeof(VAR7));
    if (!VAR8)
    {
        goto VAR13;
    }
    FUN4(VAR6);
    while (FUN5(VAR8->VAR14, VAR8->VAR15, VAR10, &VAR9, sizeof(VAR9)) == sizeof(VAR9))
    {
        uint16_t VAR16 = FUN6(VAR2, VAR9.VAR16);
        uint64_t VAR17 = FUN7(VAR2, VAR9.VAR17);
        VAR10 += sizeof(VAR9);
        if (VAR16 < VAR18)
            VAR6->VAR19[VAR16] = VAR17;
    }
    VAR6->VAR20 = VAR10;
    if (FUN8(&VAR11) < 0)
    {
        fprintf(VAR21, "", VAR22);
        goto VAR13;
    }
    VAR6->VAR23 = VAR11.VAR24;
VAR13:
    if (FUN9(VAR6))
    {
        FUN10(VAR6, VAR6->VAR25);
    }
}