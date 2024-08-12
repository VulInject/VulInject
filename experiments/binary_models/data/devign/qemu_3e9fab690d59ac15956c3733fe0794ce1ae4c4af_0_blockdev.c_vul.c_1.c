void FUN1(const char *VAR1, int64_t VAR2, int64_t VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, VAR8 **VAR9)
{
    ThrottleConfig VAR10;
    VAR11 *VAR12;
    VAR12 = FUN2(VAR1);
    if (!VAR12)
    {
        FUN3(VAR9, VAR13, VAR1);
        return;
    }
    memset(&VAR10, 0, sizeof(VAR10));
    VAR10.VAR14[VAR15].VAR16 = VAR2;
    VAR10.VAR14[VAR17].VAR16 = VAR3;
    VAR10.VAR14[VAR18].VAR16 = VAR4;
    VAR10.VAR14[VAR19].VAR16 = VAR5;
    VAR10.VAR14[VAR20].VAR16 = VAR6;
    VAR10.VAR14[VAR21].VAR16 = VAR7;
    VAR10.VAR14[VAR15].VAR22 = 0;
    VAR10.VAR14[VAR17].VAR22 = 0;
    VAR10.VAR14[VAR18].VAR22 = 0;
    VAR10.VAR14[VAR19].VAR22 = 0;
    VAR10.VAR14[VAR20].VAR22 = 0;
    VAR10.VAR14[VAR21].VAR22 = 0;
    VAR10.VAR23 = 0;
    if (!FUN4(&VAR10, VAR9))
    {
        return;
    }
    if (!VAR12->VAR24 && FUN5(&VAR10))
    {
        FUN6(VAR12);
    }
    else if (VAR12->VAR24 && !FUN5(&VAR10))
    {
        FUN7(VAR12);
    }
    if (VAR12->VAR24)
    {
        FUN8(VAR12, &VAR10);
    }
}