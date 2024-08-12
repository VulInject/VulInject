void FUN1(const char *VAR1, int64_t VAR2, int64_t VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, bool VAR8, int64_t VAR9, bool VAR10, int64_t VAR11, bool VAR12, int64_t VAR13, bool VAR14, int64_t VAR15, bool VAR16, int64_t VAR17, bool VAR18, int64_t VAR19, bool VAR20, int64_t VAR21, VAR22 **VAR23)
{
    ThrottleConfig VAR24;
    VAR25 *VAR26;
    VAR26 = FUN2(VAR1);
    if (!VAR26)
    {
        FUN3(VAR23, VAR27, VAR1);
        return;
    }
    memset(&VAR24, 0, sizeof(VAR24));
    VAR24.VAR28[VAR29].VAR30 = VAR2;
    VAR24.VAR28[VAR31].VAR30 = VAR3;
    VAR24.VAR28[VAR32].VAR30 = VAR4;
    VAR24.VAR28[VAR33].VAR30 = VAR5;
    VAR24.VAR28[VAR34].VAR30 = VAR6;
    VAR24.VAR28[VAR35].VAR30 = VAR7;
    if (VAR8)
    {
        VAR24.VAR28[VAR29].VAR36 = VAR9;
    }
    if (VAR10)
    {
        VAR24.VAR28[VAR31].VAR36 = VAR11;
    }
    if (VAR12)
    {
        VAR24.VAR28[VAR32].VAR36 = VAR13;
    }
    if (VAR14)
    {
        VAR24.VAR28[VAR33].VAR36 = VAR15;
    }
    if (VAR16)
    {
        VAR24.VAR28[VAR34].VAR36 = VAR17;
    }
    if (VAR18)
    {
        VAR24.VAR28[VAR35].VAR36 = VAR19;
    }
    if (VAR20)
    {
        VAR24.VAR37 = VAR21;
    }
    if (!FUN4(&VAR24, VAR23))
    {
        return;
    }
    VAR38 = FUN5(VAR26);
    FUN6(VAR38);
    if (!VAR26->VAR39 && FUN7(&VAR24))
    {
        FUN8(VAR26);
    }
    else if (VAR26->VAR39 && !FUN7(&VAR24))
    {
        FUN9(VAR26);
    }
    if (VAR26->VAR39)
    {
        FUN10(VAR26, &VAR24);
    }
    FUN11(VAR38);