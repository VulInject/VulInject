VAR1 *FUN1(const char *VAR2, const char *VAR3, uint64_t VAR4)
{
    VAR1 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    uint32_t VAR10 = 100 * 1000000;
    uint32_t VAR11 = 100 * 1000000;
    uint32_t VAR12 = 100 * 1000000;
    if (VAR2 == NULL)
    {
        VAR2 = VAR3;
    }
    VAR5 = FUN2(FUN3(VAR13, VAR2));
    if (VAR5 == NULL)
    {
        fprintf(VAR14, "");
        FUN4(1);
    }
    VAR7 = &VAR5->VAR7;
    VAR7->VAR15 = FUN5("", VAR5, VAR16, VAR10, VAR17, VAR18);
    VAR7->VAR19 = FUN5("", VAR5, VAR20, VAR11, VAR17, VAR18);
    VAR7->VAR21 = FUN5("", VAR5, VAR22, VAR12, VAR17, VAR18);
    VAR9 = FUN6(sizeof(VAR8));
    VAR9->VAR5 = VAR5;
    VAR9->VAR4 = VAR4;
    FUN7(VAR23, VAR9);
    return VAR5;
}