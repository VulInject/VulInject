static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    struct VAR5 *VAR6 = VAR2->VAR7->VAR8;
    int VAR9, VAR10;
    uint64_t VAR11;
    FUN2(VAR2);
    FUN3(VAR2, VAR12, 0);
    FUN3(VAR2, VAR13, 0);
    FUN3(VAR2, VAR14, 0);
    FUN3(VAR2, VAR15, 0);
    if (VAR16)
    {
        FUN3(VAR2, VAR17, 0);
    }
    if (VAR18)
    {
        FUN3(VAR2, VAR19, 0);
    }
    if (VAR20)
    {
        FUN3(VAR2, VAR21, 0);
    }
    if (VAR22)
    {
        FUN3(VAR2, VAR23, 0);
    }
    if (VAR24)
    {
        FUN3(VAR2, VAR25, 0);
    }
    if (VAR26)
    {
        FUN3(VAR2, VAR27, 0);
    }
    if (VAR28)
    {
        FUN3(VAR2, VAR29, 0);
    }
    if (VAR30)
    {
        FUN3(VAR2, VAR31, 0);
    }
    if (VAR32)
    {
        FUN3(VAR2, VAR33, 0);
    }
    if (VAR34)
    {
        FUN3(VAR2, VAR35, 0);
    }
    if (!VAR4->VAR36)
    {
        FUN3(VAR2, VAR37, 0);
        VAR4->VAR36 = !FUN4();
    }
    if (VAR38)
    {
        FUN3(VAR2, VAR39, 0);
        FUN3(VAR2, VAR40, 0);
        FUN3(VAR2, VAR41, 0);
        FUN3(VAR2, VAR42, 0);
    }
    FUN3(VAR2, VAR43, 0);
    FUN3(VAR2, VAR44, 0);
    if (VAR4->VAR45[VAR46] & (1 << VAR47))
    {
        FUN3(VAR2, VAR48, 0);
    }
    if (VAR4->VAR45[VAR46] & (1 << VAR49))
    {
        FUN3(VAR2, VAR50, 0);
    }
    if (VAR4->VAR45[VAR46] & (1 << VAR51))
    {
        FUN3(VAR2, VAR52, 0);
    }
    if (VAR53)
    {
        FUN3(VAR2, VAR54, 0);
        FUN3(VAR2, VAR55, 0);
        FUN3(VAR2, VAR56, 0);
        FUN3(VAR2, VAR57, 0);
        for (VAR10 = 0; VAR10 < VAR58; VAR10++)
        {
            FUN3(VAR2, VAR59 + VAR10, 0);
        }
        for (VAR10 = 0; VAR10 < VAR60; VAR10++)
        {
            FUN3(VAR2, VAR61 + VAR10, 0);
            FUN3(VAR2, VAR62 + VAR10, 0);
        }
    }
    if (VAR4->VAR63)
    {
        FUN3(VAR2, VAR64, 0);
        FUN3(VAR2, VAR65, 0);
        if (VAR66)
        {
            FUN3(VAR2, VAR67, 0);
        }
        for (VAR10 = 0; VAR10 < (VAR4->VAR63 & 0xff) * 4; VAR10++)
        {
            FUN3(VAR2, VAR68 + VAR10, 0);
        }
    }
    if (VAR69)
    {
        FUN3(VAR2, VAR70, 0);
        FUN3(VAR2, VAR71, 0);
    }
    if (VAR2->VAR72)
    {
        FUN3(VAR2, VAR73, 0);
    }
    if (VAR2->VAR74)
    {
        FUN3(VAR2, VAR75, 0);
    }
    if (VAR76)
    {
        int VAR77;
        for (VAR77 = 0; VAR77 < VAR78; VAR77++)
        {
            FUN3(VAR2, VAR79 + VAR77, 0);
        }
    }
    if (VAR80)
    {
        FUN3(VAR2, VAR81, 0);
    }
    if (VAR2->VAR82)
    {
        uint32_t VAR83;
        FUN3(VAR2, VAR84, 0);
        FUN3(VAR2, VAR85, 0);
        FUN3(VAR2, VAR86, 0);
        for (VAR83 = VAR87; VAR83 <= VAR88; VAR83++)
        {
            FUN3(VAR2, VAR83, 0);
        }
    }
    if (VAR89)
    {
        uint32_t VAR83;
        for (VAR83 = VAR90; VAR83 <= VAR91; VAR83++)
        {
            FUN3(VAR2, VAR83, 0);
        }
    }
    if (VAR4->VAR45[VAR92] & VAR93)
    {
        FUN3(VAR2, VAR94, 0);
        FUN3(VAR2, VAR95, 0);
        FUN3(VAR2, VAR96, 0);
        FUN3(VAR2, VAR97, 0);
        FUN3(VAR2, VAR98, 0);
        FUN3(VAR2, VAR99, 0);
        FUN3(VAR2, VAR100, 0);
        FUN3(VAR2, VAR101, 0);
        FUN3(VAR2, VAR102, 0);
        FUN3(VAR2, VAR103, 0);
        FUN3(VAR2, VAR104, 0);
        FUN3(VAR2, VAR105, 0);
        for (VAR10 = 0; VAR10 < VAR106; VAR10++)
        {
            FUN3(VAR2, FUN5(VAR10), 0);
            FUN3(VAR2, FUN6(VAR10), 0);
        }
    }
    VAR9 = FUN7(FUN8(VAR2), VAR107, VAR2->VAR7);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    if (VAR9 < VAR2->VAR7->VAR108)
    {
        struct VAR5 *VAR109 = &VAR2->VAR7->VAR8[VAR9];
        FUN9("" VAR110, (VAR111)VAR109->VAR112);
    }
    assert(VAR9 == VAR2->VAR7->VAR108);
    if (VAR2->VAR113)
    {
        FUN10(VAR114 > 52);
        assert(VAR2->VAR115 <= VAR114);
        VAR11 = FUN11(VAR2->VAR115, 52 - VAR2->VAR115);
    }
    else
    {
        VAR11 = 0;
    }
    for (VAR10 = 0; VAR10 < VAR9; VAR10++)
    {
        uint32_t VAR112 = VAR6[VAR10].VAR112;
        switch (VAR112)
        {
        case VAR12:
            VAR4->VAR116 = VAR6[VAR10].VAR117;
            break;
        case VAR13:
            VAR4->VAR118 = VAR6[VAR10].VAR117;
            break;
        case VAR14:
            VAR4->VAR119 = VAR6[VAR10].VAR117;
            break;
        case VAR15:
            VAR4->VAR120 = VAR6[VAR10].VAR117;
            break;
        case VAR17:
            VAR4->VAR121 = VAR6[VAR10].VAR117;
            break;
        case VAR39:
            VAR4->VAR122 = VAR6[VAR10].VAR117;
            break;
        case VAR40:
            VAR4->VAR123 = VAR6[VAR10].VAR117;
            break;
        case VAR41:
            VAR4->VAR124 = VAR6[VAR10].VAR117;
            break;
        case VAR42:
            VAR4->VAR125 = VAR6[VAR10].VAR117;
            break;
        case VAR37:
            VAR4->VAR126 = VAR6[VAR10].VAR117;
            break;
        case VAR21:
            VAR4->VAR127 = VAR6[VAR10].VAR117;
            break;
        case VAR23:
            VAR4->VAR128 = VAR6[VAR10].VAR117;
            break;
        case VAR25:
            VAR4->VAR129 = VAR6[VAR10].VAR117;
            break;
        case VAR19:
            VAR4->VAR130 = VAR6[VAR10].VAR117;
            break;
        case VAR43:
            VAR4->VAR131 = VAR6[VAR10].VAR117;
            break;
        case VAR44:
            VAR4->VAR132 = VAR6[VAR10].VAR117;
            break;
        case VAR64:
            VAR4->VAR133 = VAR6[VAR10].VAR117;
            break;
        case VAR65:
            VAR4->VAR134 = VAR6[VAR10].VAR117;
            break;
        case VAR67:
            VAR4->VAR135 = VAR6[VAR10].VAR117;
            break;
        case VAR27:
            VAR4->VAR136 = VAR6[VAR10].VAR117;
            break;
        case VAR29:
            VAR4->VAR137 = VAR6[VAR10].VAR117;
            break;
        case VAR31:
            VAR4->VAR138 = VAR6[VAR10].VAR117;
            break;
        case VAR33:
            VAR4->VAR139 = VAR6[VAR10].VAR117;
            break;
        case VAR35:
            VAR4->VAR140 = VAR6[VAR10].VAR117;
            break;
        default:
            if (VAR6[VAR10].VAR112 >= VAR68 && VAR6[VAR10].VAR112 < VAR68 + (VAR4->VAR63 & 0xff) * 4)
            {
                VAR4->VAR141[VAR6[VAR10].VAR112 - VAR68] = VAR6[VAR10].VAR117;
            }
            break;
        case VAR48:
            VAR4->VAR142 = VAR6[VAR10].VAR117;
            break;
        case VAR50:
            VAR4->VAR143 = VAR6[VAR10].VAR117;
            break;
        case VAR52:
            VAR4->VAR144 = VAR6[VAR10].VAR117;
            break;
        case VAR54:
            VAR4->VAR145 = VAR6[VAR10].VAR117;
            break;
        case VAR55:
            VAR4->VAR146 = VAR6[VAR10].VAR117;
            break;
        case VAR56:
            VAR4->VAR147 = VAR6[VAR10].VAR117;
            break;
        case VAR57:
            VAR4->VAR148 = VAR6[VAR10].VAR117;
            break;
        case VAR59 ... VAR59 + VAR58 - 1:
            VAR4->VAR149[VAR112 - VAR59] = VAR6[VAR10].VAR117;
            break;
        case VAR61 ... VAR61 + VAR150 - 1:
            VAR4->VAR151[VAR112 - VAR61] = VAR6[VAR10].VAR117;
            break;
        case VAR62 ... VAR62 + VAR150 - 1:
            VAR4->VAR152[VAR112 - VAR62] = VAR6[VAR10].VAR117;
            break;
        case VAR70:
            VAR4->VAR153 = VAR6[VAR10].VAR117;
            break;
        case VAR71:
            VAR4->VAR154 = VAR6[VAR10].VAR117;
            break;
        case VAR73:
            VAR4->VAR155 = VAR6[VAR10].VAR117;
            break;
        case VAR75:
            VAR4->VAR156 = VAR6[VAR10].VAR117;
            break;
        case VAR79 ... VAR157:
            VAR4->VAR158[VAR112 - VAR79] = VAR6[VAR10].VAR117;
            break;
        case VAR81:
            VAR4->VAR159 = VAR6[VAR10].VAR117;
            break;
        case VAR84:
            VAR4->VAR160 = VAR6[VAR10].VAR117;
            break;
        case VAR85:
            VAR4->VAR161 = VAR6[VAR10].VAR117;
            break;
        case VAR86:
            VAR4->VAR162 = VAR6[VAR10].VAR117;
            break;
        case VAR87 ... VAR88:
            VAR4->VAR163[VAR112 - VAR87] = VAR6[VAR10].VAR117;
            break;
        case VAR90:
        case VAR164:
        case VAR165:
        case VAR166:
            VAR4->VAR167[(VAR112 - VAR90) / 2] = VAR6[VAR10].VAR117;
            break;
        case VAR168:
        case VAR169:
        case VAR170:
        case VAR91:
            VAR4->VAR171[(VAR112 - VAR168) / 2] = VAR6[VAR10].VAR117;
            break;
        case VAR94:
            VAR4->VAR172 = VAR6[VAR10].VAR117;
            break;
        case VAR95:
            VAR4->VAR173[0] = VAR6[VAR10].VAR117;
            break;
        case VAR96:
            VAR4->VAR173[1] = VAR6[VAR10].VAR117;
            break;
        case VAR97:
            VAR4->VAR173[2] = VAR6[VAR10].VAR117;
            break;
        case VAR98:
            VAR4->VAR173[3] = VAR6[VAR10].VAR117;
            break;
        case VAR99:
            VAR4->VAR173[4] = VAR6[VAR10].VAR117;
            break;
        case VAR100:
            VAR4->VAR173[5] = VAR6[VAR10].VAR117;
            break;
        case VAR101:
            VAR4->VAR173[6] = VAR6[VAR10].VAR117;
            break;
        case VAR102:
            VAR4->VAR173[7] = VAR6[VAR10].VAR117;
            break;
        case VAR103:
            VAR4->VAR173[8] = VAR6[VAR10].VAR117;
            break;
        case VAR104:
            VAR4->VAR173[9] = VAR6[VAR10].VAR117;
            break;
        case VAR105:
            VAR4->VAR173[10] = VAR6[VAR10].VAR117;
            break;
        case FUN5(0)... FUN6(VAR106 - 1):
            if (VAR112 & 1)
            {
                VAR4->VAR174[FUN12(VAR112)].VAR175 = VAR6[VAR10].VAR117 | VAR11;
            }
            else
            {
                VAR4->VAR174[FUN12(VAR112)].VAR176 = VAR6[VAR10].VAR117;
            }
            break;
        }
    }
    return 0;
}