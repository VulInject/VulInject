static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    unsigned int VAR10;
    unsigned int VAR11;
    VAR12 *VAR13;
    unsigned char VAR14[VAR15];
    int VAR16 = 0;
    int VAR17 = 0;
    int VAR18;
    int VAR19;
    unsigned char VAR20;
    VAR6->VAR21 = VAR22;
    VAR6->VAR23 = VAR24;
    VAR6->VAR25 = NULL;
    VAR6->VAR26 = 0;
    VAR6->VAR27 = 0;
    VAR6->VAR28 = VAR6->VAR29 = 0;
    FUN2(VAR9, 12, VAR30);
    if ((VAR16 = FUN3(VAR9, VAR14, VAR15)) != VAR15)
        return FUN4(VAR31);
    VAR10 = FUN5(&VAR14[0]);
    VAR11 = (FUN6(&VAR14[4]) + 1) & (~1);
    do
    {
        switch (VAR10)
        {
        case VAR32:
        case VAR33:
            FUN2(VAR9, VAR11, VAR30);
            break;
        case VAR34:
            FUN2(VAR9, 8, VAR30);
            if ((VAR16 = FUN3(VAR9, VAR14, 4)) != 4)
                return FUN4(VAR31);
            VAR6->VAR26 = FUN5(&VAR14[0]);
            if ((unsigned)VAR6->VAR26 >= VAR35 / VAR36)
            {
                VAR6->VAR26 = 0;
                return -1;
            }
            VAR6->VAR25 = FUN7(VAR6->VAR26 * VAR36);
            break;
        case VAR37:
            if ((unsigned)VAR11 < 512)
                VAR18 = VAR11;
            else
                VAR18 = 512;
            if ((VAR16 = FUN3(VAR9, VAR2->VAR38, VAR18)) != VAR18)
                return FUN4(VAR31);
            break;
        case VAR39:
            if ((VAR16 = FUN3(VAR9, VAR14, VAR15)) != VAR15)
                return FUN4(VAR31);
            VAR6->VAR21 = FUN5(&VAR14[0]);
            VAR6->VAR23 = FUN5(&VAR14[4]);
            break;
        case VAR40:
            if ((unsigned)VAR17 >= VAR6->VAR26)
                return VAR41;
            if ((VAR16 = FUN3(VAR9, &VAR6->VAR25[VAR17 * VAR36], VAR36)) != VAR36)
                return FUN4(VAR31);
            for (VAR19 = VAR17 * VAR36; VAR19 < (VAR17 + 1) * VAR36; VAR19++)
            {
                VAR20 = ((VAR6->VAR25[VAR19] << 2) & 0xFF) | ((VAR6->VAR25[VAR19] >> 6) & 0xFF);
                VAR6->VAR25[VAR19] = VAR42[VAR20];
            }
            VAR17++;
            break;
        default:
            FUN8(VAR2, VAR43, "", VAR14[0], VAR14[1], VAR14[2], VAR14[3], VAR14[0], VAR14[1], VAR14[2], VAR14[3]);
            return VAR41;
            break;
        }
        if ((VAR16 = FUN3(VAR9, VAR14, VAR15)) != VAR15)
            return FUN4(VAR31);
        VAR10 = FUN5(&VAR14[0]);
        VAR11 = (FUN6(&VAR14[4]) + 1) & (~1);
    } while (VAR10 != VAR44);
    VAR13 = FUN9(VAR2, 0);
    if (!VAR13)
        return FUN4(VAR45);
    FUN10(VAR13, 33, 1, 90000);
    VAR6->VAR28 = VAR13->VAR46;
    VAR13->VAR47->VAR48 = VAR49;
    VAR13->VAR47->VAR50 = VAR51;
    VAR13->VAR47->VAR52 = 0;
    VAR13->VAR47->VAR21 = VAR6->VAR21;
    VAR13->VAR47->VAR23 = VAR6->VAR23;
    VAR13->VAR47->VAR53 = &VAR6->VAR54;
    VAR13 = FUN9(VAR2, 0);
    if (!VAR13)
        return FUN4(VAR45);
    FUN10(VAR13, 33, 1, 90000);
    VAR6->VAR29 = VAR13->VAR46;
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