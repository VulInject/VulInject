static int FUN1(VAR1 *VAR2)
{
    struct v4l2_capability VAR3;
    int VAR4;
    int VAR5;
    int VAR6, VAR7;
    int VAR8 = VAR9;
    if (VAR2->VAR8 & VAR10)
    {
        VAR8 |= VAR11;
    }
    VAR4 = FUN2(VAR2->VAR12, VAR8, 0);
    if (VAR4 < 0)
    {
        VAR7 = VAR13;
        FUN3(VAR2, VAR14, "", VAR2->VAR12, strerror(VAR7));
        return FUN4(VAR7);
    }
    VAR5 = FUN5(VAR4, 0);
    if (VAR4 < 0)
    {
        VAR7 = FUN4(VAR13);
        FUN3(VAR2, VAR14, "", VAR2->VAR12, strerror(VAR13));
        return VAR7;
    }
    VAR4 = VAR5;
    VAR6 = FUN6(VAR4, VAR15, &VAR3);
    if (VAR6 < 0)
    {
        VAR7 = VAR13;
        FUN3(VAR2, VAR14, "", strerror(VAR7));
        goto VAR16;
    }
    FUN3(VAR2, VAR17, "", VAR4, VAR3.VAR18);
    if (!(VAR3.VAR18 & VAR19))
    {
        FUN3(VAR2, VAR14, "");
        VAR7 = VAR20;
        goto VAR16;
    }
    if (!(VAR3.VAR18 & VAR21))
    {
        FUN3(VAR2, VAR14, "");
        VAR7 = VAR22;
        goto VAR16;
    }
    return VAR4;
VAR16:
    FUN7(VAR4);
    return FUN4(VAR7);
}