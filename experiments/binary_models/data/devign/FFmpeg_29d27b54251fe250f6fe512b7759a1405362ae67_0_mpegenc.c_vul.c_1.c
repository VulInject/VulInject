static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR13[VAR3]->VAR10;
    VAR14 *VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    int VAR23;
    uint8_t VAR24[128];
    int VAR25 = 0;
    int VAR26 = 0;
    int VAR27;
    int VAR28 = 0;
    int VAR29;
    VAR19 = VAR12->VAR19;
    FUN2(VAR2, "", VAR19, VAR4 / 90000.0);
    VAR15 = VAR24;
    if ((VAR9->VAR30 % VAR9->VAR31) == 0 || VAR9->VAR32 != VAR6)
    {
        VAR16 = FUN3(VAR2, VAR15, VAR6);
        VAR15 += VAR16;
        VAR9->VAR32 = VAR6;
        if (VAR9->VAR33)
        {
            if (VAR12->VAR30 == 0)
            {
                VAR16 = FUN4(VAR2, VAR15, VAR19);
                VAR15 += VAR16;
            }
            else if (VAR9->VAR34)
            {
                if (VAR12->VAR35 || VAR9->VAR30 == 0)
                {
                    int VAR36 = VAR9->VAR23 - VAR16 - 10;
                    if (VAR4 != VAR37)
                    {
                        if (VAR5 != VAR4)
                            VAR36 -= 5 + 5;
                        else
                            VAR36 -= 5;
                        if (VAR12->VAR38 == 0 || VAR9->VAR30 == 0)
                        {
                            VAR16 = FUN4(VAR2, VAR15, 0);
                            VAR15 += VAR16;
                            VAR16 = VAR15 - VAR24;
                            FUN5(VAR2->VAR39, VAR24, VAR16);
                            FUN6(VAR2->VAR39, VAR40);
                            FUN7(VAR2->VAR39, 0x03d4);
                            FUN8(VAR2->VAR39, 0x00);
                            for (VAR21 = 0; VAR21 < 979; VAR21++)
                                FUN8(VAR2->VAR39, 0x00);
                            FUN6(VAR2->VAR39, VAR40);
                            FUN7(VAR2->VAR39, 0x03fa);
                            FUN8(VAR2->VAR39, 0x01);
                            for (VAR21 = 0; VAR21 < 1017; VAR21++)
                                FUN8(VAR2->VAR39, 0x00);
                            memset(VAR24, 0, 128);
                            VAR15 = VAR24;
                            VAR9->VAR30++;
                            VAR12->VAR35 = 0;
                            VAR6 += VAR9->VAR23 * 90000LL / (VAR9->VAR41 * 50LL);
                            VAR16 = FUN3(VAR2, VAR15, VAR6);
                            VAR9->VAR32 = VAR6;
                            VAR15 += VAR16;
                        }
                        else if (VAR12->VAR38 < VAR36)
                        {
                            VAR26 = VAR36 - VAR12->VAR38;
                        }
                        else
                        {
                            if ((VAR9->VAR30 % VAR9->VAR42) == 0)
                            {
                                VAR16 = FUN4(VAR2, VAR15, 0);
                                VAR15 += VAR16;
                                VAR16 = VAR15 - VAR24;
                                FUN5(VAR2->VAR39, VAR24, VAR16);
                                VAR23 = VAR9->VAR23 - VAR16;
                                if (VAR9->VAR33 && (VAR19 & 0xe0) == VAR43)
                                    VAR25 += 20;
                                if ((VAR9->VAR33 && VAR12->VAR30 == 0) || (VAR9->VAR44 && VAR9->VAR30 == 0))
                                {
                                    if (VAR9->VAR44)
                                        VAR28 = 1;
                                    VAR26 = VAR23 - VAR25;
                                    VAR23 -= VAR26 + VAR25;
                                    if (VAR23 > 0)
                                    {
                                        VAR23 -= 6;
                                        if (VAR9->VAR45)
                                        {
                                            VAR22 = 3;
                                            if (VAR12->VAR30 == 0)
                                                VAR22 += 3;
                                            VAR22 += 1;
                                        }
                                        else
                                        {
                                            VAR22 = 0;
                                            if (VAR4 != VAR37)
                                            {
                                                if (VAR5 != VAR4)
                                                    VAR22 += 5 + 5;
                                                else
                                                    VAR22 += 5;
                                            }
                                            else
                                            {
                                                if (!VAR9->VAR45)
                                                    VAR22++;
                                                VAR17 = VAR23 - VAR22;
                                                if (VAR19 < 0xc0)
                                                {
                                                    VAR18 = VAR46;
                                                    VAR17 -= 1;
                                                    if (VAR19 >= 0x40)
                                                    {
                                                        VAR17 -= 3;
                                                        if (VAR19 >= 0xa0)
                                                            VAR17 -= 3;
                                                    }
                                                    else
                                                    {
                                                        VAR18 = 0x100 + VAR19;
                                                        VAR20 = VAR17 - FUN9(VAR12->VAR47);
                                                        if (VAR17 <= VAR7 && VAR4 != VAR37)
                                                        {
                                                            int VAR48 = 0;
                                                            if (VAR5 != VAR4)
                                                                VAR48 += 5;
                                                            if (VAR4 != VAR37)
                                                                VAR48 += VAR9->VAR45 ? 5 : 4;
                                                            VAR4 = VAR5 = VAR37;
                                                            VAR22 -= VAR48;
                                                            if (VAR9->VAR34 && VAR12->VAR35)
                                                            {
                                                                VAR26 += VAR48;
                                                                VAR23 -= VAR48;
                                                            }
                                                            else
                                                            {
                                                                VAR17 += VAR48;
                                                                VAR20 += VAR48;
                                                                if (VAR17 > VAR7)
                                                                    VAR20 += VAR17 - VAR7;
                                                                if (VAR26 > 0 && VAR26 <= 7)
                                                                {
                                                                    VAR23 += VAR26;
                                                                    VAR17 += VAR26;
                                                                    if (VAR20 < 0)
                                                                    {
                                                                        VAR20 = VAR26;
                                                                    }
                                                                    else
                                                                    {
                                                                        VAR20 += VAR26;
                                                                        VAR26 = 0;
                                                                        if (VAR20 < 0)
                                                                            VAR20 = 0;
                                                                        if (VAR20 > 16)
                                                                        {
                                                                            VAR26 += VAR20;
                                                                            VAR23 -= VAR20;
                                                                            VAR17 -= VAR20;
                                                                            VAR20 = 0;
                                                                            VAR29 = FUN10(VAR2, VAR12, VAR17 - VAR20);
                                                                            FUN6(VAR2->VAR39, VAR18);
                                                                            FUN7(VAR2->VAR39, VAR23);
                                                                            if (!VAR9->VAR45)
                                                                                for (VAR21 = 0; VAR21 < VAR20; VAR21++)
                                                                                    FUN8(VAR2->VAR39, 0xff);
                                                                            if (VAR9->VAR45)
                                                                            {
                                                                                FUN8(VAR2->VAR39, 0x80);
                                                                                VAR27 = 0;
                                                                                if (VAR4 != VAR37)
                                                                                {
                                                                                    VAR27 |= 0x80;
                                                                                    if (VAR5 != VAR4)
                                                                                        VAR27 |= 0x40;
                                                                                    if (VAR12->VAR30 == 0)
                                                                                        VAR27 |= 0x01;
                                                                                    FUN8(VAR2->VAR39, VAR27);
                                                                                    FUN8(VAR2->VAR39, VAR22 - 3 + VAR20);
                                                                                    if (VAR27 & 0x80)
                                                                                        FUN11(VAR2->VAR39, (VAR27 & 0x40) ? 0x03 : 0x02, VAR4);
                                                                                    if (VAR27 & 0x40)
                                                                                        FUN11(VAR2->VAR39, 0x01, VAR5);
                                                                                    if (VAR27 & 0x01)
                                                                                    {
                                                                                        FUN8(VAR2->VAR39, 0x10);
                                                                                        if ((VAR19 & 0xe0) == VAR43)
                                                                                            FUN7(VAR2->VAR39, 0x4000 | VAR12->VAR49 / 128);
                                                                                        else
                                                                                            FUN7(VAR2->VAR39, 0x6000 | VAR12->VAR49 / 1024);
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        if (VAR4 != VAR37)
                                                                                        {
                                                                                            if (VAR5 != VAR4)
                                                                                            {
                                                                                                FUN11(VAR2->VAR39, 0x03, VAR4);
                                                                                                FUN11(VAR2->VAR39, 0x01, VAR5);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                FUN11(VAR2->VAR39, 0x02, VAR4);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                FUN8(VAR2->VAR39, 0x0f);
                                                                                                if (VAR9->VAR45)
                                                                                                {
                                                                                                    FUN8(VAR2->VAR39, 0xff);
                                                                                                    for (VAR21 = 0; VAR21 < VAR20; VAR21++)
                                                                                                        FUN8(VAR2->VAR39, 0xff);
                                                                                                    if (VAR18 == VAR46)
                                                                                                    {
                                                                                                        FUN8(VAR2->VAR39, VAR19);
                                                                                                        if (VAR19 >= 0xa0)
                                                                                                        {
                                                                                                            FUN8(VAR2->VAR39, 7);
                                                                                                            FUN7(VAR2->VAR39, 4);
                                                                                                            FUN8(VAR2->VAR39, VAR12->VAR50[0]);
                                                                                                            FUN8(VAR2->VAR39, VAR12->VAR50[1]);
                                                                                                            FUN8(VAR2->VAR39, VAR12->VAR50[2]);
                                                                                                        }
                                                                                                        else if (VAR19 >= 0x40)
                                                                                                        {
                                                                                                            FUN8(VAR2->VAR39, VAR29);
                                                                                                            FUN7(VAR2->VAR39, VAR7 + 1);
                                                                                                            assert(VAR17 - VAR20 <= FUN9(VAR12->VAR47));
                                                                                                            FUN12(VAR12->VAR47, VAR2->VAR39, VAR17 - VAR20, &VAR51);
                                                                                                            VAR12->VAR38 -= VAR17 - VAR20;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            VAR17 = VAR20 = 0;
                                                                                                            if (VAR26 > 0)
                                                                                                                FUN13(VAR2, VAR2->VAR39, VAR26);
                                                                                                            for (VAR21 = 0; VAR21 < VAR25; VAR21++)
                                                                                                                FUN8(VAR2->VAR39, 0x00);
                                                                                                            FUN14(VAR2->VAR39);
                                                                                                            VAR9->VAR30++;
                                                                                                            if (!VAR28)
                                                                                                                VAR12->VAR30++;
                                                                                                            return VAR17 - VAR20