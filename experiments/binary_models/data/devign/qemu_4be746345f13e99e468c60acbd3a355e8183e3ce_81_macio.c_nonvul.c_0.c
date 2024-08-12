static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = VAR4->VAR1;
    VAR7 *VAR8 = FUN2(&VAR6->VAR9);
    int VAR10;
    if (VAR2 < 0)
    {
        VAR6->VAR11 = NULL;
        FUN3(&VAR8->VAR12);
        FUN4(VAR8, VAR2);
        VAR4->VAR13 = 0;
        goto VAR14;
    }
    if (!VAR6->VAR15)
    {
        FUN5("", VAR8->VAR16, VAR4->VAR17, VAR8->VAR18);
        VAR4->VAR19 = false;
        return;
    }
    FUN5("", VAR8->VAR20);
    if (VAR8->VAR20 > 0)
    {
        VAR6->VAR11 = NULL;
        FUN3(&VAR8->VAR12);
        VAR8->VAR21 -= VAR8->VAR20;
        VAR8->VAR22 += VAR8->VAR20;
        VAR8->VAR23 += VAR8->VAR22 >> 11;
        VAR8->VAR22 &= 0x7ff;
    }
    VAR8->VAR20 = FUN6(VAR4->VAR17, VAR8->VAR21);
    FUN5("", VAR4->VAR13, VAR4->VAR17, VAR8->VAR21);
    if (VAR4->VAR13 && VAR4->VAR17)
    {
        int VAR13 = FUN6(VAR4->VAR13, VAR4->VAR17);
        FUN5("", VAR13);
        FUN7(VAR4->VAR24, VAR4->VAR25 + 0x200 - VAR13, VAR13);
        VAR4->VAR24 += VAR13;
        VAR4->VAR17 -= VAR13;
        VAR8->VAR20 = VAR13;
        VAR4->VAR13 -= VAR13;
        FUN8(&VAR8->VAR12, FUN9(VAR6), VAR4->VAR17 / VAR26 + 1, &VAR27);
        FUN1(VAR1, 0);
        return;
    }
    if (!VAR8->VAR21)
    {
        FUN5("");
        FUN10(VAR8);
        VAR6->VAR15 = false;
    }
    if (VAR4->VAR17 == 0)
    {
        FUN5("");
        goto VAR14;
    }
    VAR10 = VAR4->VAR17 & 0x1ff;
    if (VAR10)
    {
        int VAR28 = (VAR8->VAR23 << 2) + (VAR8->VAR22 >> 9);
        int VAR16 = VAR4->VAR17 >> 9;
        FUN5("" VAR29 "", VAR10, VAR4->VAR24 + VAR4->VAR17 - VAR10);
        FUN11(VAR8->VAR30, VAR28 + VAR16, VAR4->VAR25, 1);
        FUN7(VAR4->VAR24 + VAR4->VAR17 - VAR10, VAR4->VAR25, VAR10);
        VAR4->VAR17 -= VAR10;
    }
    FUN5("", VAR4->VAR17);
    FUN8(&VAR8->VAR12, FUN9(VAR6), VAR4->VAR17 / VAR26 + 1, &VAR27);
    FUN12(&VAR8->VAR12, VAR4->VAR24, VAR4->VAR17);
    VAR4->VAR24 += VAR8->VAR20;
    VAR4->VAR13 = FUN6(VAR8->VAR21 - VAR8->VAR20, (0x200 - VAR10) & 0x1ff);
    FUN5("", VAR4->VAR13);
    if (!VAR4->VAR17)
    {
        FUN1(VAR1, 0);
        return;
    }
    VAR4->VAR17 = 0;
    FUN5("", (VAR8->VAR23 << 2) + (VAR8->VAR22 >> 9), VAR8->VAR21, VAR8->VAR31);
    VAR6->VAR11 = FUN13(VAR8->VAR30, &VAR8->VAR12, (VAR32)(VAR8->VAR23 << 2) + (VAR8->VAR22 >> 9), VAR33, VAR4);
    return;
VAR14:
    FUN5("");
    FUN14(FUN15(VAR8->VAR30), &VAR8->VAR34);
    VAR4->FUN16(VAR1);
}