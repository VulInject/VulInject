static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9[0];
    int VAR10, VAR11;
    uint64_t VAR12 = FUN2(VAR2->VAR13);
    unsigned VAR14;
    VAR14 = FUN3(VAR2->VAR13);
    VAR10 = FUN3(VAR2->VAR13);
    FUN4(VAR2, "", VAR10);
    VAR10 = FUN5(VAR2->VAR13);
    VAR11 = FUN5(VAR2->VAR13);
    FUN4(VAR2, "", VAR10, VAR11);
    VAR10 = FUN6(VAR2->VAR13);
    FUN4(VAR2, "", VAR10);
    if (VAR10 > 4)
    {
        VAR10 = FUN6(VAR2->VAR13);
        FUN4(VAR2, "", VAR10);
        VAR10 = FUN6(VAR2->VAR13);
        FUN4(VAR2, "", VAR10);
        VAR10 = FUN3(VAR2->VAR13);
        FUN4(VAR2, "", VAR10);
        VAR10 = FUN3(VAR2->VAR13);
        FUN4(VAR2, "", VAR10);
        VAR10 = FUN3(VAR2->VAR13);
        FUN4(VAR2, "", VAR10);
    }
    VAR10 = VAR6->VAR15 - 8 - (FUN2(VAR2->VAR13) - VAR12);
    if (VAR10 < 0)
        return -1;
    if (FUN7(VAR2->VAR13, VAR4, VAR10) != VAR10)
    {
        FUN8(VAR2, VAR16, "");
        return -1;
    }
    VAR4->VAR17 = 0;
    VAR4->VAR14 = VAR14;
    if (VAR8->VAR18->VAR19.VAR20)
        VAR4->VAR21 = (VAR22)VAR8->VAR19.VAR20 * VAR8->VAR18->VAR19.VAR23 / VAR8->VAR18->VAR19.VAR20;
    FUN4(VAR2, "", VAR4->VAR14, VAR4->VAR21);
    return 0;
}