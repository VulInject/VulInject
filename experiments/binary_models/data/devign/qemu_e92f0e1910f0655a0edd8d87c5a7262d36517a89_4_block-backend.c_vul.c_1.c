static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5, VAR6 *VAR7, CoroutineEntry VAR8, BdrvRequestFlags VAR9, VAR10 *VAR11, void *VAR12)
{
    VAR13 *VAR14;
    VAR15 *VAR16;
    FUN2(FUN3(VAR3));
    VAR14 = FUN4(&VAR17, VAR3, VAR11, VAR12);
    VAR14->VAR18 = (VAR19){
        .VAR3 = VAR3,
        .VAR4 = VAR4,
        .VAR7 = VAR7,
        .VAR9 = VAR9,
        .VAR20 = VAR21,
    };
    VAR14->VAR5 = VAR5;
    VAR14->VAR22 = false;
    VAR16 = FUN5(VAR8, VAR14);
    FUN6(VAR16);
    VAR14->VAR22 = true;
    if (VAR14->VAR18.VAR20 != VAR21)
    {
        FUN7(FUN8(VAR3), VAR23, VAR14);
    }
    return &VAR14->VAR24;
}