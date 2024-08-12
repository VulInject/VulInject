static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6;
    VAR7 *VAR8 = FUN2(VAR9);
    int64_t VAR10, VAR11, VAR12;
    int64_t VAR13, VAR14, VAR15, VAR16;
    unsigned long VAR17;
    if (!VAR8->VAR18.VAR19)
    {
        FUN3("");
        return -1;
    }
    VAR17 = VAR8->VAR18.VAR19->VAR20;
    VAR16 = FUN4(VAR21);
    VAR12 = FUN5(0, VAR16 - VAR4->VAR22);
    VAR13 = FUN6(VAR23, VAR12);
    VAR14 = FUN7(VAR13, VAR17, VAR23);
    VAR15 = VAR4->VAR24 + FUN6(0, VAR14);
    VAR10 = VAR15 - FUN8();
    VAR11 = VAR8->VAR18.VAR19->VAR25;
    FUN9(VAR11, VAR10, VAR10 - VAR11, (VAR10 - VAR11) / VAR17);
    FUN10(VAR6)
    {
        VAR7 *VAR26 = FUN2(VAR6);
        VAR26->VAR18.VAR19->VAR25 = VAR10;
    }
    return 0;
}