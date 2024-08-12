VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    AVRational VAR8 = VAR5->VAR9;
    AVRational VAR10 = VAR5->VAR11->VAR12;
    AVRational VAR13 = VAR5->VAR14;
    if (VAR13.VAR15 > 0 && VAR13.VAR16 > 0 && VAR8.VAR15 > 0 && VAR8.VAR16 > 0 && FUN2(VAR13) < 70 && FUN2(VAR8) > 210)
    {
        VAR8 = VAR13;
    }
    if (VAR5->VAR11->VAR17 > 1)
    {
        if (VAR10.VAR15 > 0 && VAR10.VAR16 > 0 && FUN2(VAR10) < FUN2(VAR8) * 0.7 && FUN3(1.0 - FUN2(FUN4(VAR13, VAR8))) > 0.1)
            VAR8 = VAR10;
    }
    return VAR8;
}