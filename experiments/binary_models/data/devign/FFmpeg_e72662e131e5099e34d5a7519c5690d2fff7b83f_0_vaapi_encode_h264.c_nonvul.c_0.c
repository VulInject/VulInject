static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR8->VAR12;
    VAR13 *VAR14 = VAR4->VAR15;
    VAR16 *VAR17 = VAR6->VAR18;
    VAR19 *VAR20 = VAR8->VAR9;
    VAR21 *VAR22;
    VAR23 *VAR24;
    int VAR25;
    VAR6->VAR9 = FUN2(sizeof(*VAR22));
    if (!VAR6->VAR9)
        return FUN3(VAR26);
    VAR22 = VAR6->VAR9;
    VAR24 = &VAR22->VAR27;
    if (VAR4->VAR28 == VAR29)
        VAR24->VAR30 = VAR31;
    else
        VAR24->VAR30 = VAR32;
    switch (VAR4->VAR28)
    {
    case VAR29:
        VAR17->VAR33 = VAR34;
        VAR24->VAR35 = 3;
        break;
    case VAR36:
        VAR17->VAR33 = VAR34;
        VAR24->VAR35 = 2;
        break;
    case VAR37:
        VAR17->VAR33 = VAR38;
        VAR24->VAR35 = 1;
        break;
    case VAR39:
        VAR17->VAR33 = VAR40;
        VAR24->VAR35 = 0;
        break;
    default:
        FUN4(0 && "");
    }
    VAR17->VAR41 = 0;
    VAR17->VAR42 = VAR20->VAR43 * VAR20->VAR44;
    VAR17->VAR45 = VAR46;
    VAR17->VAR47 = VAR14->VAR47;
    VAR17->VAR48 = VAR20->VAR49++;
    VAR17->VAR50 = (VAR4->VAR51 - VAR20->VAR52) & ((1 << (4 + VAR11->VAR53.VAR54.VAR55)) - 1);
    for (VAR25 = 0; VAR25 < FUN5(VAR17->VAR56); VAR25++)
    {
        VAR17->VAR56[VAR25].VAR57 = VAR46;
        VAR17->VAR56[VAR25].VAR58 = VAR59;
        VAR17->VAR60[VAR25].VAR57 = VAR46;
        VAR17->VAR60[VAR25].VAR58 = VAR59;
    }
    FUN4(VAR4->VAR61 <= 2);
    if (VAR4->VAR61 >= 1)
    {
        FUN4(VAR4->VAR28 == VAR37 || VAR4->VAR28 == VAR39);
        VAR17->VAR62 = 0;
        VAR17->VAR56[0] = VAR14->VAR63[0];
    }
    if (VAR4->VAR61 >= 2)
    {
        FUN4(VAR4->VAR28 == VAR39);
        VAR17->VAR64 = 0;
        VAR17->VAR60[0] = VAR14->VAR63[1];
    }
    if (VAR4->VAR28 == VAR39)
        VAR17->VAR65 = VAR20->VAR66 - VAR14->VAR67;
    else if (VAR4->VAR28 == VAR37)
        VAR17->VAR65 = VAR20->VAR68 - VAR14->VAR67;
    else
        VAR17->VAR65 = VAR20->VAR69 - VAR14->VAR67;
    VAR17->VAR70 = 1;
    return 0;
}