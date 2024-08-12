static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int64_t VAR8, int64_t VAR9, int VAR10, int VAR11)
{
    VAR12 *VAR13 = VAR4->VAR14;
    VAR15 *VAR16 = VAR2->VAR14;
    uint8_t VAR17[VAR18];
    VAR5 *VAR19;
    int VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27;
    int VAR28, VAR29;
    int64_t VAR30 = -1;
    int64_t VAR31 = FUN2(VAR2->VAR32, 90000, VAR33);
    int VAR34 = VAR4->VAR35->VAR36 == VAR37 && VAR10 && !VAR13->VAR38;
    FUN3(VAR13->VAR6 != VAR17 || VAR4->VAR35->VAR36 != VAR37);
    if (VAR16->VAR27 & VAR39 && VAR4->VAR35->VAR36 == VAR37)
    {
        VAR34 = 1;
        VAR21 = 1;
        while (VAR7 > 0)
        {
            FUN4(VAR2, VAR34, VAR9);
            VAR34 = 0;
            VAR24 = 0;
            if (VAR13->VAR40 == VAR13->VAR41->VAR42)
            {
                if (VAR16->VAR43 > 1 || VAR21)
                    VAR13->VAR41->VAR44++;
                if (VAR13->VAR41->VAR44 >= VAR13->VAR41->VAR45)
                {
                    VAR13->VAR41->VAR44 = 0;
                    VAR24 = 1;
                    if (VAR16->VAR43 > 1 && VAR9 != VAR46 && (VAR9 - FUN5(VAR16, VAR2->VAR47) / 300) > VAR31)
                    {
                        if (VAR24)
                            FUN6(VAR2, VAR4);
                        else
                            FUN7(VAR2);
                        continue;
                        VAR19 = VAR17;
                        *VAR19++ = 0x47;
                        VAR20 = VAR13->VAR40 >> 8;
                        if (VAR21)
                            VAR20 |= 0x40;
                        *VAR19++ = VAR20;
                        *VAR19++ = VAR13->VAR40;
                        VAR13->VAR48 = VAR13->VAR48 + 1 & 0xf;
                        *VAR19++ = 0x10 | VAR13->VAR48;
                        if (VAR10 && VAR21 && VAR8 != VAR46)
                        {
                            if (VAR13->VAR40 == VAR13->VAR41->VAR42)
                                VAR24 = 1;
                            FUN8(VAR17, 0x40);
                            if (VAR24)
                            {
                                FUN8(VAR17, 0x10);
                                if (VAR16->VAR43 > 1)
                                    VAR30 = FUN5(VAR16, VAR2->VAR47);
                                else
                                    VAR30 = (VAR9 - VAR31) * 300;
                                if (VAR9 != VAR46 && VAR9 < VAR30 / 300)
                                    FUN9(VAR2, VAR49, "");
                                FUN10(VAR17, FUN11(VAR19, VAR30));
                                if (VAR21)
                                {
                                    int VAR50 = 0;
                                    int VAR51 = 0;
                                    *VAR19++ = 0x00;
                                    *VAR19++ = 0x00;
                                    *VAR19++ = 0x01;
                                    VAR25 = 0;
                                    VAR26 = 0;
                                    if (VAR4->VAR35->VAR36 == VAR37)
                                    {
                                        if (VAR4->VAR35->VAR52 == VAR53)
                                            *VAR19++ = 0xfd;
                                        else
                                            *VAR19++ = 0xe0;
                                    }
                                    else if (VAR4->VAR35->VAR36 == VAR54 && (VAR4->VAR35->VAR52 == VAR55 || VAR4->VAR35->VAR52 == VAR56 || VAR4->VAR35->VAR52 == VAR57))
                                    {
                                        *VAR19++ = 0xc0;
                                    }
                                    else if (VAR4->VAR35->VAR36 == VAR54 && VAR4->VAR35->VAR52 == VAR58 && VAR16->VAR59)
                                    {
                                        *VAR19++ = 0xfd;
                                    }
                                    else if (VAR4->VAR35->VAR36 == VAR60 && VAR4->VAR35->VAR52 == VAR61)
                                    {
                                        *VAR19++ = 0xbd;
                                    }
                                    else if (VAR4->VAR35->VAR36 == VAR60)
                                    {
                                        *VAR19++ = VAR11 != -1 ? VAR11 : 0xfc;
                                        if (VAR11 == 0xbd)
                                            VAR8 = VAR9 = VAR46;
                                    }
                                    else
                                    {
                                        *VAR19++ = 0xbd;
                                        if (VAR4->VAR35->VAR36 == VAR62)
                                        {
                                            if (VAR4->VAR35->VAR52 == VAR63)
                                            {
                                                VAR25 = 1;
                                            }
                                            else if (VAR4->VAR35->VAR52 == VAR64)
                                            {
                                                VAR26 = 1;
                                                VAR23 = 0;
                                                VAR27 = 0;
                                                if (VAR8 != VAR46)
                                                {
                                                    VAR23 += 5;
                                                    VAR27 |= 0x80;
                                                    if (VAR9 != VAR46 && VAR8 != VAR46 && VAR9 != VAR8)
                                                    {
                                                        VAR23 += 5;
                                                        VAR27 |= 0x40;
                                                        if (VAR4->VAR35->VAR36 == VAR37 && VAR4->VAR35->VAR52 == VAR53)
                                                        {
                                                            VAR50 = 1;
                                                            VAR27 |= 0x01;
                                                            VAR23 += 3;
                                                            if (VAR16->VAR59 && VAR4->VAR35->VAR36 == VAR54 && VAR4->VAR35->VAR52 == VAR58)
                                                            {
                                                                VAR50 = 1;
                                                                VAR27 |= 0x01;
                                                                VAR23 += 3;
                                                                if (VAR26)
                                                                {
                                                                    VAR51 = 0x24 - VAR23;
                                                                    VAR23 = 0x24;
                                                                    VAR22 = VAR7 + VAR23 + 3;
                                                                    if (VAR25)
                                                                    {
                                                                        VAR22 += 3;
                                                                        VAR7++;
                                                                        if (VAR22 > 0xffff)
                                                                            VAR22 = 0;
                                                                        if (VAR16->VAR65 && VAR4->VAR35->VAR36 == VAR37)
                                                                        {
                                                                            VAR22 = 0;
                                                                            *VAR19++ = VAR22 >> 8;
                                                                            *VAR19++ = VAR22;
                                                                            VAR20 = 0x80;
                                                                            if (VAR4->VAR35->VAR36 == VAR62 || VAR4->VAR35->VAR36 == VAR60)
                                                                                VAR20 |= 0x04;
                                                                            *VAR19++ = VAR20;
                                                                            *VAR19++ = VAR27;
                                                                            *VAR19++ = VAR23;
                                                                            if (VAR8 != VAR46)
                                                                            {
                                                                                FUN12(VAR19, VAR27 >> 6, VAR8);
                                                                                VAR19 += 5;
                                                                                if (VAR9 != VAR46 && VAR8 != VAR46 && VAR9 != VAR8)
                                                                                {
                                                                                    FUN12(VAR19, 1, VAR9);
                                                                                    VAR19 += 5;
                                                                                    if (VAR50 && VAR4->VAR35->VAR52 == VAR53)
                                                                                    {
                                                                                        VAR27 = 0x01;
                                                                                        *VAR19++ = VAR27;
                                                                                        *VAR19++ = 0x80 | 0x01;
                                                                                        *VAR19++ = 0x00 | 0x60;
                                                                                        if (VAR16->VAR59 && VAR50 && VAR4->VAR35->VAR52 == VAR58)
                                                                                        {
                                                                                            VAR27 = 0x01;
                                                                                            *VAR19++ = VAR27;
                                                                                            *VAR19++ = 0x80 | 0x01;
                                                                                            *VAR19++ = 0x00 | 0x71;
                                                                                            if (VAR25)
                                                                                            {
                                                                                                *VAR19++ = 0x20;
                                                                                                *VAR19++ = 0x00;
                                                                                                if (VAR26)
                                                                                                {
                                                                                                    memset(VAR19, 0xff, VAR51);
                                                                                                    VAR19 += VAR51;
                                                                                                    VAR21 = 0;
                                                                                                    VAR23 = VAR19 - VAR17;
                                                                                                    VAR22 = VAR18 - VAR23;
                                                                                                    if (VAR22 > VAR7)
                                                                                                        VAR22 = VAR7;
                                                                                                    VAR29 = VAR18 - VAR23 - VAR22;
                                                                                                    if (VAR29 > 0)
                                                                                                    {
                                                                                                        if (VAR17[3] & 0x20)
                                                                                                        {
                                                                                                            VAR28 = VAR17[4] + 1;
                                                                                                            memmove(VAR17 + 4 + VAR28 + VAR29, VAR17 + 4 + VAR28, VAR23 - (4 + VAR28));
                                                                                                            VAR17[4] += VAR29;
                                                                                                            memset(VAR17 + 4 + VAR28, 0xff, VAR29);
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            memmove(VAR17 + 4 + VAR29, VAR17 + 4, VAR23 - 4);
                                                                                                            VAR17[3] |= 0x20;
                                                                                                            VAR17[4] = VAR29 - 1;
                                                                                                            if (VAR29 >= 2)
                                                                                                            {
                                                                                                                VAR17[5] = 0x00;
                                                                                                                memset(VAR17 + 6, 0xff, VAR29 - 2);
                                                                                                                if (VAR25 && VAR7 == VAR22)
                                                                                                                {
                                                                                                                    memcpy(VAR17 + VAR18 - VAR22, VAR6, VAR22 - 1);
                                                                                                                    VAR17[VAR18 - 1] = 0xff;
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    memcpy(VAR17 + VAR18 - VAR22, VAR6, VAR22);
                                                                                                                    VAR6 += VAR22;
                                                                                                                    VAR7 -= VAR22;
                                                                                                                    FUN13(VAR2);
                                                                                                                    FUN14(VAR2->VAR47, VAR17, VAR18);
                                                                                                                    VAR13->VAR38 = VAR10;