static void FUN1(VAR1 *VAR2, void *VAR3)
{
    int VAR4;
    VAR5 *VAR6 = FUN2(256);
    VAR5 *VAR7 = FUN2(256);
    uint32_t VAR8[] = {FUN3(0x4), FUN3(0x4)};
    uint64_t VAR9 = VAR2->VAR10.VAR11 + FUN4(&VAR2->VAR10.VAR12);
    uint32_t VAR13[] = {
        FUN3(VAR9 >> 32),
        FUN3(VAR9 & 0xffffffff),
        0,
        FUN3(VAR14),
        FUN3(VAR15 / VAR16),
    };
    FUN5(VAR4 = FUN6(VAR3, 0, ""));
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR6, "");
    FUN7(VAR7, "");
    if (!FUN8() || FUN9())
    {
        FUN7(VAR6, "");
    }
    if (VAR2->VAR17 != VAR18)
    {
        FUN7(VAR6, "");
    }
    FUN5(FUN10(VAR3, VAR4, "", VAR6->VAR19, VAR6->VAR20));
    FUN11(VAR6, VAR21);
    FUN5(FUN10(VAR3, VAR4, "", VAR7->VAR19, VAR7->VAR20));
    FUN11(VAR7, VAR21);
    FUN5(FUN10(VAR3, VAR4, "", VAR8, sizeof(VAR8)));
    FUN5(FUN12(VAR3, VAR4, "", VAR22));
    FUN5(FUN12(VAR3, VAR4, "", VAR23));
    FUN13(VAR24);
    FUN5(FUN10(VAR3, VAR4, "", NULL, 0));
    FUN5(FUN10(VAR3, VAR4, "", NULL, 0));
    FUN5(FUN10(VAR3, VAR4, "", VAR13, sizeof(VAR13)));
    FUN14(VAR3, VAR4);
}