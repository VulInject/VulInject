static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int64_t VAR8, int64_t VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR4->VAR13;
    VAR14 *VAR15 = VAR2->VAR13;
    uint8_t VAR16[VAR17];
    VAR5 *VAR18;
    int VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    int VAR27, VAR28;
    int64_t VAR29 = -1;
    int64_t VAR30 = FUN2(VAR2->VAR31, 90000, VAR32);
    int VAR33 = VAR4->VAR34->VAR35 == VAR36 && VAR10 && !VAR12->VAR37;
    VAR20 = 1;
    while (VAR7 > 0)
    {
        FUN3(VAR2, VAR33);
        VAR33 = 0;
        VAR23 = 0;
        if (VAR12->VAR38 == VAR12->VAR39->VAR40)
        {
            if (VAR15->VAR41 > 1 || VAR20)
                VAR12->VAR39->VAR42++;
            if (VAR12->VAR39->VAR42 >= VAR12->VAR39->VAR43)
            {
                VAR12->VAR39->VAR42 = 0;
                VAR23 = 1;
                if (VAR15->VAR41 > 1 && VAR9 != VAR44 && (VAR9 - FUN4(VAR15, VAR2->VAR45) / 300) > VAR30)
                {
                    if (VAR23)
                        FUN5(VAR2, VAR4);
                    else
                        FUN6(VAR2);
                    continue;
                    VAR18 = VAR16;
                    *VAR18++ = 0x47;
                    VAR19 = (VAR12->VAR38 >> 8);
                    if (VAR20)
                        VAR19 |= 0x40;
                    *VAR18++ = VAR19;
                    *VAR18++ = VAR12->VAR38;
                    VAR12->VAR46 = (VAR12->VAR46 + 1) & 0xf;
                    *VAR18++ = 0x10 | VAR12->VAR46;
                    if (VAR10 && VAR20 && VAR8 != VAR44)
                    {
                        if (VAR12->VAR38 == VAR12->VAR39->VAR40)
                            VAR23 = 1;
                        FUN7(VAR16, 0x40);
                        VAR18 = FUN8(VAR16);
                        if (VAR23)
                        {
                            FUN7(VAR16, 0x10);
                            VAR18 = FUN8(VAR16);
                            if (VAR15->VAR41 > 1)
                                VAR29 = FUN4(VAR15, VAR2->VAR45);
                            else
                                VAR29 = (VAR9 - VAR30) * 300;
                            if (VAR9 != VAR44 && VAR9 < VAR29 / 300)
                                FUN9(VAR2, VAR47, "");
                            FUN10(VAR16, FUN11(VAR18, VAR29));
                            VAR18 = FUN8(VAR16);
                            if (VAR20)
                            {
                                int VAR48 = 0;
                                int VAR49 = 0;
                                *VAR18++ = 0x00;
                                *VAR18++ = 0x00;
                                *VAR18++ = 0x01;
                                VAR24 = 0;
                                VAR25 = 0;
                                if (VAR4->VAR34->VAR50 == VAR51)
                                {
                                    *VAR18++ = 0xfd;
                                }
                                else
                                    *VAR18++ = 0xe0;
                            }
                            else if (VAR4->VAR34->VAR35 == VAR52 && (VAR4->VAR34->VAR50 == VAR53 || VAR4->VAR34->VAR50 == VAR54 || VAR4->VAR34->VAR50 == VAR55))
                            {
                                *VAR18++ = 0xc0;
                            }
                            else if (VAR4->VAR34->VAR35 == VAR52 && VAR4->VAR34->VAR50 == VAR56 && VAR15->VAR57)
                            {
                                *VAR18++ = 0xfd;
                            }
                            else
                            {
                                *VAR18++ = 0xbd;
                                if (VAR4->VAR34->VAR35 == VAR58)
                                {
                                    if (VAR4->VAR34->VAR50 == VAR59)
                                    {
                                        VAR24 = 1;
                                    }
                                    else if (VAR4->VAR34->VAR50 == VAR60)
                                    {
                                        VAR25 = 1;
                                        VAR22 = 0;
                                        VAR26 = 0;
                                        if (VAR8 != VAR44)
                                        {
                                            VAR22 += 5;
                                            VAR26 |= 0x80;
                                            if (VAR9 != VAR44 && VAR8 != VAR44 && VAR9 != VAR8)
                                            {
                                                VAR22 += 5;
                                                VAR26 |= 0x40;
                                                if (VAR4->VAR34->VAR35 == VAR36 && VAR4->VAR34->VAR50 == VAR51)
                                                {
                                                    VAR48 = 1;
                                                    VAR26 |= 0x01;
                                                    VAR22 += 3;
                                                    if (VAR15->VAR57 && VAR4->VAR34->VAR35 == VAR52 && VAR4->VAR34->VAR50 == VAR56)
                                                    {
                                                        VAR48 = 1;
                                                        VAR26 |= 0x01;
                                                        VAR22 += 3;
                                                        if (VAR25)
                                                        {
                                                            VAR49 = 0x24 - VAR22;
                                                            VAR22 = 0x24;
                                                            VAR21 = VAR7 + VAR22 + 3;
                                                            if (VAR24)
                                                            {
                                                                VAR21 += 3;
                                                                VAR7++;
                                                                if (VAR21 > 0xffff)
                                                                    *VAR18++ = VAR21 >> 8;
                                                                *VAR18++ = VAR21;
                                                                VAR19 = 0x80;
                                                                if (VAR4->VAR34->VAR35 == VAR58 || VAR4->VAR34->VAR35 == VAR61)
                                                                    VAR19 |= 0x04;
                                                                *VAR18++ = VAR19;
                                                                *VAR18++ = VAR26;
                                                                *VAR18++ = VAR22;
                                                                if (VAR8 != VAR44)
                                                                {
                                                                    FUN12(VAR18, VAR26 >> 6, VAR8);
                                                                    VAR18 += 5;
                                                                    if (VAR9 != VAR44 && VAR8 != VAR44 && VAR9 != VAR8)
                                                                    {
                                                                        FUN12(VAR18, 1, VAR9);
                                                                        VAR18 += 5;
                                                                        if (VAR48 && VAR4->VAR34->VAR50 == VAR51)
                                                                        {
                                                                            VAR26 = 0x01;
                                                                            *VAR18++ = VAR26;
                                                                            *VAR18++ = 0x80 | 0x01;
                                                                            *VAR18++ = 0x00 | 0x60;
                                                                            if (VAR15->VAR57 && VAR48 && VAR4->VAR34->VAR50 == VAR56)
                                                                            {
                                                                                VAR26 = 0x01;
                                                                                *VAR18++ = VAR26;
                                                                                *VAR18++ = 0x80 | 0x01;
                                                                                *VAR18++ = 0x00 | 0x71;
                                                                                if (VAR24)
                                                                                {
                                                                                    *VAR18++ = 0x20;
                                                                                    *VAR18++ = 0x00;
                                                                                    if (VAR25)
                                                                                    {
                                                                                        memset(VAR18, 0xff, VAR49);
                                                                                        VAR18 += VAR49;
                                                                                        VAR20 = 0;
                                                                                        VAR22 = VAR18 - VAR16;
                                                                                        VAR21 = VAR17 - VAR22;
                                                                                        if (VAR21 > VAR7)
                                                                                            VAR21 = VAR7;
                                                                                        VAR28 = VAR17 - VAR22 - VAR21;
                                                                                        if (VAR28 > 0)
                                                                                        {
                                                                                            if (VAR16[3] & 0x20)
                                                                                            {
                                                                                                VAR27 = VAR16[4] + 1;
                                                                                                memmove(VAR16 + 4 + VAR27 + VAR28, VAR16 + 4 + VAR27, VAR22 - (4 + VAR27));
                                                                                                VAR16[4] += VAR28;
                                                                                                memset(VAR16 + 4 + VAR27, 0xff, VAR28);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                memmove(VAR16 + 4 + VAR28, VAR16 + 4, VAR22 - 4);
                                                                                                VAR16[3] |= 0x20;
                                                                                                VAR16[4] = VAR28 - 1;
                                                                                                if (VAR28 >= 2)
                                                                                                {
                                                                                                    VAR16[5] = 0x00;
                                                                                                    memset(VAR16 + 6, 0xff, VAR28 - 2);
                                                                                                    if (VAR24 && VAR7 == VAR21)
                                                                                                    {
                                                                                                        memcpy(VAR16 + VAR17 - VAR21, VAR6, VAR21 - 1);
                                                                                                        VAR16[VAR17 - 1] = 0xff;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        memcpy(VAR16 + VAR17 - VAR21, VAR6, VAR21);
                                                                                                        VAR6 += VAR21;
                                                                                                        VAR7 -= VAR21;
                                                                                                        FUN13(VAR2);
                                                                                                        FUN14(VAR2->VAR45, VAR16, VAR17);
                                                                                                        FUN15(VAR2->VAR45);
                                                                                                        VAR12->VAR37 = VAR10;