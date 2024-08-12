static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3, VAR4;
    VAR5 *VAR6;
    FUN2(VAR2->VAR7, 4);
    VAR6 = FUN3(VAR2, NULL);
    if (!VAR6)
        return FUN4(VAR8);
    VAR3 = FUN5(VAR2->VAR7);
    VAR6->VAR9->VAR10 = VAR11;
    VAR6->VAR9->VAR12 = VAR13;
    VAR6->VAR9->VAR14 = FUN5(VAR2->VAR7);
    if (VAR6->VAR9->VAR14 <= 0)
        return VAR15;
    VAR6->VAR9->VAR16 = FUN5(VAR2->VAR7);
    if (VAR6->VAR9->VAR16 <= 0)
        return VAR15;
    VAR6->VAR17 = VAR3 / (16 * VAR6->VAR9->VAR16) * 28;
    VAR4 = FUN5(VAR2->VAR7);
    if (VAR4 <= 0 || VAR4 > VAR18 / VAR6->VAR9->VAR16)
        return VAR15;
    VAR6->VAR9->VAR19 = VAR4 * VAR6->VAR9->VAR16;
    FUN2(VAR2->VAR7, 0x800 - FUN6(VAR2->VAR7));
    FUN7(VAR6, 64, 1, VAR6->VAR9->VAR14);
    return 0;
}