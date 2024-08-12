static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    unsigned int VAR10;
    unsigned int VAR11;
    VAR12 *VAR13;
    int VAR14 = 0;
    int VAR15 = 0;
    char *VAR16;
    int VAR17;
    VAR6->VAR18 = VAR19;
    VAR6->VAR20 = VAR21;
    VAR6->VAR22 = NULL;
    VAR6->VAR23 = 0;
    VAR6->VAR24 = 0;
    VAR6->VAR25 = VAR6->VAR26 = 0;
    FUN2(VAR9, 12, VAR27);
    VAR10 = FUN3(VAR9);
    VAR11 = (FUN4(VAR9) + 1) & (~1);
    do
    {
        switch (VAR10)
        {
        case VAR28:
        case VAR29:
            FUN2(VAR9, VAR11, VAR27);
            break;
        case VAR30:
            FUN2(VAR9, 8, VAR27);
            VAR6->VAR23 = FUN3(VAR9);
            if ((unsigned)VAR6->VAR23 >= VAR31 / VAR32)
            {
                VAR6->VAR23 = 0;
                return -1;
            }
            VAR6->VAR22 = FUN5(VAR6->VAR23 * VAR32);
            break;
        case VAR33:
            VAR16 = FUN5(VAR11 + 1);
            if (!VAR16)
                return FUN6(VAR34);
            if ((VAR14 = FUN7(VAR9, VAR16, VAR11)) != VAR11)
                return FUN6(VAR35);
            VAR16[VAR11] = 0;
            FUN8(&VAR2->VAR36, "", VAR16, VAR37);
            break;
        case VAR38:
            VAR6->VAR18 = FUN3(VAR9);
            VAR6->VAR20 = FUN3(VAR9);
            break;
        case VAR39:
            if ((unsigned)VAR15 >= VAR6->VAR23)
                return VAR40;
            if ((VAR14 = FUN7(VAR9, &VAR6->VAR22[VAR15 * VAR32], VAR32)) != VAR32)
                return FUN6(VAR35);
            for (VAR17 = VAR15 * VAR32; VAR17 < (VAR15 + 1) * VAR32; VAR17++)
            {
                VAR6->VAR22[VAR17] = VAR41[VAR6->VAR22[VAR17]];
            }
            VAR15++;
            break;
        default:
            FUN9(VAR2, VAR42, "", (VAR43)VAR10, (VAR43)(VAR10 >> 8), (VAR43)(VAR10 >> 16), (VAR43)(VAR10 >> 24), (VAR43)VAR10, (VAR43)(VAR10 >> 8), (VAR43)(VAR10 >> 16), (VAR43)(VAR10 >> 24));
            return VAR40;
            break;
        }
        VAR10 = FUN3(VAR9);
        VAR11 = (FUN4(VAR9) + 1) & (~1);
        if (FUN10(VAR9))
            return FUN6(VAR35);
    } while (VAR10 != VAR44);
    VAR13 = FUN11(VAR2, 0);
    if (!VAR13)
        return FUN6(VAR34);
    FUN12(VAR13, 33, 1, VAR45);
    VAR6->VAR25 = VAR13->VAR46;
    VAR13->VAR47->VAR48 = VAR49;
    VAR13->VAR47->VAR50 = VAR51;
    VAR13->VAR47->VAR52 = 0;
    VAR13->VAR47->VAR18 = VAR6->VAR18;
    VAR13->VAR47->VAR20 = VAR6->VAR20;
    VAR13->VAR47->VAR53 = &VAR6->VAR54;
    VAR13 = FUN11(VAR2, 0);
    if (!VAR13)
        return FUN6(VAR34);
    FUN12(VAR13, 33, 1, VAR45);
    VAR6->VAR26 = VAR13->VAR46;
    VAR13->VAR47->VAR48 = VAR55;
    VAR13->VAR47->VAR50 = VAR56;
    VAR13->VAR47->VAR52 = 1;
    VAR13->VAR47->VAR57 = VAR58;
    VAR13->VAR47->VAR59 = VAR60;
    VAR13->VAR47->VAR61 = VAR62;
    VAR13->VAR47->VAR63 = VAR13->VAR47->VAR57 * VAR13->VAR47->VAR61 * VAR13->VAR47->VAR59;
    VAR13->VAR47->VAR64 = VAR60 * VAR58;
    return 0;
}