static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9[1];
    int av_unused VAR10, VAR11;
    int VAR12, VAR13;
    int64_t VAR14 = FUN2(VAR2->VAR15);
    unsigned VAR16;
    int VAR17;
    VAR16 = FUN3(VAR2->VAR15);
    VAR8->VAR18->VAR19 = FUN3(VAR2->VAR15);
    if (VAR8->VAR18->VAR19 <= 0)
    {
        FUN4(VAR2, VAR20, "");
        return VAR21;
    }
    VAR12 = FUN3(VAR2->VAR15);
    VAR10 = FUN3(VAR2->VAR15);
    FUN5(VAR2, "", VAR10);
    VAR10 = FUN6(VAR2->VAR15);
    FUN5(VAR2, "", VAR10);
    VAR10 = FUN7(VAR2->VAR15);
    VAR11 = FUN7(VAR2->VAR15);
    FUN5(VAR2, "", VAR10, VAR11);
    VAR10 = FUN3(VAR2->VAR15);
    FUN5(VAR2, "", VAR10);
    VAR13 = VAR6->VAR13 - 8 - (FUN2(VAR2->VAR15) - VAR14);
    if (VAR13 < 0)
        return -1;
    VAR17 = FUN8(VAR2->VAR15, VAR4, VAR13);
    if (VAR17 < 0)
    {
        FUN4(VAR2, VAR20, "");
        return VAR17;
    }
    VAR4->VAR22 = 1;
    VAR4->VAR16 = VAR16;
    VAR4->VAR23 = FUN9(VAR12, VAR8->VAR24.VAR25, VAR8->VAR18->VAR19);
    FUN5(VAR2, "" VAR26 "", VAR4->VAR16, VAR4->VAR23, VAR12, VAR8->VAR18->VAR19);
    return 0;
}