static VAR1 *FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, double VAR8, enum AVSampleFormat VAR9, enum SwrFilterType VAR10, int VAR11, double VAR12, int VAR13)
{
    double VAR14 = VAR8 ? VAR8 : 0.97;
    double VAR15 = FUN2(VAR3 * VAR14 / VAR4, 1.0);
    int VAR16 = 1 << VAR6;
    if (!VAR2 || VAR2->VAR6 != VAR6 || VAR2->VAR7 != VAR7 || VAR2->VAR15 != VAR15 || VAR2->VAR17 != FUN3((int)FUN4(VAR5 / VAR15), 1) || VAR2->VAR9 != VAR9 || VAR2->VAR10 != VAR10 || VAR2->VAR11 != VAR11)
    {
        VAR2 = FUN5(sizeof(*VAR2));
        if (!VAR2)
            return NULL;
        VAR2->VAR9 = VAR9;
        VAR2->VAR18 = FUN6(VAR2->VAR9);
        switch (VAR2->VAR9)
        {
        case VAR19:
            VAR2->VAR20 = 15;
            break;
        case VAR21:
            VAR2->VAR20 = 30;
            break;
        case VAR22:
        case VAR23:
            VAR2->VAR20 = 0;
            break;
        default:
            FUN7(NULL, VAR24, "");
            FUN8(0);
            VAR2->VAR6 = VAR6;
            VAR2->VAR25 = VAR16 - 1;
            VAR2->VAR7 = VAR7;
            VAR2->VAR15 = VAR15;
            VAR2->VAR17 = FUN3((int)FUN4(VAR5 / VAR15), 1);
            VAR2->VAR26 = FUN9(VAR2->VAR17, 8);
            VAR2->VAR27 = FUN10(VAR2->VAR26, (VAR16 + 1) * VAR2->VAR18);
            VAR2->VAR10 = VAR10;
            VAR2->VAR11 = VAR11;
            if (!VAR2->VAR27)
                if (FUN11(VAR2, (void *)VAR2->VAR27, VAR15, VAR2->VAR17, VAR2->VAR26, VAR16, 1 << VAR2->VAR20, VAR10, VAR11))
                    memcpy(VAR2->VAR27 + (VAR2->VAR26 * VAR16 + 1) * VAR2->VAR18, VAR2->VAR27, (VAR2->VAR26 - 1) * VAR2->VAR18);
            memcpy(VAR2->VAR27 + (VAR2->VAR26 * VAR16) * VAR2->VAR18, VAR2->VAR27 + (VAR2->VAR26 - 1) * VAR2->VAR18, VAR2->VAR18);
            VAR2->VAR28 = 0;
            if (!FUN12(&VAR2->VAR29, &VAR2->VAR30, VAR3, VAR4 * (VAR31)VAR16, VAR32 / 2))
                VAR2->VAR33 = VAR2->VAR30;
            VAR2->VAR34 = -VAR16 * ((VAR2->VAR17 - 1) / 2);
            VAR2->VAR35 = 0;
            return VAR2;
        VAR36:
            FUN13(&VAR2->VAR27);
            FUN14(VAR2);
            return NULL