static VAR1 FUN1(int VAR2, TCGArg VAR3, TCGArg VAR4)
{
    switch (VAR2)
    {
        FUN2(VAR5) : return VAR3 + VAR4;
        FUN2(VAR6) : return VAR3 - VAR4;
        FUN2(VAR7) : return VAR3 * VAR4;
        FUN2(and) : return VAR3 & VAR4;
        FUN2(or) : return VAR3 | VAR4;
        FUN2(xor) : return VAR3 ^ VAR4;
    case VAR8:
        return (VAR9)VAR3 << (VAR9)VAR4;
    case VAR10:
        return (VAR11)VAR3 << (VAR11)VAR4;
    case VAR12:
        return (VAR9)VAR3 >> (VAR9)VAR4;
    case VAR13:
        return (VAR11)VAR3 >> (VAR11)VAR4;
    case VAR14:
        return (VAR15)VAR3 >> (VAR15)VAR4;
    case VAR16:
        return (VAR17)VAR3 >> (VAR17)VAR4;
    case VAR18:
        VAR3 = ((VAR9)VAR3 << (32 - VAR4)) | ((VAR9)VAR3 >> VAR4);
        return VAR3;
    case VAR19:
        VAR3 = ((VAR11)VAR3 << (64 - VAR4)) | ((VAR11)VAR3 >> VAR4);
        return VAR3;
    case VAR20:
        VAR3 = ((VAR9)VAR3 << VAR4) | ((VAR9)VAR3 >> (32 - VAR4));
        return VAR3;
    case VAR21:
        VAR3 = ((VAR11)VAR3 << VAR4) | ((VAR11)VAR3 >> (64 - VAR4));
        return VAR3;
        FUN2(not ) : return ~VAR3;
        FUN2(VAR22) : return (VAR23)VAR3;
        FUN2(VAR24) : return (VAR25)VAR3;
        FUN2(VAR26) : return (VAR27)VAR3;
        FUN2(VAR28) : return (VAR29)VAR3;
    case VAR30:
        return (VAR15)VAR3;
    case VAR31:
        return (VAR9)VAR3;
    default:
        fprintf(VAR32, "", VAR2);
        FUN3();
    }
}