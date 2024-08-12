static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2(VAR5);
    VAR10 *VAR11 = VAR9->FUN3(VAR5);
    uint64_t VAR12 = FUN4(VAR11);
    uint32_t VAR13 = VAR12 / VAR14;
    uint32_t VAR15 = 0;
    uint64_t VAR16, VAR17;
    int VAR18;
    VAR1 *VAR19;
    VAR16 = FUN5(FUN6(VAR5), VAR20, &VAR21);
    VAR17 = VAR16;
    for (VAR18 = 0; VAR18 < VAR13; VAR18++)
    {
        VAR7 = FUN7(VAR22, VAR17 / VAR14);
        FUN8(VAR7);
        if (VAR7->VAR23 != VAR24)
        {
            VAR15++;
        }
        VAR17 += VAR14;
    }
    VAR19 = FUN9(sizeof(VAR1));
    VAR19->VAR13 = VAR15;
    VAR19->VAR5 = VAR5;
    FUN10(VAR3, VAR19);
    return VAR19;
}