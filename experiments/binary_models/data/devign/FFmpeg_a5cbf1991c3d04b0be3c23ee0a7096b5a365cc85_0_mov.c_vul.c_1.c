static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5, enum AVCodecID VAR6)
{
    VAR7 *VAR8;
    uint64_t VAR9;
    VAR10 *VAR11;
    int VAR12;
    if (VAR2->VAR13->VAR14 < 1)
        return 0;
    VAR8 = VAR2->VAR13->VAR15[VAR2->VAR13->VAR14 - 1];
    if (VAR8->VAR16->VAR6 != VAR6)
        return 0;
    VAR9 = (VAR17)VAR8->VAR16->VAR18 + VAR5.VAR9 + 8 + VAR19;
    if (VAR9 > VAR20 || (VAR17)VAR5.VAR9 > VAR20)
        return VAR21;
    if ((VAR12 = FUN2(&VAR8->VAR16->VAR22, VAR9)) < 0)
        return VAR12;
    VAR11 = VAR8->VAR16->VAR22 + VAR8->VAR16->VAR18;
    VAR8->VAR16->VAR18 = VAR9 - VAR19;
    FUN3(VAR11, VAR5.VAR9 + 8);
    FUN4(VAR11 + 4, VAR5.VAR23);
    FUN5(VAR4, VAR11 + 8, VAR5.VAR9);
    return 0;
}