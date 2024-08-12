static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, const VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = &VAR10->VAR14;
    const VAR6 *VAR15 = VAR7;
    const VAR6 *VAR16 = VAR7 + VAR8;
    int VAR17, VAR18;
    int VAR19 = 0, VAR20 = 0;
    int VAR21 = 0;
    for (;;)
    {
        uint32_t VAR22 = -1;
        VAR15 = FUN2(VAR15, VAR16, &VAR22);
        if (VAR22 > 0x1ff)
        {
            if (!VAR20)
            {
                if (VAR23 && (VAR2->VAR24 & VAR25) && !VAR2->VAR26)
                {
                    int VAR27;
                    FUN3(VAR2->VAR28 > 1);
                    VAR2->FUN4(VAR2, VAR29, &VAR13->VAR30[0], NULL, VAR10->VAR31, sizeof(void *));
                    for (VAR27 = 0; VAR27 < VAR10->VAR31; VAR27++)
                        VAR13->VAR32.VAR33 += VAR13->VAR30[VAR27]->VAR32.VAR33;
                    VAR17 = FUN5(VAR2, VAR4);
                    if (VAR17 < 0)
                        return VAR17;
                    else if (VAR17)
                    {
                        if (VAR13->VAR34 || VAR13->VAR35)
                            *VAR5 = 1;
                        VAR13->VAR36 = 0;
                        return FUN6(0, VAR15 - VAR7 - VAR13->VAR37.VAR38);
                        VAR18 = VAR16 - VAR15;
                        if (VAR2->VAR39 & VAR40)
                        {
                            FUN7(VAR2, VAR41, "", VAR22, VAR15 - VAR7, VAR18);
                            switch (VAR22)
                            {
                            case VAR42:
                                if (VAR19 == 0)
                                {
                                    FUN8(VAR2, VAR15, VAR18);
                                    if (VAR7 != VAR2->VAR43)
                                        VAR10->VAR44 = 1;
                                }
                                else
                                {
                                    FUN7(VAR2, VAR45, "", VAR19);
                                    if (VAR2->VAR46 & VAR47)
                                        break;
                                case VAR48:
                                    if (VAR21 && VAR13->VAR49 == VAR50)
                                    {
                                        FUN7(VAR2, VAR51, "");
                                        break;
                                        VAR21 = 1;
                                        if (VAR13->VAR52 <= 0 || VAR13->VAR53 <= 0)
                                        {
                                            FUN7(VAR2, VAR45, "", VAR13->VAR52, VAR13->VAR53);
                                            if (VAR10->VAR54)
                                            {
                                                VAR13->VAR55 = 3;
                                                VAR13->VAR56[0] = 1;
                                                if (VAR23 && (VAR2->VAR24 & VAR25) && !VAR2->VAR26 && VAR10->VAR31)
                                                {
                                                    int VAR27;
                                                    VAR2->FUN4(VAR2, VAR29, VAR13->VAR30, NULL, VAR10->VAR31, sizeof(void *));
                                                    for (VAR27 = 0; VAR27 < VAR10->VAR31; VAR27++)
                                                        VAR13->VAR32.VAR33 += VAR13->VAR30[VAR27]->VAR32.VAR33;
                                                    VAR10->VAR31 = 0;
                                                    if (VAR19 == 0 || VAR19 == VAR57)
                                                    {
                                                        VAR17 = FUN9(VAR2);
                                                        if (VAR17 < 0)
                                                        {
                                                            FUN7(VAR2, VAR45, "");
                                                            return VAR17;
                                                            if (FUN10(VAR2, VAR15, VAR18) < 0)
                                                                VAR13->VAR36 = 0;
                                                            VAR13->VAR58 = 1;
                                                            VAR19 = VAR48;
                                                        }
                                                        else
                                                        {
                                                            FUN7(VAR2, VAR45, "", VAR19);
                                                            if (VAR2->VAR46 & VAR47)
                                                                break;
                                                        case VAR59:
                                                            FUN11(&VAR13->VAR60, VAR15, VAR18 * 8);
                                                            switch (FUN12(&VAR13->VAR60, 4))
                                                            {
                                                            case 0x1:
                                                                if (VAR19 == 0)
                                                                {
                                                                    FUN13(VAR10);
                                                                }
                                                                else
                                                                {
                                                                    FUN7(VAR2, VAR45, "", VAR19);
                                                                    if (VAR2->VAR46 & VAR47)
                                                                        break;
                                                                case 0x2:
                                                                    FUN14(VAR10);
                                                                    break;
                                                                case 0x3:
                                                                    FUN15(VAR13);
                                                                    break;
                                                                case 0x7:
                                                                    FUN16(VAR10);
                                                                    break;
                                                                case 0x8:
                                                                    if (VAR19 == VAR48)
                                                                    {
                                                                        FUN17(VAR10);
                                                                    }
                                                                    else
                                                                    {
                                                                        FUN7(VAR2, VAR45, "", VAR19);
                                                                        if (VAR2->VAR46 & VAR47)
                                                                            break;
                                                                        break;
                                                                    case VAR61:
                                                                        FUN18(VAR2, VAR15, VAR18);
                                                                        break;
                                                                    case VAR62:
                                                                        if (VAR19 == 0)
                                                                        {
                                                                            VAR13->VAR63 = 0;
                                                                            FUN19(VAR2, VAR15, VAR18);
                                                                            VAR10->VAR44 = 1;
                                                                        }
                                                                        else
                                                                        {
                                                                            FUN7(VAR2, VAR45, "", VAR19);
                                                                            if (VAR2->VAR46 & VAR47)
                                                                                break;
                                                                        default:
                                                                            if (VAR22 >= VAR57 && VAR22 <= VAR64 && VAR19 == VAR48)
                                                                            {
                                                                                if (VAR13->VAR65 && !VAR13->VAR66)
                                                                                {
                                                                                    VAR13->VAR66 = 1;
                                                                                    FUN7(VAR13->VAR2, VAR45, "");
                                                                                    if (VAR13->VAR49 == 0 || (VAR13->VAR66 && VAR13->VAR49 != VAR50))
                                                                                    {
                                                                                        FUN7(VAR13->VAR2, VAR45, "", VAR13->VAR49);
                                                                                        VAR13->VAR49 = VAR50;
                                                                                        if (VAR13->VAR65 && !VAR13->VAR67)
                                                                                        {
                                                                                            FUN7(VAR13->VAR2, VAR51, "");
                                                                                            if (VAR13->VAR49 == VAR50)
                                                                                            {
                                                                                                VAR13->VAR63 = 0;
                                                                                                VAR13->VAR68 = 16 * VAR13->VAR69;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                VAR13->VAR63 ^= 1;
                                                                                                VAR13->VAR68 = 8 * VAR13->VAR69;
                                                                                                memset(VAR13->VAR70, 0, VAR13->VAR71 * VAR13->VAR69);
                                                                                                if (VAR22 >= VAR57 && VAR22 <= VAR64 && VAR19 != 0)
                                                                                                {
                                                                                                    const int VAR72 = VAR13->VAR49 != VAR50;
                                                                                                    int VAR73 = VAR22 - VAR57;
                                                                                                    VAR19 = VAR57;
                                                                                                    if (VAR13->VAR74 != VAR75 && VAR13->VAR69 > 2800 / 16)
                                                                                                        VAR73 += (*VAR15 & 0xE0) << 2;
                                                                                                    VAR73 <<= VAR72;
                                                                                                    if (VAR13->VAR49 == VAR76)
                                                                                                        VAR73++;
                                                                                                    if (VAR73 >= VAR13->VAR69)
                                                                                                    {
                                                                                                        FUN7(VAR13->VAR2, VAR45, "", VAR73, VAR13->VAR69);
                                                                                                        return -1;
                                                                                                        if (VAR13->VAR34 == NULL)
                                                                                                        {
                                                                                                            if (VAR13->VAR36 == VAR77)
                                                                                                            {
                                                                                                                if (!VAR13->VAR78)
                                                                                                                {
                                                                                                                    VAR20 = 1;
                                                                                                                    break;
                                                                                                                    if (VAR13->VAR36 == VAR79 || (VAR13->VAR80 & VAR81))
                                                                                                                        VAR10->VAR44 = 1;
                                                                                                                    if (VAR13->VAR82 == NULL)
                                                                                                                    {
                                                                                                                        if (VAR13->VAR36 == VAR83 && !VAR10->VAR44)
                                                                                                                        {
                                                                                                                            VAR20 = 1;
                                                                                                                            break;
                                                                                                                            if ((VAR2->VAR20 >= VAR84 && VAR13->VAR36 == VAR77) || (VAR2->VAR20 >= VAR85 && VAR13->VAR36 != VAR79) || VAR2->VAR20 >= VAR86)
                                                                                                                            {
                                                                                                                                VAR20 = 1;
                                                                                                                                break;
                                                                                                                                if (!VAR10->VAR87)
                                                                                                                                    break;
                                                                                                                                if (VAR13->VAR74 == VAR88)
                                                                                                                                {
                                                                                                                                    if (VAR73 < VAR2->VAR89 || VAR73 >= VAR13->VAR69 - VAR2->VAR90)
                                                                                                                                        break;
                                                                                                                                    if (!VAR13->VAR36)
                                                                                                                                    {
                                                                                                                                        FUN7(VAR2, VAR45, "");
                                                                                                                                        if (VAR2->VAR46 & VAR47)
                                                                                                                                            break;
                                                                                                                                        if (VAR13->VAR58)
                                                                                                                                        {
                                                                                                                                            VAR20 = 0;
                                                                                                                                            VAR13->VAR58 = 0;
                                                                                                                                            if (FUN20(VAR13, VAR7, VAR8) < 0)
                                                                                                                                                return -1;
                                                                                                                                            if (!VAR13->VAR91)
                                                                                                                                            {
                                                                                                                                                FUN7(VAR2, VAR45, "");
                                                                                                                                                if (VAR23 && (VAR2->VAR24 & VAR25) && !VAR2->VAR26)
                                                                                                                                                {
                                                                                                                                                    int VAR92 = (VAR13->VAR69 * VAR10->VAR31 + VAR13->VAR93 / 2) / VAR13->VAR93;
                                                                                                                                                    FUN3(VAR2->VAR28 > 1);
                                                                                                                                                    if (VAR92 <= VAR73)
                                                                                                                                                    {
                                                                                                                                                        VAR12 *VAR30 = VAR13->VAR30[VAR10->VAR31];
                                                                                                                                                        VAR30->VAR94 = VAR73;
                                                                                                                                                        VAR30->VAR95 = VAR13->VAR69;
                                                                                                                                                        if (VAR10->VAR31)
                                                                                                                                                        {
                                                                                                                                                            VAR13->VAR30[VAR10->VAR31 - 1]->VAR95 = VAR73;
                                                                                                                                                            VAR17 = FUN21(VAR30, VAR13);
                                                                                                                                                            if (VAR17 < 0)
                                                                                                                                                                return VAR17;
                                                                                                                                                            FUN11(&VAR30->VAR60, VAR15, VAR18 * 8);
                                                                                                                                                            VAR10->VAR31++;
                                                                                                                                                            VAR15 += 2;
                                                                                                                                                        }
                                                                                                                                                        else
                                                                                                                                                        {
                                                                                                                                                            VAR17 = FUN22(VAR13, VAR73, &VAR15, VAR18);
                                                                                                                                                            FUN23();
                                                                                                                                                            if (VAR17 < 0)
                                                                                                                                                            {
                                                                                                                                                                if (VAR2->VAR46 & VAR47)
                                                                                                                                                                    return VAR17;
                                                                                                                                                                if (VAR13->VAR96 >= 0 && VAR13->VAR97 >= 0)
                                                                                                                                                                    FUN24(&VAR13->VAR32, VAR13->VAR96, VAR13->VAR97, VAR13->VAR98, VAR13->VAR73, VAR99 | VAR100 | VAR101);
                                                                                                                                                            }
                                                                                                                                                            else
                                                                                                                                                            {
                                                                                                                                                                FUN24(&VAR13->VAR32, VAR13->VAR96, VAR13->VAR97, VAR13->VAR98 - 1, VAR13->VAR73, VAR102 | VAR103 | VAR104);
                                                                                                                                                                break