void FUN1(const char *VAR1, int64_t VAR2, int64_t VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, bool VAR8, int64_t VAR9, bool VAR10, int64_t VAR11, bool VAR12, int64_t VAR13, bool VAR14, int64_t VAR15, bool VAR16, int64_t VAR17, bool VAR18, int64_t VAR19, bool VAR20, int64_t VAR21, bool VAR22, const char *VAR23, VAR24 **VAR25)
{
    ThrottleConfig VAR26;
    VAR27 *VAR28;
    VAR29 *VAR30;
    VAR31 *VAR32;
    VAR30 = FUN2(VAR1);
    if (!VAR30)
    {
        FUN3(VAR25, VAR33, "", VAR1);
        return;
    }
    VAR32 = FUN4(VAR30);
    FUN5(VAR32);
    VAR28 = FUN6(VAR30);
    if (!VAR28)
    {
        FUN7(VAR25, "", VAR1);
        goto VAR34;
    }
    memset(&VAR26, 0, sizeof(VAR26));
    VAR26.VAR35[VAR36].VAR37 = VAR2;
    VAR26.VAR35[VAR38].VAR37 = VAR3;
    VAR26.VAR35[VAR39].VAR37 = VAR4;
    VAR26.VAR35[VAR40].VAR37 = VAR5;
    VAR26.VAR35[VAR41].VAR37 = VAR6;
    VAR26.VAR35[VAR42].VAR37 = VAR7;
    if (VAR8)
    {
        VAR26.VAR35[VAR36].VAR43 = VAR9;
    }
    if (VAR10)
    {
        VAR26.VAR35[VAR38].VAR43 = VAR11;
    }
    if (VAR12)
    {
        VAR26.VAR35[VAR39].VAR43 = VAR13;
    }
    if (VAR14)
    {
        VAR26.VAR35[VAR40].VAR43 = VAR15;
    }
    if (VAR16)
    {
        VAR26.VAR35[VAR41].VAR43 = VAR17;
    }
    if (VAR18)
    {
        VAR26.VAR35[VAR42].VAR43 = VAR19;
    }
    if (VAR20)
    {
        VAR26.VAR44 = VAR21;
    }
    if (!FUN8(&VAR26, VAR25))
    {
        goto VAR34;
    }
    if (FUN9(&VAR26))
    {
        if (!VAR28->VAR45)
        {
            FUN10(VAR28, VAR22 ? VAR23 : VAR1);
        }
        else if (VAR22)
        {
            FUN11(VAR28, VAR23);
        }
        FUN12(VAR28, &VAR26);
    }
    else if (VAR28->VAR45)
    {
        FUN13(VAR28);
    }
VAR34:
    FUN14(VAR32);
}