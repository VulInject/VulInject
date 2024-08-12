void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, const char *VAR5, int64_t VAR6, uint32_t VAR7, int64_t VAR8, MirrorSyncMode VAR9, BlockMirrorBackingMode VAR10, BlockdevOnError VAR11, BlockdevOnError VAR12, bool VAR13, VAR14 *VAR15, void *VAR16, VAR17 **VAR18)
{
    bool VAR19;
    VAR2 *VAR20;
    if (VAR9 == VAR21)
    {
        FUN2(VAR18, "");
        return;
    }
    VAR19 = VAR9 == VAR22;
    VAR20 = VAR9 == VAR23 ? FUN3(VAR3) : NULL;
    FUN4(VAR1, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR10, VAR11, VAR12, VAR13, VAR15, VAR16, VAR18, &VAR24, VAR19, VAR20, false);
}