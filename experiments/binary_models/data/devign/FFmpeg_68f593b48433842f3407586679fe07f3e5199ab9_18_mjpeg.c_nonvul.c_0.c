static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    MpegEncContext VAR6;
    VAR4->VAR2 = VAR2;
    memset(&VAR6, 0, sizeof(VAR7));
    VAR6.VAR8 = VAR2->VAR8;
    VAR6.VAR2 = VAR2;
    VAR6.VAR9 = 8;
    VAR6.VAR10 = 8;
    if (FUN2(&VAR6) < 0)
        return -1;
    VAR4->VAR11 = VAR6.VAR12;
    VAR4->VAR13 = VAR6.VAR13;
    FUN3(&VAR6);
    VAR4->VAR14 = 0;
    VAR4->VAR15 = 102400;
    VAR4->VAR16 = FUN4(VAR4->VAR15);
    if (!VAR4->VAR16)
        return -1;
    VAR4->VAR17 = -1;
    VAR4->VAR18 = 1;
    VAR4->VAR19 = VAR2->VAR9;
    VAR4->VAR20 = VAR2->VAR10;
    FUN5(&VAR4->VAR21[0][0], VAR22, VAR23, 12);
    FUN5(&VAR4->VAR21[0][1], VAR24, VAR25, 12);
    FUN5(&VAR4->VAR21[1][0], VAR26, VAR27, 251);
    FUN5(&VAR4->VAR21[1][1], VAR28, VAR29, 251);
    if (VAR2->VAR8 & VAR30)
    {
        FUN6("");
        FUN7(&VAR4->VAR31, VAR2->VAR32, VAR2->VAR33 * 8);
        FUN8(VAR4);
    }
    return 0;
}