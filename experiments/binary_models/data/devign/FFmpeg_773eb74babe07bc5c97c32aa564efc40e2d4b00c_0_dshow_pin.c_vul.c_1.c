FUN1(VAR1 *this, VAR2 *VAR3)
{
    VAR4 *VAR5 = (VAR4 *)((VAR6 *)this - VAR7);
    enum dshowDeviceType VAR8 = VAR5->VAR9->VAR10;
    void *VAR11;
    VAR6 *VAR12;
    int VAR13;
    int VAR14;
    int64_t VAR15;
    FUN2("", this);
    if (!VAR3)
        return VAR16;
    if (VAR8 == VAR17)
    {
        VAR18 *VAR19 = VAR5->VAR9->VAR19;
        FUN3(VAR19, &VAR15);
    }
    else
    {
        int64_t VAR20;
        FUN4(VAR3, &VAR15, &VAR20);
        VAR15 += VAR5->VAR9->VAR21;
    }
    VAR13 = FUN5(VAR3);
    FUN6(VAR3, &VAR12);
    VAR11 = VAR5->VAR9->VAR11;
    VAR14 = VAR5->VAR9->VAR22;
    VAR5->VAR9->FUN7(VAR11, VAR14, VAR12, VAR13, VAR15);
    return VAR23;
}