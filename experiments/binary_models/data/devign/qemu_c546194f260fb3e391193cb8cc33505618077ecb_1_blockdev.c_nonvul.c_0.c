void FUN1(const char *VAR1, int64_t VAR2, int64_t VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, VAR8 **VAR9)
{
    BlockIOLimit VAR10;
    VAR11 *VAR12;
    VAR12 = FUN2(VAR1);
    if (!VAR12)
    {
        FUN3(VAR9, VAR13, VAR1);
        return;
    }
    VAR10.VAR2[VAR14] = VAR2;
    VAR10.VAR2[VAR15] = VAR3;
    VAR10.VAR2[VAR16] = VAR4;
    VAR10.VAR5[VAR14] = VAR5;
    VAR10.VAR5[VAR15] = VAR6;
    VAR10.VAR5[VAR16] = VAR7;
    if (!FUN4(&VAR10, VAR9))
    {
        return;
    }
    VAR12->VAR10 = VAR10;
    VAR12->VAR17 = VAR18;
    if (!VAR12->VAR19 && FUN5(VAR12))
    {
        FUN6(VAR12);
    }
    else if (VAR12->VAR19 && !FUN5(VAR12))
    {
        FUN7(VAR12);
    }
    else
    {
        if (VAR12->VAR20)
        {
            FUN8(VAR12->VAR20, FUN9(VAR21));
        }
    }
}