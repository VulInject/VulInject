VAR1 *FUN1(const char *VAR2, const void *VAR3, size_t VAR4, size_t VAR5, hwaddr VAR6, const char *VAR7, FWCfgReadCallback VAR8, void *VAR9, VAR10 *VAR11)
{
    VAR12 *VAR13 = FUN2(FUN3());
    VAR14 *VAR15;
    VAR1 *VAR16 = NULL;
    VAR15 = FUN4(sizeof(*VAR15));
    VAR15->VAR2 = FUN5(VAR2);
    VAR15->VAR11 = VAR11;
    VAR15->VAR6 = VAR6;
    VAR15->VAR17 = VAR5 ? VAR5 : VAR4;
    VAR15->VAR18 = VAR4;
    VAR15->VAR19 = FUN4(VAR15->VAR18);
    memcpy(VAR15->VAR19, VAR3, VAR4);
    FUN6(VAR15);
    if (VAR7 && VAR20)
    {
        char VAR21[100];
        void *VAR19;
        snprintf(VAR21, sizeof(VAR21), "", VAR7);
        if (VAR13->VAR22)
        {
            VAR19 = FUN7(VAR15, FUN8(VAR20), VAR21);
            VAR16 = VAR15->VAR16;
        }
        else
        {
            VAR19 = VAR15->VAR19;
        }
        FUN9(VAR20, VAR7, VAR8, VAR9, VAR19, VAR15->VAR18);
    }
    return VAR16;
}