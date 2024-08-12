static void FUN1(const char *VAR1, const char *VAR2, const char *VAR3, bool VAR4, const char *VAR5, enum MirrorSyncMode VAR6, bool VAR7, enum NewImageMode VAR8, bool VAR9, int64_t VAR10, bool VAR11, const char *VAR12, bool VAR13, BlockdevOnError VAR14, bool VAR15, BlockdevOnError VAR16, VAR17 *VAR18, VAR19 **VAR20);
static void FUN2(VAR21 *VAR22, VAR19 **VAR20)
{
    VAR23 *VAR24 = FUN3(VAR23, VAR22, VAR22);
    VAR25 *VAR26;
    VAR27 *VAR28;
    VAR19 *VAR29 = NULL;
    assert(VAR22->VAR30->VAR31 == VAR32);
    VAR28 = VAR22->VAR30->VAR33.VAR34.VAR35;
    VAR26 = FUN4(VAR28->VAR2, VAR20);
    if (!VAR26)
    {
        return;
    }
    VAR24->VAR36 = FUN5(VAR26);
    FUN6(VAR24->VAR36);
    FUN7(VAR26);
    VAR24->VAR26 = VAR26;
    FUN1(VAR28->VAR37 ? VAR28->VAR1 : NULL, VAR28->VAR2, VAR28->VAR3, VAR28->VAR4, VAR28->VAR5, VAR28->VAR6, VAR28->VAR7, VAR28->VAR8, VAR28->VAR9, VAR28->VAR10, VAR28->VAR11, VAR28->VAR12, VAR28->VAR13, VAR28->VAR14, VAR28->VAR15, VAR28->VAR16, VAR22->VAR38, &VAR29);
    if (VAR29)
    {
        FUN8(VAR20, VAR29);
        return;
    }
    VAR24->VAR39 = VAR24->VAR26->VAR39;
}