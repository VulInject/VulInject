static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    MpegEncContext VAR6;
    VAR4->VAR2 = VAR2;
    memset(&VAR6, 0, sizeof(VAR7));
    VAR6.VAR2 = VAR2;
    FUN2(&VAR6.VAR8, VAR2);
    FUN3(&VAR6);
    VAR4->VAR9 = VAR6.VAR10;
    VAR4->VAR11 = VAR6.VAR8.VAR11;
    VAR4->VAR12 = 0;
    VAR4->VAR13 = 102400;
    VAR4->VAR14 = FUN4(VAR4->VAR13);
    if (!VAR4->VAR14)
        return -1;
    VAR4->VAR15 = -1;
    VAR4->VAR16 = 1;
    VAR4->VAR17 = VAR2->VAR18;
    FUN5(&VAR4->VAR19[0][0], VAR20, VAR21, 12);
    FUN5(&VAR4->VAR19[0][1], VAR22, VAR23, 12);
    FUN5(&VAR4->VAR19[1][0], VAR24, VAR25, 251);
    FUN5(&VAR4->VAR19[1][1], VAR26, VAR27, 251);
    if (VAR2->VAR28 & VAR29)
    {
        FUN6(VAR2, VAR30, "");
        FUN7(&VAR4->VAR31, VAR2->VAR32, VAR2->VAR33 * 8);
        FUN8(VAR4);
    }
    return 0;
}