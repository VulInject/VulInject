void FUN1(const char *VAR1, const char *VAR2, bool VAR3, const char *VAR4, MirrorSyncMode VAR5, bool VAR6, int64_t VAR7, bool VAR8, uint32_t VAR9, bool VAR10, int64_t VAR11, bool VAR12, BlockdevOnError VAR13, bool VAR14, BlockdevOnError VAR15, VAR16 **VAR17)
{
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR18 *VAR22;
    VAR23 *VAR24;
    BlockMirrorBackingMode VAR25 = VAR26;
    VAR16 *VAR27 = NULL;
    VAR21 = FUN2(VAR1);
    if (!VAR21)
    {
        FUN3(VAR17, "", VAR1);
        return;
    }
    VAR19 = FUN4(VAR21);
    if (!VAR19)
    {
        FUN3(VAR17, "", VAR1);
        return;
    }
    VAR22 = FUN5(VAR2, VAR2, VAR17);
    if (!VAR22)
    {
        return;
    }
    VAR24 = FUN6(VAR19);
    FUN7(VAR24);
    FUN8(VAR22, VAR24);
    FUN9(VAR19, VAR22, VAR3, VAR4, VAR5, VAR25, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, true, true, &VAR27);
    FUN10(VAR17, VAR27);
    FUN11(VAR24);
}