static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    struct parallels_header VAR8;
    VAR2->VAR9 = 1;
    if (FUN2(VAR2->VAR10, 0, &VAR8, sizeof(VAR8)) != sizeof(VAR8))
        goto VAR11;
    if (memcmp(VAR8.VAR12, VAR13, 16) || (FUN3(VAR8.VAR14) != VAR15))
    {
        goto VAR11;
    }
    VAR2->VAR16 = FUN3(VAR8.VAR17);
    VAR5->VAR18 = FUN3(VAR8.VAR18);
    VAR5->VAR19 = FUN3(VAR8.VAR20);
    VAR5->VAR21 = FUN4(VAR5->VAR19 * 4);
    if (FUN2(VAR2->VAR10, 64, VAR5->VAR21, VAR5->VAR19 * 4) != VAR5->VAR19 * 4)
        goto VAR11;
    for (VAR7 = 0; VAR7 < VAR5->VAR19; VAR7++)
        FUN5(&VAR5->VAR21[VAR7]);
    FUN6(&VAR5->VAR22);
    return 0;
VAR11:
    if (VAR5->VAR21)
        FUN7(VAR5->VAR21);
    return -1;
}