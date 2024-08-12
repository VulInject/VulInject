static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    const VAR6 *VAR7 = FUN2(VAR3->VAR8);
    opj_image_cmptparm_t VAR9[4] = {{0}};
    VAR1 *VAR10;
    int VAR11;
    int VAR12[4];
    int VAR13[4];
    int VAR14;
    OPJ_COLOR_SPACE VAR15 = VAR16;
    VAR12[0] = VAR12[3] = 1;
    VAR13[0] = VAR13[3] = 1;
    VAR12[1] = VAR12[2] = 1 << VAR7->VAR17;
    VAR13[1] = VAR13[2] = 1 << VAR7->VAR18;
    VAR14 = VAR7->VAR19;
    switch (VAR3->VAR8)
    {
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
        VAR15 = VAR24;
        break;
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
        VAR15 = VAR36;
        break;
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
    case VAR41:
    case VAR42:
    case VAR43:
    case VAR44:
    case VAR45:
    case VAR46:
    case VAR47:
    case VAR48:
    case VAR49:
    case VAR50:
    case VAR51:
    case VAR52:
    case VAR53:
    case VAR54:
    case VAR55:
    case VAR56:
    case VAR57:
    case VAR58:
    case VAR59:
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR63:
    case VAR64:
    case VAR65:
    case VAR66:
    case VAR67:
    case VAR68:
    case VAR69:
        VAR15 = VAR70;
        break;
    default:
        FUN3(VAR3, VAR71, "", FUN4(VAR3->VAR8));
    }
    for (VAR11 = 0; VAR11 < VAR14; VAR11++)
    {
        VAR9[VAR11].VAR72 = VAR7->VAR73[VAR11].VAR74 + 1;
        VAR9[VAR11].VAR75 = VAR7->VAR73[VAR11].VAR74 + 1;
        VAR9[VAR11].VAR76 = 0;
        VAR9[VAR11].VAR77 = VAR12[VAR11];
        VAR9[VAR11].VAR78 = VAR13[VAR11];
        VAR9[VAR11].VAR79 = (VAR3->VAR80 + VAR12[VAR11] - 1) / VAR12[VAR11];
        VAR9[VAR11].VAR81 = (VAR3->VAR82 + VAR13[VAR11] - 1) / VAR13[VAR11];
    }
    VAR10 = FUN5(VAR14, VAR9, VAR15);
    VAR10->VAR83 = 0;
    VAR10->VAR84 = 0;
    VAR10->VAR85 = (VAR3->VAR80 - 1) * VAR5->VAR86 + 1;
    VAR10->VAR87 = (VAR3->VAR82 - 1) * VAR5->VAR88 + 1;
    return VAR10;