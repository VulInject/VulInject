int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14, *VAR15;
    int VAR16;
    VAR17 *VAR18 = VAR3;
    VAR12->VAR19 = 0;
    VAR15 = VAR8;
    VAR14 = VAR8 + VAR9;
    while (VAR15 < VAR14)
    {
        VAR16 = FUN2(&VAR15, VAR14);
        {
            if (VAR16 < 0)
            {
                goto VAR20;
            }
            else
            {
                FUN3(VAR2, VAR21, "", VAR16, VAR14 - VAR15);
                if ((VAR14 - VAR15) > VAR12->VAR22)
                {
                    FUN4(VAR12->VAR23);
                    VAR12->VAR22 = VAR14 - VAR15;
                    VAR12->VAR23 = FUN5(VAR12->VAR22 + VAR24);
                    FUN3(VAR2, VAR21, "", VAR12->VAR22);
                    if (VAR16 == VAR25 && !VAR12->VAR26)
                    {
                        const VAR7 *VAR27 = VAR15;
                        VAR7 *VAR28 = VAR12->VAR23;
                        while (VAR27 < VAR14)
                        {
                            uint8_t VAR29 = *(VAR27++);
                            *(VAR28++) = VAR29;
                            if (VAR2->VAR30 != VAR31)
                            {
                                if (VAR29 == 0xff)
                                {
                                    while (VAR27 < VAR14 && VAR29 == 0xff)
                                        VAR29 = *(VAR27++);
                                    if (VAR29 >= 0xd0 && VAR29 <= 0xd7)
                                        *(VAR28++) = VAR29;
                                    else if (VAR29)
                                        FUN6(&VAR12->VAR32, VAR12->VAR23, (VAR28 - VAR12->VAR23) * 8);
                                    FUN3(VAR2, VAR21, "", (VAR14 - VAR15) - (VAR28 - VAR12->VAR23));
                                    else if (VAR16 == VAR25 && VAR12->VAR26)
                                    {
                                        const VAR7 *VAR27 = VAR15;
                                        VAR7 *VAR28 = VAR12->VAR23;
                                        int VAR33 = 0;
                                        int VAR34 = 0, VAR35 = 0;
                                        PutBitContext VAR36;
                                        VAR12->VAR37++;
                                        while (VAR27 + VAR34 < VAR14)
                                        {
                                            uint8_t VAR29 = VAR27[VAR34++];
                                            if (VAR29 == 0xff)
                                            {
                                                while ((VAR27 + VAR34 < VAR14) && VAR29 == 0xff)
                                                    VAR29 = VAR27[VAR34++];
                                                if (VAR29 & 0x80)
                                                {
                                                    VAR34 -= 2;
                                                    VAR33 = VAR34 * 8;
                                                    FUN7(&VAR36, VAR28, VAR34);
                                                    while (VAR35 < VAR34)
                                                    {
                                                        uint8_t VAR29 = VAR27[VAR35++];
                                                        FUN8(&VAR36, 8, VAR29);
                                                        if (VAR29 == 0xFF)
                                                        {
                                                            VAR29 = VAR27[VAR35++];
                                                            FUN8(&VAR36, 7, VAR29);
                                                            VAR33--;
                                                            FUN9(&VAR36);
                                                            FUN6(&VAR12->VAR32, VAR28, VAR33);
                                                            else FUN6(&VAR12->VAR32, VAR15, (VAR14 - VAR15) * 8);
                                                            VAR12->VAR16 = VAR16;
                                                            if (VAR12->VAR2->VAR38 & VAR39)
                                                            {
                                                                FUN3(VAR2, VAR21, "", VAR16);
                                                                if (VAR16 >= 0xd0 && VAR16 <= 0xd7)
                                                                {
                                                                    FUN3(VAR2, VAR21, "", VAR16 & 0x0f);
                                                                }
                                                                else if (VAR16 >= VAR40 && VAR16 <= VAR41)
                                                                {
                                                                    FUN10(VAR12);
                                                                }
                                                                else if (VAR16 == VAR42)
                                                                {
                                                                    FUN11(VAR12);
                                                                    switch (VAR16)
                                                                    {
                                                                    case VAR43:
                                                                        VAR12->VAR44 = 0;
                                                                        VAR12->VAR45 = 0;
                                                                    case VAR46:
                                                                        FUN12(VAR12);
                                                                    case VAR47:
                                                                        if (FUN13(VAR12) < 0)
                                                                        {
                                                                            FUN3(VAR2, VAR48, "");
                                                                            return -1;
                                                                        case VAR49:
                                                                            VAR12->VAR50 = 0;
                                                                            VAR12->VAR26 = 0;
                                                                            VAR12->VAR51 = 0;
                                                                            if (FUN14(VAR12) < 0)
                                                                                return -1;
                                                                        case VAR52:
                                                                            VAR12->VAR50 = 0;
                                                                            VAR12->VAR26 = 0;
                                                                            VAR12->VAR51 = 1;
                                                                            if (FUN14(VAR12) < 0)
                                                                                return -1;
                                                                        case VAR53:
                                                                            VAR12->VAR50 = 1;
                                                                            VAR12->VAR26 = 0;
                                                                            VAR12->VAR51 = 0;
                                                                            if (FUN14(VAR12) < 0)
                                                                                return -1;
                                                                        case VAR54:
                                                                            VAR12->VAR50 = 1;
                                                                            VAR12->VAR26 = 1;
                                                                            VAR12->VAR51 = 0;
                                                                            if (FUN14(VAR12) < 0)
                                                                                return -1;
                                                                        case VAR55:
                                                                            if (!VAR56 || FUN15(VAR12) < 0)
                                                                                return -1;
                                                                        case VAR57:
                                                                            VAR12->VAR37 = 0;
                                                                            if ((VAR12->VAR58 && !VAR12->VAR59) || VAR12->VAR44)
                                                                            VAR60:
                                                                                FUN3(VAR2, VAR61, "");
                                                                            {
                                                                                if (VAR12->VAR59)
                                                                                {
                                                                                    VAR12->VAR62 ^= 1;
                                                                                    if (VAR12->VAR62 == !VAR12->VAR63)
                                                                                        goto VAR64;
                                                                                    *VAR18 = VAR12->VAR18;
                                                                                    *VAR4 = sizeof(VAR17);
                                                                                    if (!VAR12->VAR50)
                                                                                    {
                                                                                        VAR18->VAR65 = FUN16(VAR12->VAR66[0], VAR12->VAR66[1], VAR12->VAR66[2]);
                                                                                        VAR18->VAR67 = 0;
                                                                                        VAR18->VAR68 = VAR12->VAR68;
                                                                                        memset(VAR18->VAR68, VAR18->VAR65, (VAR12->VAR69 + 15) / 16);
                                                                                        if (VAR2->VAR38 & VAR70)
                                                                                            FUN3(VAR2, VAR21, "", VAR18->VAR65);
                                                                                        VAR18->VAR65 *= VAR71;
                                                                                        goto VAR20;
                                                                                    case VAR25:
                                                                                        FUN17(VAR12);
                                                                                        if ((VAR12->VAR58 && !VAR12->VAR59) || VAR12->VAR44)
                                                                                            goto VAR60;
                                                                                    case VAR72:
                                                                                        FUN18(VAR12);
                                                                                    case VAR73:
                                                                                    case VAR74:
                                                                                    case VAR75:
                                                                                    case VAR76:
                                                                                    case VAR77:
                                                                                    case VAR78:
                                                                                    case VAR79:
                                                                                    case VAR80:
                                                                                    case VAR81:
                                                                                    case VAR82:
                                                                                    case VAR83:
                                                                                        FUN3(VAR2, VAR48, "", VAR16);
                                                                                    VAR64:
                                                                                        VAR15 += (FUN19(&VAR12->VAR32) + 7) / 8;
                                                                                        FUN3(VAR2, VAR21, "", (FUN19(&VAR12->VAR32) + 7) / 8, FUN19(&VAR12->VAR32));
                                                                                    VAR20:
                                                                                        FUN3(VAR2, VAR21, "", VAR14 - VAR15);
                                                                                        return VAR15 - VAR8;