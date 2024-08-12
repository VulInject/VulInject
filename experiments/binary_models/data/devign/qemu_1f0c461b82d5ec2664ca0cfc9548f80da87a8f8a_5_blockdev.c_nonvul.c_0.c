static void FUN1(VAR1 *VAR2, VAR1 *VAR3, bool VAR4, const char *VAR5, enum MirrorSyncMode VAR6, bool VAR7, int64_t VAR8, bool VAR9, uint32_t VAR10, bool VAR11, int64_t VAR12, bool VAR13, BlockdevOnError VAR14, bool VAR15, BlockdevOnError VAR16, bool VAR17, bool VAR18, VAR19 **VAR20)
{
    if (!VAR7)
    {
        VAR8 = 0;
    }
    if (!VAR13)
    {
        VAR14 = VAR21;
    }
    if (!VAR15)
    {
        VAR16 = VAR21;
    }
    if (!VAR9)
    {
        VAR10 = 0;
    }
    if (!VAR11)
    {
        VAR12 = 0;
    }
    if (!VAR17)
    {
        VAR18 = true;
    }
    if (VAR10 != 0 && (VAR10 < 512 || VAR10 > 1048576 * 64))
    {
        FUN2(VAR20, VAR22, "", "");
        return;
    }
    if (VAR10 & (VAR10 - 1))
    {
        FUN2(VAR20, VAR22, "", "");
        return;
    }
    if (FUN3(VAR2, VAR23, VAR20))
    {
        return;
    }
    if (FUN3(VAR3, VAR24, VAR20))
    {
        return;
    }
    if (FUN4(VAR3))
    {
        FUN2(VAR20, "");
        return;
    }
    if (!VAR2->VAR25 && VAR6 == VAR26)
    {
        VAR6 = VAR27;
    }
    FUN5(VAR2, VAR3, VAR4 ? VAR5 : NULL, VAR8, VAR10, VAR12, VAR6, VAR14, VAR16, VAR18, VAR28, VAR2, VAR20);
}