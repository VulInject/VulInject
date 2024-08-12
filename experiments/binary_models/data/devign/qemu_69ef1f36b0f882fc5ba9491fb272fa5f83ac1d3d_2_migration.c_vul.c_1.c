void FUN1(bool VAR1, int64_t VAR2, bool VAR3, int64_t VAR4, bool VAR5, int64_t VAR6, bool VAR7, int64_t VAR8, bool VAR9, int64_t VAR10, VAR11 **VAR12)
{
    VAR13 *VAR14 = FUN2();
    if (VAR1 && (VAR2 < 0 || VAR2 > 9))
    {
        FUN3(VAR12, VAR15, "", "");
        return;
    }
    if (VAR3 && (VAR4 < 1 || VAR4 > 255))
    {
        FUN3(VAR12, VAR15, "", "");
        return;
    }
    if (VAR5 && (VAR6 < 1 || VAR6 > 255))
    {
        FUN3(VAR12, VAR15, "", "");
        return;
    }
    if (VAR7 && (VAR8 < 1 || VAR8 > 99))
    {
        FUN3(VAR12, VAR15, "", "");
    }
    if (VAR9 && (VAR10 < 1 || VAR10 > 99))
    {
        FUN3(VAR12, VAR15, "", "");
    }
    if (VAR1)
    {
        VAR14->VAR16.VAR2 = VAR2;
    }
    if (VAR3)
    {
        VAR14->VAR16.VAR4 = VAR4;
    }
    if (VAR5)
    {
        VAR14->VAR16.VAR6 = VAR6;
    }
    if (VAR7)
    {
        VAR14->VAR16.VAR8 = VAR8;
    }
    if (VAR9)
    {
        VAR14->VAR16.VAR10 = VAR10;
    }
    if (VAR17)
    {
        FUN4(VAR14->VAR16.VAR18);
        VAR14->VAR16.VAR18 = FUN5(VAR18);
    }
    if (VAR19)
    {
        FUN4(VAR14->VAR16.VAR20);
        VAR14->VAR16.VAR20 = FUN5(VAR20);
    }