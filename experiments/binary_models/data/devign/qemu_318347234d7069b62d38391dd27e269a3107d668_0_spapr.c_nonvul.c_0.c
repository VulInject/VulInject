static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR5 *VAR9 = NULL;
    VAR10 *VAR11 = FUN3(VAR4);
    VAR12 *VAR13 = FUN4(VAR11);
    VAR14 *VAR15 = VAR13->FUN5(VAR11);
    uint64_t VAR16 = FUN6(VAR15);
    uint32_t VAR17 = VAR16 / VAR18;
    uint64_t VAR19, VAR20;
    int VAR21;
    VAR22 *VAR23;
    VAR24 *VAR25;
    VAR26 *VAR27;
    VAR19 = FUN7(FUN8(VAR11), VAR28, &VAR9);
    if (VAR9)
    {
        goto VAR29;
    }
    VAR27 = FUN9(sizeof(VAR26));
    VAR27->VAR17 = VAR17;
    VAR27->VAR11 = VAR11;
    FUN10(VAR8, VAR27);
    VAR20 = VAR19;
    for (VAR21 = 0; VAR21 < VAR17; VAR21++)
    {
        VAR23 = FUN11(VAR30, VAR20 / VAR18);
        FUN12(VAR23);
        VAR25 = FUN13(VAR23);
        VAR25->FUN14(VAR23, VAR4, VAR6);
        VAR20 += VAR18;
    }
    VAR23 = FUN11(VAR30, VAR19 / VAR18);
    VAR25 = FUN13(VAR23);
    FUN15(VAR30, VAR17, VAR25->FUN16(VAR23));
VAR29:
    FUN17(VAR6, VAR9);
}