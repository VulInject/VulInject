static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR8;
    VAR9 *VAR10;
    int VAR11;
    unsigned VAR12;
    int VAR13;
    int VAR14 = 0;
    int VAR15;
    int VAR16 = 0;
    int VAR17 = 0;
    VAR2->VAR18 = 0;
    if (!VAR2->VAR19)
        VAR2->VAR19 = 1;
    VAR2->VAR20 = VAR2->VAR19;
    if (!(VAR8->VAR21 & VAR22))
    {
        VAR2->VAR23 = 0;
        if (!VAR2->VAR24)
            VAR2->VAR25 = NULL;
        FUN2(VAR2);
        if (VAR2->VAR26 == 4)
        {
            if (VAR5 > 8 && FUN3(VAR4) == 1 && FUN3(VAR4 + 5) > (unsigned)VAR5)
            {
                VAR2->VAR27 = 0;
            }
            else if (VAR5 > 3 && FUN3(VAR4) > 1 && FUN3(VAR4) <= (unsigned)VAR5)
                VAR2->VAR27 = 1;
            if (VAR8->VAR28 & VAR29)
                VAR14 = FUN4(VAR2, VAR4, VAR5);
            {
                VAR11 = 0;
                VAR12 = 0;
                VAR13 = VAR2->VAR27 ? 0 : VAR5;
                VAR15 = 0;
                for (;;)
                {
                    int VAR30;
                    int VAR31;
                    int VAR32;
                    const VAR3 *VAR33;
                    int VAR34 = 0;
                    int VAR35;
                    if (VAR11 >= VAR13)
                    {
                        VAR34 = FUN5(VAR2, VAR4, VAR5, &VAR11);
                        if (VAR34 < 0)
                            break;
                        VAR13 = VAR11 + VAR34;
                    }
                    else
                    {
                        VAR11 = FUN6(VAR4, VAR5, VAR11, VAR13);
                        if (VAR11 >= VAR5)
                            break;
                        if (VAR11 >= VAR13)
                            continue;
                        VAR10 = &VAR2->VAR36[VAR12];
                        VAR33 = FUN7(VAR2, VAR10, VAR4 + VAR11, &VAR31, &VAR30, VAR13 - VAR11);
                        if (!VAR33 || VAR31 < 0)
                        {
                            VAR17 = -1;
                            goto VAR37;
                            VAR32 = FUN8(VAR2, VAR4, VAR33, VAR31, VAR11 + VAR30, VAR13);
                            if (VAR2->VAR8->VAR38 & VAR39)
                                FUN9(VAR2->VAR8, VAR40, "", VAR2->VAR18, VAR2->VAR41, VAR11, VAR5, VAR31);
                            if (VAR2->VAR27 && (VAR34 != VAR30) && VAR34)
                                FUN9(VAR2->VAR8, VAR40, "", VAR30, VAR34);
                            VAR11 += VAR30;
                            VAR15++;
                            if (VAR8->VAR42 >= VAR43 && VAR2->VAR41 == 0 && VAR2->VAR18 != VAR44)
                                continue;
                        VAR45:
                            if (VAR6)
                            {
                                switch (VAR2->VAR18)
                                {
                                case VAR46:
                                case VAR47:
                                case VAR48:
                                case VAR49:
                                case VAR50:
                                    FUN9(VAR2->VAR8, VAR51, "", VAR2->VAR18);
                                case VAR52:
                                    VAR2->VAR18 = VAR53;
                                    VAR35 = 0;
                                    switch (VAR2->VAR18)
                                    {
                                    case VAR46:
                                        if ((VAR33[0] & 0xFC) == 0x98)
                                        {
                                            FUN9(VAR2->VAR8, VAR54, "");
                                            VAR2->VAR55 = VAR56;
                                            VAR17 = -1;
                                            goto VAR37;
                                            if (VAR2->VAR18 != VAR46)
                                            {
                                                FUN9(VAR2->VAR8, VAR54, "");
                                                VAR17 = -1;
                                                goto VAR37;
                                                if (!VAR16)
                                                {
                                                    if (VAR2->VAR23 && (VAR8->VAR28 & VAR57))
                                                    {
                                                        FUN9(VAR2, VAR54, "");
                                                        VAR17 = VAR58;
                                                        goto VAR37;
                                                        FUN10(VAR2);
                                                        VAR16 = 1;
                                                        VAR2->VAR59 = 1;
                                                    case VAR47:
                                                        FUN11(&VAR10->VAR60, VAR33, VAR32);
                                                        if (VAR14 >= VAR15 || (!(VAR8->VAR28 & VAR29) && !VAR12))
                                                            VAR2->VAR61 = -1;
                                                        if ((VAR35 = FUN12(VAR2, VAR10)))
                                                            break;
                                                        if (VAR2->VAR62 >= 0)
                                                        {
                                                            if (VAR2->VAR63 != VAR2->VAR62 || VAR10->VAR64 != VAR65)
                                                                VAR2->VAR66 = 1;
                                                            if (VAR2->VAR67 < 0 || FUN13(VAR2->VAR67 - VAR2->VAR63, VAR2->VAR68.VAR69) > VAR2->VAR62)
                                                            {
                                                                VAR2->VAR67 = FUN13(VAR2->VAR63 + VAR2->VAR62, VAR2->VAR68.VAR69);
                                                                if (!VAR2->VAR66)
                                                                    VAR2->VAR67 = VAR2->VAR63;
                                                                VAR2->VAR25->VAR70->VAR71 |= (VAR2->VAR18 == VAR46);
                                                                if (VAR2->VAR18 == VAR46 || VAR2->VAR67 == VAR2->VAR63)
                                                                {
                                                                    VAR2->VAR67 = -1;
                                                                    VAR2->VAR25->VAR72 = 1;
                                                                    if (VAR2->VAR18 == VAR46)
                                                                        VAR2->VAR73 |= VAR74;
                                                                    VAR2->VAR25->VAR72 |= VAR2->VAR73;
                                                                    VAR2->VAR25->VAR72 |= !!(VAR2->VAR73 & VAR74);
                                                                    if (VAR2->VAR23 == 1)
                                                                    {
                                                                        if (!(VAR8->VAR21 & VAR22))
                                                                            FUN14(VAR2, VAR15 >= VAR14);
                                                                        if (VAR2->VAR8->VAR75 && (VAR17 = VAR2->VAR8->VAR75->FUN15(VAR2->VAR8, VAR4, VAR5)) < 0)
                                                                            goto VAR37;
                                                                        if (VAR76 && VAR2->VAR8->VAR77->VAR78 & VAR79)
                                                                            FUN16(VAR2);
                                                                        if (VAR10->VAR80 == 0)
                                                                        {
                                                                            if (VAR8->VAR75)
                                                                            {
                                                                                VAR17 = VAR8->VAR75->FUN17(VAR8, &VAR4[VAR11 - VAR30], VAR30);
                                                                                if (VAR17 < 0)
                                                                                    goto VAR37;
                                                                            }
                                                                            else if (VAR76 && VAR2->VAR8->VAR77->VAR78 & VAR79)
                                                                            {
                                                                                FUN18(VAR2->VAR25->VAR70->VAR81[0], VAR82, sizeof(VAR82));
                                                                                FUN18(VAR2->VAR25->VAR70->VAR81[0], &VAR4[VAR11 - VAR30], VAR30);
                                                                                VAR12++;
                                                                                break;
                                                                            case VAR48:
                                                                            case VAR49:
                                                                            case VAR50:
                                                                                FUN19(VAR8, "");
                                                                                break;
                                                                            case VAR44:
                                                                                FUN11(&VAR2->VAR60, VAR33, VAR32);
                                                                                VAR17 = FUN20(VAR2);
                                                                                if (VAR17 < 0 && (VAR2->VAR8->VAR83 & VAR84))
                                                                                    goto VAR37;
                                                                                break;
                                                                            case VAR85:
                                                                                FUN11(&VAR2->VAR60, VAR33, VAR32);
                                                                                if (FUN21(VAR2, 0) >= 0)
                                                                                    break;
                                                                                if (VAR2->VAR27 ? VAR34 : 1)
                                                                                {
                                                                                    FUN9(VAR2->VAR8, VAR40, "");
                                                                                    if (VAR2->VAR27)
                                                                                        FUN22(VAR13 - VAR11 + VAR30 == VAR34);
                                                                                    if ((VAR13 - VAR11 + VAR30 - 1) >= VAR86 / 8)
                                                                                        break;
                                                                                    FUN11(&VAR2->VAR60, &VAR4[VAR11 + 1 - VAR30], 8 * (VAR13 - VAR11 + VAR30 - 1));
                                                                                    if (FUN21(VAR2, 0) >= 0)
                                                                                        break;
                                                                                    FUN11(&VAR2->VAR60, VAR33, VAR32);
                                                                                    FUN21(VAR2, 1);
                                                                                    break;
                                                                                case VAR87:
                                                                                    FUN11(&VAR2->VAR60, VAR33, VAR32);
                                                                                    VAR17 = FUN23(VAR2, VAR32);
                                                                                    if (VAR17 < 0 && (VAR2->VAR8->VAR83 & VAR84))
                                                                                        goto VAR37;
                                                                                    break;
                                                                                case VAR88:
                                                                                case VAR89:
                                                                                case VAR90:
                                                                                case VAR91:
                                                                                case VAR92:
                                                                                case VAR52:
                                                                                    break;
                                                                                case VAR53:
                                                                                    break;
                                                                                default:
                                                                                    FUN9(VAR8, VAR40, "", VAR2->VAR18, VAR32);
                                                                                    if (VAR12 == VAR2->VAR20)
                                                                                    {
                                                                                        VAR17 = FUN24(VAR2, VAR12);
                                                                                        if (VAR17 < 0 && (VAR2->VAR8->VAR83 & VAR84))
                                                                                            goto VAR37;
                                                                                        VAR12 = 0;
                                                                                        if (VAR35 < 0 || VAR35 == VAR93)
                                                                                        {
                                                                                            if (VAR35 < 0)
                                                                                                FUN9(VAR2->VAR8, VAR54, "");
                                                                                            VAR10->VAR94[0] = VAR10->VAR94[1] = VAR10->VAR95 = 0;
                                                                                        }
                                                                                        else if (VAR35 == VAR96)
                                                                                        {
                                                                                            if (VAR12 > 1)
                                                                                            {
                                                                                                VAR17 = FUN24(VAR2, VAR12 - 1);
                                                                                                if (VAR17 < 0 && (VAR2->VAR8->VAR83 & VAR84))
                                                                                                    goto VAR37;
                                                                                                VAR12 = 0;
                                                                                                VAR10 = &VAR2->VAR36[0];
                                                                                                goto VAR45;
                                                                                                if (VAR12)
                                                                                                {
                                                                                                    VAR17 = FUN24(VAR2, VAR12);
                                                                                                    if (VAR17 < 0 && (VAR2->VAR8->VAR83 & VAR84))
                                                                                                        goto VAR37;
                                                                                                    VAR17 = 0;
                                                                                                VAR37:
                                                                                                    if (VAR2->VAR25 && !VAR2->VAR97)
                                                                                                    {
                                                                                                        FUN25(&VAR2->VAR25->VAR98, VAR86, VAR2->VAR99 == VAR100);
                                                                                                        return (VAR17 < 0) ? VAR17 : VAR11