static int FUN1(VAR1 *VAR2)
{
    DCACoreFrameHeader VAR3 = {0};
    int VAR4 = FUN2(&VAR3, &VAR2->VAR5);
    if (VAR4 < 0)
    {
        switch (VAR4)
        {
        case VAR6:
            FUN3(VAR2->VAR7, VAR8, "");
            return VAR3.VAR9 ? VAR10 : VAR11;
        case VAR12:
            FUN3(VAR2->VAR7, VAR8, "", VAR3.VAR13);
            return (VAR3.VAR13 < 6 || VAR3.VAR9) ? VAR10 : VAR11;
        case VAR14:
            FUN3(VAR2->VAR7, VAR8, "", VAR3.VAR15);
            return VAR10;
        case VAR16:
            FUN3(VAR2->VAR7, VAR8, "", VAR3.VAR17);
            return VAR11;
        case VAR18:
            FUN3(VAR2->VAR7, VAR8, "");
            return VAR10;
        case VAR19:
            FUN3(VAR2->VAR7, VAR8, "");
            return VAR10;
        case VAR20:
            FUN3(VAR2->VAR7, VAR8, "");
            return VAR10;
        case VAR21:
            FUN3(VAR2->VAR7, VAR8, "");
            return VAR10;
        default:
            FUN3(VAR2->VAR7, VAR8, "");
            return VAR10;
        }
    }
    VAR2->VAR22 = VAR3.VAR22;
    VAR2->VAR13 = VAR3.VAR13;
    VAR2->VAR15 = VAR3.VAR15;
    VAR2->VAR17 = VAR3.VAR17;
    VAR2->VAR23 = VAR24[VAR3.VAR25];
    VAR2->VAR26 = VAR27[VAR3.VAR28];
    VAR2->VAR29 = VAR3.VAR29;
    VAR2->VAR30 = VAR3.VAR30;
    VAR2->VAR31 = VAR3.VAR31;
    VAR2->VAR32 = VAR3.VAR32;
    VAR2->VAR33 = VAR3.VAR33;
    VAR2->VAR34 = VAR3.VAR34;
    VAR2->VAR35 = VAR3.VAR35;
    VAR2->VAR36 = VAR3.VAR36;
    VAR2->VAR37 = VAR3.VAR37;
    VAR2->VAR38 = VAR39[VAR3.VAR40];
    VAR2->VAR41 = VAR3.VAR40 & 1;
    VAR2->VAR42 = VAR3.VAR42;
    VAR2->VAR43 = VAR3.VAR43;
    return 0;
}