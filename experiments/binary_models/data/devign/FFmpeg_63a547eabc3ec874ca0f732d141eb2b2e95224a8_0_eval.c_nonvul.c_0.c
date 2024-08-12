static double FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    switch (VAR4->VAR5)
    {
    case VAR6:
        return VAR4->VAR7;
    case VAR8:
        return VAR4->VAR7 * VAR2->VAR9[VAR4->VAR10.VAR11];
    case VAR12:
        return VAR4->VAR7 * VAR4->VAR10.FUN2(FUN1(VAR2, VAR4->VAR13[0]));
    case VAR14:
        return VAR4->VAR7 * VAR4->VAR10.FUN3(VAR2->VAR15, FUN1(VAR2, VAR4->VAR13[0]));
    case VAR16:
        return VAR4->VAR7 * VAR4->VAR10.FUN4(VAR2->VAR15, FUN1(VAR2, VAR4->VAR13[0]), FUN1(VAR2, VAR4->VAR13[1]));
    case VAR17:
        return 1 / (1 + FUN5(4 * FUN1(VAR2, VAR4->VAR13[0])));
    case VAR18:
    {
        double VAR19 = FUN1(VAR2, VAR4->VAR13[0]);
        return FUN5(-VAR19 * VAR19 / 2) / FUN6(2 * VAR20);
    }
    case VAR21:
        return VAR4->VAR7 * VAR2->VAR22[FUN7(FUN1(VAR2, VAR4->VAR13[0]), 0, VAR23 - 1)];
    case VAR24:
    {
        double VAR19 = VAR25;
        while (FUN1(VAR2, VAR4->VAR13[0]))
            VAR19 = FUN1(VAR2, VAR4->VAR13[1]);
        return VAR19;
    }
    default:
    {
        double VAR19 = FUN1(VAR2, VAR4->VAR13[0]);
        double VAR26 = FUN1(VAR2, VAR4->VAR13[1]);
        switch (VAR4->VAR5)
        {
        case VAR27:
            return VAR4->VAR7 * (VAR19 - FUN8(VAR19 / VAR26) * VAR26);
        case VAR28:
            return VAR4->VAR7 * (VAR19 > VAR26 ? VAR19 : VAR26);
        case VAR29:
            return VAR4->VAR7 * (VAR19 < VAR26 ? VAR19 : VAR26);
        case VAR30:
            return VAR4->VAR7 * (VAR19 == VAR26 ? 1.0 : 0.0);
        case VAR31:
            return VAR4->VAR7 * (VAR19 > VAR26 ? 1.0 : 0.0);
        case VAR32:
            return VAR4->VAR7 * (VAR19 >= VAR26 ? 1.0 : 0.0);
        case VAR33:
            return VAR4->VAR7 * FUN9(VAR19, VAR26);
        case VAR34:
            return VAR4->VAR7 * (VAR19 * VAR26);
        case VAR35:
            return VAR4->VAR7 * (VAR19 / VAR26);
        case VAR36:
            return VAR4->VAR7 * (VAR19 + VAR26);
        case VAR37:
            return VAR26;
        case VAR38:
            return VAR4->VAR7 * (VAR2->VAR22[FUN7(VAR19, 0, VAR23 - 1)] = VAR26);
        }
    }
    }
    return VAR25;
}