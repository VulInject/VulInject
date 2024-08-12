static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    CVPixelBufferRef VAR9 = (VAR10)VAR6->VAR4;
    OSType VAR11 = FUN2(VAR9);
    enum AVPixelFormat VAR12 = FUN3(VAR11);
    int VAR13 = FUN4(VAR9);
    int VAR14 = FUN5(VAR9);
    VAR15 *VAR16;
    int VAR17;
    VAR17 = FUN6(VAR6, VAR4);
    if (VAR17 < 0)
        return VAR17;
    if (!VAR6->VAR18)
        return 0;
    VAR16 = (VAR15 *)VAR6->VAR18->VAR19;
    if (VAR16->VAR12 != VAR12 || VAR16->VAR13 != VAR13 || VAR16->VAR14 != VAR14)
    {
        VAR20 *VAR21 = FUN7(VAR16->VAR22);
        VAR15 *VAR23;
        if (!VAR21)
            return FUN8(VAR24);
        VAR23 = (VAR15 *)VAR21->VAR19;
        VAR23->VAR25 = VAR16->VAR25;
        VAR23->VAR12 = VAR12;
        VAR23->VAR13 = VAR13;
        VAR23->VAR14 = VAR14;
        VAR17 = FUN9(VAR21);
        if (VAR17 < 0)
        {
            FUN10(&VAR21);
            return VAR17;
        }
        FUN10(&VAR6->VAR18);
        VAR6->VAR18 = VAR21;
    }
    FUN11(!VAR4->VAR21);
    VAR4->VAR21 = FUN12(VAR6->VAR18);
    if (!VAR4->VAR21)
        return FUN8(VAR24);
    return 0;
}