static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    unsigned char VAR10;
    int VAR11;
    int VAR12;
    if (VAR6->VAR13 || VAR9->VAR14)
        return FUN2(VAR15);
    VAR10 = FUN3(VAR9);
    switch (VAR10)
    {
    case VAR16:
        if (VAR6->VAR17)
        {
            FUN4(VAR2, VAR18, "");
            FUN5(&VAR6->VAR17);
        }
        VAR6->VAR17 = FUN6(VAR19);
        if (!VAR6->VAR17)
            return FUN2(VAR20);
        if (FUN7(VAR9, VAR6->VAR17, VAR19) != VAR19)
        {
            FUN5(&VAR6->VAR17);
            return FUN2(VAR15);
        }
        return FUN1(VAR2, VAR4);
    case VAR21:
        FUN8(VAR9);
        VAR2->VAR22[1]->VAR23->VAR24 = 1000000 / (256 - FUN3(VAR9));
        VAR2->VAR22[1]->VAR23->VAR25 = VAR2->VAR22[1]->VAR23->VAR26 * VAR2->VAR22[1]->VAR23->VAR24 * VAR2->VAR22[1]->VAR23->VAR27;
    case VAR28:
        VAR11 = FUN8(VAR9);
        VAR12 = FUN9(VAR9, VAR4, VAR11);
        VAR4->VAR29 = 1;
        return VAR12 != VAR11 ? FUN2(VAR15) : VAR12;
    case VAR30:
    case VAR31:
    case VAR32:
        return FUN10(VAR6, VAR9, VAR4, VAR10, VAR2, VAR2->VAR22[0]->VAR23->VAR33 * VAR2->VAR22[0]->VAR23->VAR34);
    case VAR35:
        if (VAR6->VAR36 != 0)
            FUN4(VAR2, VAR37, "");
        VAR6->VAR13 = 1;
        return FUN2(VAR15);
    default:
        FUN4(VAR2, VAR38, "", VAR10, VAR10, VAR10);
        return -1;
    }
}