static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, const VAR3 *VAR8, long VAR9, const VAR3 *VAR10, const VAR3 *VAR11, int VAR12)
{
    uint8_t VAR13;
    unsigned long VAR14, VAR15, VAR16, VAR17;
    long *VAR18, VAR19[10];
    const signed char *VAR20;
    VAR3 *VAR21, *VAR22, *VAR23, *VAR24;
    VAR25 *VAR26, *VAR27;
    const VAR25 *VAR28[2], *VAR29[2], *VAR30[2];
    VAR3 *VAR31[2];
    struct ustr VAR32[20], *VAR33;
    int VAR34, VAR35, VAR36, VAR37, VAR38, VAR39, VAR40, VAR41, VAR42, VAR43, VAR44, VAR45, VAR46;
    unsigned short VAR47;
    VAR13 = 0;
    VAR20 = NULL;
    VAR18 = VAR19 + 1;
    VAR34 = (VAR6 < 0 ? VAR6 + 3 : VAR6) / 4;
    for (VAR35 = -1; VAR35 < 8; VAR35++)
        VAR18[VAR35] = VAR34 * VAR35;
    VAR33 = VAR32;
    for (VAR43 = 0; VAR43 < (VAR6 - VAR12); VAR43 += VAR12)
        ;
    VAR33->VAR48 = VAR33->VAR49 = 0;
    for (VAR33->VAR6 = VAR12; VAR6 > VAR33->VAR6; VAR33->VAR6 *= 2)
        ;
    VAR33->VAR7 = VAR7;
    VAR33->VAR50 = 0;
    VAR33->VAR51 = 0;
    VAR33->VAR52 = 0;
    VAR14 = 0;
    VAR44 = VAR45 = VAR46 = 0;
    while (VAR33 >= VAR32)
    {
        if (VAR14 <= 0)
        {
            VAR14 = 8;
            VAR13 = *VAR8++;
            VAR14 -= 2;
            VAR40 = (VAR13 >> VAR14) & 0x03;
            if (VAR40 == 0)
            {
                VAR33++;
                memcpy(VAR33, VAR33 - 1, sizeof(*VAR33));
                VAR33->VAR51 = 1;
                VAR33->VAR50 = 0;
                VAR33->VAR7 = (VAR33->VAR7 > 8 ? ((VAR33->VAR7 + 8) >> 4) << 3 : 4);
                continue;
            }
            else if (VAR40 == 1)
            {
                VAR33++;
                memcpy(VAR33, VAR33 - 1, sizeof(*VAR33));
                VAR33->VAR51 = 1;
                VAR33->VAR50 = 1;
                VAR33->VAR6 = (VAR33->VAR6 > 8 ? ((VAR33->VAR6 + 8) >> 4) << 3 : 4);
                continue;
            }
            else if (VAR40 == 2)
            {
                if (VAR33->VAR52 == 0)
                {
                    VAR33->VAR52 = 1;
                    VAR20 = NULL;
                    continue;
                }
                else if (VAR40 == 3)
                {
                    if (VAR33->VAR52 == 0)
                    {
                        VAR33->VAR52 = 1;
                        VAR20 = (const signed char *)VAR11 + (*VAR8 * 2);
                        VAR8++;
                        continue;
                        VAR21 = VAR4 + VAR6 * VAR33->VAR48 + VAR33->VAR49;
                        if ((VAR41 = VAR33->VAR6) < 0)
                            VAR41 += 3;
                        VAR41 >>= 2;
                        VAR42 = VAR33->VAR7;
                        if (VAR20 != NULL)
                        {
                            VAR22 = VAR5 + (VAR20[0] + VAR33->VAR48) * VAR6 + VAR20[1] + VAR33->VAR49;
                        }
                        else
                            VAR22 = VAR21 - VAR18[4];
                        if (VAR40 == 2)
                        {
                            if (VAR14 <= 0)
                            {
                                VAR14 = 8;
                                VAR13 = *VAR8++;
                                VAR14 -= 2;
                                VAR40 = (VAR13 >> VAR14) & 0x03;
                                if (VAR40 == 0 || VAR20 != NULL)
                                {
                                    for (VAR37 = 0; VAR37 < VAR41; VAR37++)
                                    {
                                        for (VAR34 = 0, VAR35 = 0; VAR34 < VAR42; VAR34++, VAR35 += VAR18[1])
                                            ((VAR25 *)VAR21)[VAR35] = ((VAR25 *)VAR22)[VAR35];
                                        VAR21 += 4;
                                        VAR22 += 4;
                                    }
                                    else if (VAR40 != 1) return;
                                }
                                else
                                {
                                    VAR36 = *VAR8 >> 4;
                                    VAR35 = *VAR8 & 0x0f;
                                    VAR8++;
                                    VAR15 = VAR35 + VAR9;
                                    if ((VAR15 - 8) <= 7 && (VAR36 == 0 || VAR36 == 3 || VAR36 == 10))
                                    {
                                        VAR24 = VAR2->VAR53 + ((VAR15 - 8) << 7);
                                        VAR23 = VAR22;
                                        for (VAR34 = 0; VAR34 < VAR41 << 2; VAR34++)
                                        {
                                            int VAR54 = *VAR23 >> 1;
                                            *(VAR23++) = VAR24[VAR54];
                                            if (VAR36 == 1 || VAR36 == 4)
                                            {
                                                VAR15 = (VAR10[VAR35] & 0xf) + VAR9;
                                                VAR31[0] = VAR2->VAR55 + (VAR15 << 8);
                                                VAR28[0] = VAR56 + (VAR15 << 8);
                                                VAR15 = (VAR10[VAR35] >> 4) + VAR9;
                                                VAR28[1] = VAR56 + (VAR15 << 8);
                                                VAR31[1] = VAR2->VAR55 + (VAR15 << 8);
                                            }
                                            else
                                            {
                                                VAR29[0] = VAR29[1] = VAR57 + (VAR15 << 8);
                                                VAR30[0] = VAR30[1] = VAR58 + (VAR15 << 8);
                                                VAR31[0] = VAR31[1] = VAR2->VAR55 + (VAR15 << 8);
                                                VAR28[0] = VAR28[1] = VAR56 + (VAR15 << 8);
                                                switch (VAR36)
                                                {
                                                case 1:
                                                case 0:
                                                    for (; VAR42 > 0; VAR42 -= 4)
                                                    {
                                                        for (VAR37 = 0; VAR37 < VAR41; VAR37++)
                                                        {
                                                            for (VAR38 = 0; VAR38 < 4;)
                                                            {
                                                                VAR36 = *VAR8++;
                                                                VAR26 = ((VAR25 *)VAR21) + VAR18[VAR38];
                                                                VAR27 = ((VAR25 *)VAR22) + VAR18[VAR38];
                                                                switch (VAR31[0][VAR36])
                                                                {
                                                                case 0:
                                                                    *VAR26 = FUN2(((FUN2(*VAR27) >> 1) + VAR28[VAR38 & 0x01][VAR36]) << 1);
                                                                    VAR38++;
                                                                case 1:
                                                                    VAR47 = ((FUN3(((unsigned short *)(VAR27))[0]) >> 1) + VAR28[VAR38 & 0x01][*VAR8]) << 1;
                                                                    ((unsigned short *)VAR26)[0] = FUN3(VAR47);
                                                                    VAR47 = ((FUN3(((unsigned short *)(VAR27))[1]) >> 1) + VAR28[VAR38 & 0x01][VAR36]) << 1;
                                                                    ((unsigned short *)VAR26)[1] = FUN3(VAR47);
                                                                    VAR8++;
                                                                    VAR38++;
                                                                case 2:
                                                                    if (VAR38 == 0)
                                                                    {
                                                                        for (VAR34 = 0, VAR35 = 0; VAR34 < 2; VAR34++, VAR35 += VAR18[1])
                                                                            VAR26[VAR35] = VAR27[VAR35];
                                                                        VAR38 += 2;
                                                                    case 3:
                                                                        if (VAR38 < 2)
                                                                        {
                                                                            for (VAR34 = 0, VAR35 = 0; VAR34 < (3 - VAR38); VAR34++, VAR35 += VAR18[1])
                                                                                VAR26[VAR35] = VAR27[VAR35];
                                                                            VAR38 = 3;
                                                                        case 8:
                                                                            if (VAR38 == 0)
                                                                            {
                                                                                FUN4(VAR8, VAR44, VAR45, VAR46)
                                                                                if (VAR44 == 1 || VAR20 != NULL)
                                                                                {
                                                                                    for (VAR34 = 0, VAR35 = 0; VAR34 < 4; VAR34++, VAR35 += VAR18[1])
                                                                                        VAR26[VAR35] = VAR27[VAR35];
                                                                                    FUN5(VAR8, VAR45, VAR46, VAR38)
                                                                                }
                                                                                else
                                                                                {
                                                                                    VAR44 = 1;
                                                                                    VAR45 = *VAR8 - 1;
                                                                                case 5:
                                                                                    FUN6(VAR8, VAR46, VAR38)
                                                                                    case 4 : for (VAR34 = 0, VAR35 = 0; VAR34 < (4 - VAR38); VAR34++, VAR35 += VAR18[1]) VAR26[VAR35] = VAR27[VAR35];
                                                                                    VAR38 = 4;
                                                                                case 7:
                                                                                    if (VAR46 != 0)
                                                                                        VAR46 = 0;
                                                                                    else
                                                                                    {
                                                                                        VAR8--;
                                                                                        VAR46 = 1;
                                                                                    case 6:
                                                                                        if (VAR20 != NULL)
                                                                                        {
                                                                                            for (VAR34 = 0, VAR35 = 0; VAR34 < 4; VAR34++, VAR35 += VAR18[1])
                                                                                                VAR26[VAR35] = VAR27[VAR35];
                                                                                            VAR38 = 4;
                                                                                        case 9:
                                                                                            VAR16 = *VAR8++;
                                                                                            VAR15 = (VAR16 & 0x7F) << 1;
                                                                                            VAR15 += (VAR15 << 8);
                                                                                            VAR15 += (VAR15 << 16);
                                                                                            for (VAR34 = 0, VAR35 = 0; VAR34 < 4; VAR34++, VAR35 += VAR18[1])
                                                                                                VAR26[VAR35] = VAR15;
                                                                                            FUN7(VAR8, VAR46, VAR16, VAR38)
                                                                                            default : return;
                                                                                            VAR21 += 4;
                                                                                            VAR22 += 4;
                                                                                            VAR21 += ((VAR6 - VAR41) * 4);
                                                                                            VAR22 += ((VAR6 - VAR41) * 4);
                                                                                        case 4:
                                                                                        case 3:
                                                                                            if (VAR20 != NULL)
                                                                                                return;
                                                                                            VAR39 = 1;
                                                                                            for (; VAR42 > 0; VAR42 -= 8)
                                                                                            {
                                                                                                for (VAR37 = 0; VAR37 < VAR41; VAR37++)
                                                                                                {
                                                                                                    for (VAR38 = 0; VAR38 < 4;)
                                                                                                    {
                                                                                                        VAR36 = *VAR8++;
                                                                                                        VAR26 = ((VAR25 *)VAR21) + VAR18[VAR38 * 2];
                                                                                                        VAR27 = ((VAR25 *)VAR21) + VAR18[(VAR38 * 2) - 1];
                                                                                                        switch (VAR31[VAR38 & 0x01][VAR36])
                                                                                                        {
                                                                                                        case 0:
                                                                                                            VAR26[VAR18[1]] = FUN2(((FUN2(*VAR27) >> 1) + VAR28[VAR38 & 0x01][VAR36]) << 1);
                                                                                                            if (VAR38 > 0 || VAR39 == 0 || VAR33->VAR48 != 0)
                                                                                                                VAR26[0] = ((VAR26[-VAR18[1]] >> 1) + (VAR26[VAR18[1]] >> 1)) & 0xFEFEFEFE;
                                                                                                            else
                                                                                                                VAR26[0] = FUN2(((FUN2(*VAR27) >> 1) + VAR28[VAR38 & 0x01][VAR36]) << 1);
                                                                                                            VAR38++;
                                                                                                        case 1:
                                                                                                            VAR47 = ((FUN3(((unsigned short *)VAR27)[0]) >> 1) + VAR28[VAR38 & 0x01][*VAR8]) << 1;
                                                                                                            ((unsigned short *)VAR26)[VAR18[2]] = FUN3(VAR47);
                                                                                                            VAR47 = ((FUN3(((unsigned short *)VAR27)[1]) >> 1) + VAR28[VAR38 & 0x01][VAR36]) << 1;
                                                                                                            ((unsigned short *)VAR26)[VAR18[2] + 1] = FUN3(VAR47);
                                                                                                            if (VAR38 > 0 || VAR39 == 0 || VAR33->VAR48 != 0)
                                                                                                                VAR26[0] = ((VAR26[-VAR18[1]] >> 1) + (VAR26[VAR18[1]] >> 1)) & 0xFEFEFEFE;
                                                                                                            else
                                                                                                                VAR26[0] = VAR26[VAR18[1]];
                                                                                                            VAR8++;
                                                                                                            VAR38++;
                                                                                                        case 2:
                                                                                                            if (VAR38 == 0)
                                                                                                            {
                                                                                                                for (VAR34 = 0, VAR35 = 0; VAR34 < 4; VAR34++, VAR35 += VAR18[1])
                                                                                                                    VAR26[VAR35] = *VAR27;
                                                                                                                VAR38 += 2;
                                                                                                            case 3:
                                                                                                                if (VAR38 < 2)
                                                                                                                {
                                                                                                                    for (VAR34 = 0, VAR35 = 0; VAR34 < 6 - (VAR38 * 2); VAR34++, VAR35 += VAR18[1])
                                                                                                                        VAR26[VAR35] = *VAR27;
                                                                                                                    VAR38 = 3;
                                                                                                                case 6:
                                                                                                                    VAR38 = 4;
                                                                                                                case 7:
                                                                                                                    if (VAR46 != 0)
                                                                                                                        VAR46 = 0;
                                                                                                                    else
                                                                                                                    {
                                                                                                                        VAR8--;
                                                                                                                        VAR46 = 1;
                                                                                                                        VAR38 = 4;
                                                                                                                    case 8:
                                                                                                                        if (VAR38 == 0)
                                                                                                                        {
                                                                                                                            FUN4(VAR8, VAR44, VAR45, VAR46)
                                                                                                                            if (VAR44 == 1)
                                                                                                                            {
                                                                                                                                for (VAR34 = 0, VAR35 = 0; VAR34 < 8; VAR34++, VAR35 += VAR18[1])
                                                                                                                                    VAR26[VAR35] = VAR27[VAR35];
                                                                                                                                FUN5(VAR8, VAR45, VAR46, VAR38)
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                                VAR45 = (*VAR8) - 1;
                                                                                                                                VAR44 = 1;
                                                                                                                            case 5:
                                                                                                                                FUN6(VAR8, VAR46, VAR38)
                                                                                                                                case 4 : for (VAR34 = 0, VAR35 = 0; VAR34 < 8 - (VAR38 * 2); VAR34++, VAR35 += VAR18[1]) VAR26[VAR35] = *VAR27;
                                                                                                                                VAR38 = 4;
                                                                                                                            case 9:
                                                                                                                                FUN8(VAR2->VAR59, VAR60, "");
                                                                                                                                VAR16 = *VAR8++;
                                                                                                                                VAR15 = (VAR16 & 0x7F) << 1;
                                                                                                                                VAR15 += (VAR15 << 8);
                                                                                                                                VAR15 += (VAR15 << 16);
                                                                                                                                for (VAR34 = 0, VAR35 = 0; VAR34 < 4; VAR34++, VAR35 += VAR18[1])
                                                                                                                                    VAR26[VAR35] = VAR15;
                                                                                                                                FUN7(VAR8, VAR46, VAR16, VAR38)
                                                                                                                                default : return;
                                                                                                                                VAR21 += 4;
                                                                                                                                VAR21 += (((VAR6 * 2) - VAR41) * 4);
                                                                                                                                VAR39 = 0;
                                                                                                                            case 10:
                                                                                                                                if (VAR20 == NULL)
                                                                                                                                {
                                                                                                                                    VAR39 = 1;
                                                                                                                                    for (; VAR42 > 0; VAR42 -= 8)
                                                                                                                                    {
                                                                                                                                        for (VAR37 = 0; VAR37 < VAR41; VAR37 += 2)
                                                                                                                                        {
                                                                                                                                            for (VAR38 = 0; VAR38 < 4;)
                                                                                                                                            {
                                                                                                                                                VAR36 = *VAR8++;
                                                                                                                                                VAR26 = ((VAR25 *)VAR21) + VAR18[VAR38 * 2];
                                                                                                                                                VAR27 = ((VAR25 *)VAR21) + VAR18[(VAR38 * 2) - 1];
                                                                                                                                                VAR16 = VAR27[0];
                                                                                                                                                VAR17 = VAR27[1];
                                                                                                                                                if (VAR38 == 0 && VAR39 != 0)
                                                                                                                                                {
                                                                                                                                                    VAR16 = VAR16 & 0xFF00FF00;
                                                                                                                                                    VAR16 = (VAR16 >> 8) | VAR16;
                                                                                                                                                    VAR17 = VAR17 & 0xFF00FF00;
                                                                                                                                                    VAR17 = (VAR17 >> 8) | VAR17;
                                                                                                                                                    VAR16 = VAR16 & 0x00FF00FF;
                                                                                                                                                    VAR16 = (VAR16 << 8) | VAR16;
                                                                                                                                                    VAR17 = VAR17 & 0x00FF00FF;
                                                                                                                                                    VAR17 = (VAR17 << 8) | VAR17;
                                                                                                                                                    switch (VAR31[VAR38 & 0x01][VAR36])
                                                                                                                                                    {
                                                                                                                                                    case 0:
                                                                                                                                                        VAR26[VAR18[1]] = FUN2(((FUN2(VAR16) >> 1) + VAR29[VAR38 & 0x01][VAR36]) << 1);
                                                                                                                                                        VAR26[VAR18[1] + 1] = FUN2(((FUN2(VAR17) >> 1) + VAR30[VAR38 & 0x01][VAR36]) << 1);
                                                                                                                                                        if (VAR38 > 0 || VAR33->VAR48 != 0 || VAR39 == 0)
                                                                                                                                                        {
                                                                                                                                                            VAR26[0] = ((VAR26[-VAR18[1]] >> 1) + (VAR26[VAR18[1]] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                            VAR26[1] = ((VAR26[-VAR18[1] + 1] >> 1) + (VAR26[VAR18[1] + 1] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                        }
                                                                                                                                                        else
                                                                                                                                                        {
                                                                                                                                                            VAR26[0] = VAR26[VAR18[1]];
                                                                                                                                                            VAR26[1] = VAR26[VAR18[1] + 1];
                                                                                                                                                            VAR38++;
                                                                                                                                                        case 1:
                                                                                                                                                            VAR26[VAR18[1]] = FUN2(((FUN2(VAR16) >> 1) + VAR29[VAR38 & 0x01][*VAR8]) << 1);
                                                                                                                                                            VAR26[VAR18[1] + 1] = FUN2(((FUN2(VAR17) >> 1) + VAR29[VAR38 & 0x01][VAR36]) << 1);
                                                                                                                                                            if (VAR38 > 0 || VAR33->VAR48 != 0 || VAR39 == 0)
                                                                                                                                                            {
                                                                                                                                                                VAR26[0] = ((VAR26[-VAR18[1]] >> 1) + (VAR26[VAR18[1]] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                                VAR26[1] = ((VAR26[-VAR18[1] + 1] >> 1) + (VAR26[VAR18[1] + 1] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                            }
                                                                                                                                                            else
                                                                                                                                                            {
                                                                                                                                                                VAR26[0] = VAR26[VAR18[1]];
                                                                                                                                                                VAR26[1] = VAR26[VAR18[1] + 1];
                                                                                                                                                                VAR8++;
                                                                                                                                                                VAR38++;
                                                                                                                                                            case 2:
                                                                                                                                                                if (VAR38 == 0)
                                                                                                                                                                {
                                                                                                                                                                    if (VAR39 != 0)
                                                                                                                                                                    {
                                                                                                                                                                        for (VAR34 = 0, VAR35 = VAR18[1]; VAR34 < 3; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                        {
                                                                                                                                                                            VAR26[VAR35] = VAR16;
                                                                                                                                                                            VAR26[VAR35 + 1] = VAR17;
                                                                                                                                                                            VAR26[0] = ((VAR26[-VAR18[1]] >> 1) + (VAR26[VAR18[1]] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                                            VAR26[1] = ((VAR26[-VAR18[1] + 1] >> 1) + (VAR26[VAR18[1] + 1] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                                        }
                                                                                                                                                                        else
                                                                                                                                                                        {
                                                                                                                                                                            for (VAR34 = 0, VAR35 = 0; VAR34 < 4; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                            {
                                                                                                                                                                                VAR26[VAR35] = VAR16;
                                                                                                                                                                                VAR26[VAR35 + 1] = VAR17;
                                                                                                                                                                                VAR38 += 2;
                                                                                                                                                                            case 3:
                                                                                                                                                                                if (VAR38 < 2)
                                                                                                                                                                                {
                                                                                                                                                                                    if (VAR38 == 0 && VAR39 != 0)
                                                                                                                                                                                    {
                                                                                                                                                                                        for (VAR34 = 0, VAR35 = VAR18[1]; VAR34 < 5; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                        {
                                                                                                                                                                                            VAR26[VAR35] = VAR16;
                                                                                                                                                                                            VAR26[VAR35 + 1] = VAR17;
                                                                                                                                                                                            VAR26[0] = ((VAR26[-VAR18[1]] >> 1) + (VAR26[VAR18[1]] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                                                            VAR26[1] = ((VAR26[-VAR18[1] + 1] >> 1) + (VAR26[VAR18[1] + 1] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                                                        }
                                                                                                                                                                                        else
                                                                                                                                                                                        {
                                                                                                                                                                                            for (VAR34 = 0, VAR35 = 0; VAR34 < 6 - (VAR38 * 2); VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                            {
                                                                                                                                                                                                VAR26[VAR35] = VAR16;
                                                                                                                                                                                                VAR26[VAR35 + 1] = VAR17;
                                                                                                                                                                                                VAR38 = 3;
                                                                                                                                                                                            case 8:
                                                                                                                                                                                                if (VAR38 == 0)
                                                                                                                                                                                                {
                                                                                                                                                                                                    FUN4(VAR8, VAR44, VAR45, VAR46)
                                                                                                                                                                                                    if (VAR44 == 1)
                                                                                                                                                                                                    {
                                                                                                                                                                                                        if (VAR39 != 0)
                                                                                                                                                                                                        {
                                                                                                                                                                                                            for (VAR34 = 0, VAR35 = VAR18[1]; VAR34 < 7; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                            {
                                                                                                                                                                                                                VAR26[VAR35] = VAR16;
                                                                                                                                                                                                                VAR26[VAR35 + 1] = VAR17;
                                                                                                                                                                                                                VAR26[0] = ((VAR26[-VAR18[1]] >> 1) + (VAR26[VAR18[1]] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                                                                                VAR26[1] = ((VAR26[-VAR18[1] + 1] >> 1) + (VAR26[VAR18[1] + 1] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                                                                            }
                                                                                                                                                                                                            else
                                                                                                                                                                                                            {
                                                                                                                                                                                                                for (VAR34 = 0, VAR35 = 0; VAR34 < 8; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                {
                                                                                                                                                                                                                    VAR26[VAR35] = VAR16;
                                                                                                                                                                                                                    VAR26[VAR35 + 1] = VAR17;
                                                                                                                                                                                                                    FUN5(VAR8, VAR45, VAR46, VAR38)
                                                                                                                                                                                                                }
                                                                                                                                                                                                                else
                                                                                                                                                                                                                {
                                                                                                                                                                                                                    VAR44 = 1;
                                                                                                                                                                                                                    VAR45 = (*VAR8) - 1;
                                                                                                                                                                                                                case 5:
                                                                                                                                                                                                                    FUN6(VAR8, VAR46, VAR38)
                                                                                                                                                                                                                    case 4 : if (VAR38 == 0 && VAR39 != 0)
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                        for (VAR34 = 0, VAR35 = VAR18[1]; VAR34 < 7; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                            VAR26[VAR35] = VAR16;
                                                                                                                                                                                                                            VAR26[VAR35 + 1] = VAR17;
                                                                                                                                                                                                                            VAR26[0] = ((VAR26[-VAR18[1]] >> 1) + (VAR26[VAR18[1]] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                                                                                            VAR26[1] = ((VAR26[-VAR18[1] + 1] >> 1) + (VAR26[VAR18[1] + 1] >> 1)) & 0xFEFEFEFE;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        else
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                            for (VAR34 = 0, VAR35 = 0; VAR34 < 8 - (VAR38 * 2); VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                VAR26[VAR35] = VAR16;
                                                                                                                                                                                                                                VAR26[VAR35 + 1] = VAR17;
                                                                                                                                                                                                                                VAR38 = 4;
                                                                                                                                                                                                                            case 6:
                                                                                                                                                                                                                                VAR38 = 4;
                                                                                                                                                                                                                            case 7:
                                                                                                                                                                                                                                if (VAR38 == 0)
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                    if (VAR46 != 0)
                                                                                                                                                                                                                                        VAR46 = 0;
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                        VAR8--;
                                                                                                                                                                                                                                        VAR46 = 1;
                                                                                                                                                                                                                                        VAR38 = 4;
                                                                                                                                                                                                                                    case 9:
                                                                                                                                                                                                                                        FUN8(VAR2->VAR59, VAR60, "");
                                                                                                                                                                                                                                        VAR16 = *VAR8;
                                                                                                                                                                                                                                        VAR15 = (VAR16 & 0x7F) << 1;
                                                                                                                                                                                                                                        VAR15 += (VAR15 << 8);
                                                                                                                                                                                                                                        VAR15 += (VAR15 << 16);
                                                                                                                                                                                                                                        for (VAR34 = 0, VAR35 = 0; VAR34 < 8; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                                            VAR26[VAR35] = VAR15;
                                                                                                                                                                                                                                        FUN7(VAR8, VAR46, VAR16, VAR38)
                                                                                                                                                                                                                                        default : return;
                                                                                                                                                                                                                                        VAR21 += 8;
                                                                                                                                                                                                                                        VAR21 += (((VAR6 * 2) - VAR41) * 4);
                                                                                                                                                                                                                                        VAR39 = 0;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                        for (; VAR42 > 0; VAR42 -= 8)
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                            for (VAR37 = 0; VAR37 < VAR41; VAR37 += 2)
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                for (VAR38 = 0; VAR38 < 4;)
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                    VAR36 = *VAR8++;
                                                                                                                                                                                                                                                    VAR26 = ((VAR25 *)VAR21) + VAR18[VAR38 * 2];
                                                                                                                                                                                                                                                    VAR27 = ((VAR25 *)VAR22) + VAR18[VAR38 * 2];
                                                                                                                                                                                                                                                    switch (VAR31[VAR38 & 0x01][VAR36])
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                    case 0:
                                                                                                                                                                                                                                                        VAR16 = VAR29[VAR38 & 0x01][VAR36];
                                                                                                                                                                                                                                                        VAR17 = VAR30[VAR38 & 0x01][VAR36];
                                                                                                                                                                                                                                                        VAR26[0] = FUN2(((FUN2(VAR27[0]) >> 1) + VAR16) << 1);
                                                                                                                                                                                                                                                        VAR26[1] = FUN2(((FUN2(VAR27[1]) >> 1) + VAR17) << 1);
                                                                                                                                                                                                                                                        VAR26[VAR18[1]] = FUN2(((FUN2(VAR27[VAR18[1]]) >> 1) + VAR16) << 1);
                                                                                                                                                                                                                                                        VAR26[VAR18[1] + 1] = FUN2(((FUN2(VAR27[VAR18[1] + 1]) >> 1) + VAR17) << 1);
                                                                                                                                                                                                                                                        VAR38++;
                                                                                                                                                                                                                                                    case 1:
                                                                                                                                                                                                                                                        VAR16 = VAR29[VAR38 & 0x01][*VAR8++];
                                                                                                                                                                                                                                                        VAR17 = VAR29[VAR38 & 0x01][VAR36];
                                                                                                                                                                                                                                                        VAR26[0] = FUN2(((FUN2(VAR27[0]) >> 1) + VAR16) << 1);
                                                                                                                                                                                                                                                        VAR26[1] = FUN2(((FUN2(VAR27[1]) >> 1) + VAR17) << 1);
                                                                                                                                                                                                                                                        VAR26[VAR18[1]] = FUN2(((FUN2(VAR27[VAR18[1]]) >> 1) + VAR16) << 1);
                                                                                                                                                                                                                                                        VAR26[VAR18[1] + 1] = FUN2(((FUN2(VAR27[VAR18[1] + 1]) >> 1) + VAR17) << 1);
                                                                                                                                                                                                                                                        VAR38++;
                                                                                                                                                                                                                                                    case 2:
                                                                                                                                                                                                                                                        if (VAR38 == 0)
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                            for (VAR34 = 0, VAR35 = 0; VAR34 < 4; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                VAR26[VAR35] = VAR27[VAR35];
                                                                                                                                                                                                                                                                VAR26[VAR35 + 1] = VAR27[VAR35 + 1];
                                                                                                                                                                                                                                                                VAR38 += 2;
                                                                                                                                                                                                                                                            case 3:
                                                                                                                                                                                                                                                                if (VAR38 < 2)
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                    for (VAR34 = 0, VAR35 = 0; VAR34 < 6 - (VAR38 * 2); VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                        VAR26[VAR35] = VAR27[VAR35];
                                                                                                                                                                                                                                                                        VAR26[VAR35 + 1] = VAR27[VAR35 + 1];
                                                                                                                                                                                                                                                                        VAR38 = 3;
                                                                                                                                                                                                                                                                    case 8:
                                                                                                                                                                                                                                                                        if (VAR38 == 0)
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                            FUN4(VAR8, VAR44, VAR45, VAR46)
                                                                                                                                                                                                                                                                            for (VAR34 = 0, VAR35 = 0; VAR34 < 8; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                ((VAR25 *)VAR21)[VAR35] = ((VAR25 *)VAR22)[VAR35];
                                                                                                                                                                                                                                                                                ((VAR25 *)VAR21)[VAR35 + 1] = ((VAR25 *)VAR22)[VAR35 + 1];
                                                                                                                                                                                                                                                                                FUN5(VAR8, VAR45, VAR46, VAR38)
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                VAR44 = 1;
                                                                                                                                                                                                                                                                                VAR45 = (*VAR8) - 1;
                                                                                                                                                                                                                                                                            case 5:
                                                                                                                                                                                                                                                                            case 7:
                                                                                                                                                                                                                                                                                FUN6(VAR8, VAR46, VAR38)
                                                                                                                                                                                                                                                                                case 6 : case 4 : for (VAR34 = 0, VAR35 = 0; VAR34 < 8 - (VAR38 * 2); VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                    VAR26[VAR35] = VAR27[VAR35];
                                                                                                                                                                                                                                                                                    VAR26[VAR35 + 1] = VAR27[VAR35 + 1];
                                                                                                                                                                                                                                                                                    VAR38 = 4;
                                                                                                                                                                                                                                                                                case 9:
                                                                                                                                                                                                                                                                                    FUN8(VAR2->VAR59, VAR60, "");
                                                                                                                                                                                                                                                                                    VAR16 = *VAR8;
                                                                                                                                                                                                                                                                                    VAR15 = (VAR16 & 0x7F) << 1;
                                                                                                                                                                                                                                                                                    VAR15 += (VAR15 << 8);
                                                                                                                                                                                                                                                                                    VAR15 += (VAR15 << 16);
                                                                                                                                                                                                                                                                                    for (VAR34 = 0, VAR35 = 0; VAR34 < 8; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                                                                                        ((VAR25 *)VAR21)[VAR35] = ((VAR25 *)VAR21)[VAR35 + 1] = VAR15;
                                                                                                                                                                                                                                                                                    FUN7(VAR8, VAR46, VAR16, VAR38)
                                                                                                                                                                                                                                                                                    default : return;
                                                                                                                                                                                                                                                                                    VAR21 += 8;
                                                                                                                                                                                                                                                                                    VAR22 += 8;
                                                                                                                                                                                                                                                                                    VAR21 += (((VAR6 * 2) - VAR41) * 4);
                                                                                                                                                                                                                                                                                    VAR22 += (((VAR6 * 2) - VAR41) * 4);
                                                                                                                                                                                                                                                                                case 11:
                                                                                                                                                                                                                                                                                    if (VAR20 == NULL)
                                                                                                                                                                                                                                                                                        return;
                                                                                                                                                                                                                                                                                    for (; VAR42 > 0; VAR42 -= 8)
                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                        for (VAR37 = 0; VAR37 < VAR41; VAR37++)
                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                            for (VAR38 = 0; VAR38 < 4;)
                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                VAR36 = *VAR8++;
                                                                                                                                                                                                                                                                                                VAR26 = ((VAR25 *)VAR21) + VAR18[VAR38 * 2];
                                                                                                                                                                                                                                                                                                VAR27 = ((VAR25 *)VAR22) + VAR18[VAR38 * 2];
                                                                                                                                                                                                                                                                                                switch (VAR31[VAR38 & 0x01][VAR36])
                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                case 0:
                                                                                                                                                                                                                                                                                                    VAR26[0] = FUN2(((FUN2(*VAR27) >> 1) + VAR28[VAR38 & 0x01][VAR36]) << 1);
                                                                                                                                                                                                                                                                                                    VAR26[VAR18[1]] = FUN2(((FUN2(VAR27[VAR18[1]]) >> 1) + VAR28[VAR38 & 0x01][VAR36]) << 1);
                                                                                                                                                                                                                                                                                                    VAR38++;
                                                                                                                                                                                                                                                                                                case 1:
                                                                                                                                                                                                                                                                                                    VAR16 = (unsigned short)(VAR28[VAR38 & 0x01][*VAR8++]);
                                                                                                                                                                                                                                                                                                    VAR17 = (unsigned short)(VAR28[VAR38 & 0x01][VAR36]);
                                                                                                                                                                                                                                                                                                    VAR47 = (unsigned short)(((FUN3(((unsigned short *)VAR27)[0]) >> 1) + VAR16) << 1);
                                                                                                                                                                                                                                                                                                    ((unsigned short *)VAR26)[0] = FUN3(VAR47);
                                                                                                                                                                                                                                                                                                    VAR47 = (unsigned short)(((FUN3(((unsigned short *)VAR27)[1]) >> 1) + VAR17) << 1);
                                                                                                                                                                                                                                                                                                    ((unsigned short *)VAR26)[1] = FUN3(VAR47);
                                                                                                                                                                                                                                                                                                    VAR47 = (unsigned short)(((FUN3(((unsigned short *)VAR27)[VAR18[2]]) >> 1) + VAR16) << 1);
                                                                                                                                                                                                                                                                                                    ((unsigned short *)VAR26)[VAR18[2]] = FUN3(VAR47);
                                                                                                                                                                                                                                                                                                    VAR47 = (unsigned short)(((FUN3(((unsigned short *)VAR27)[VAR18[2] + 1]) >> 1) + VAR17) << 1);
                                                                                                                                                                                                                                                                                                    ((unsigned short *)VAR26)[VAR18[2] + 1] = FUN3(VAR47);
                                                                                                                                                                                                                                                                                                    VAR38++;
                                                                                                                                                                                                                                                                                                case 2:
                                                                                                                                                                                                                                                                                                    if (VAR38 == 0)
                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                        for (VAR34 = 0, VAR35 = 0; VAR34 < 4; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                                                                                                            VAR26[VAR35] = VAR27[VAR35];
                                                                                                                                                                                                                                                                                                        VAR38 += 2;
                                                                                                                                                                                                                                                                                                    case 3:
                                                                                                                                                                                                                                                                                                        if (VAR38 < 2)
                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                            for (VAR34 = 0, VAR35 = 0; VAR34 < 6 - (VAR38 * 2); VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                                                                                                                VAR26[VAR35] = VAR27[VAR35];
                                                                                                                                                                                                                                                                                                            VAR38 = 3;
                                                                                                                                                                                                                                                                                                        case 8:
                                                                                                                                                                                                                                                                                                            if (VAR38 == 0)
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                FUN4(VAR8, VAR44, VAR45, VAR46)
                                                                                                                                                                                                                                                                                                                for (VAR34 = 0, VAR35 = 0; VAR34 < 8; VAR34++, VAR35 += VAR18[1]) VAR26[VAR35] = VAR27[VAR35];
                                                                                                                                                                                                                                                                                                                FUN5(VAR8, VAR45, VAR46, VAR38)
                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                            else
                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                VAR44 = 1;
                                                                                                                                                                                                                                                                                                                VAR45 = (*VAR8) - 1;
                                                                                                                                                                                                                                                                                                            case 5:
                                                                                                                                                                                                                                                                                                            case 7:
                                                                                                                                                                                                                                                                                                                FUN6(VAR8, VAR46, VAR38)
                                                                                                                                                                                                                                                                                                                case 4 : case 6 : for (VAR34 = 0, VAR35 = 0; VAR34 < 8 - (VAR38 * 2); VAR34++, VAR35 += VAR18[1]) VAR26[VAR35] = VAR27[VAR35];
                                                                                                                                                                                                                                                                                                                VAR38 = 4;
                                                                                                                                                                                                                                                                                                            case 9:
                                                                                                                                                                                                                                                                                                                FUN8(VAR2->VAR59, VAR60, "");
                                                                                                                                                                                                                                                                                                                VAR16 = *VAR8++;
                                                                                                                                                                                                                                                                                                                VAR15 = (VAR16 & 0x7F) << 1;
                                                                                                                                                                                                                                                                                                                VAR15 += (VAR15 << 8);
                                                                                                                                                                                                                                                                                                                VAR15 += (VAR15 << 16);
                                                                                                                                                                                                                                                                                                                for (VAR34 = 0, VAR35 = 0; VAR34 < 4; VAR34++, VAR35 += VAR18[1])
                                                                                                                                                                                                                                                                                                                    VAR26[VAR35] = VAR15;
                                                                                                                                                                                                                                                                                                                FUN7(VAR8, VAR46, VAR16, VAR38)
                                                                                                                                                                                                                                                                                                                default : return;
                                                                                                                                                                                                                                                                                                                VAR21 += 4;
                                                                                                                                                                                                                                                                                                                VAR22 += 4;
                                                                                                                                                                                                                                                                                                                VAR21 += (((VAR6 * 2) - VAR41) * 4);
                                                                                                                                                                                                                                                                                                                VAR22 += (((VAR6 * 2) - VAR41) * 4);
                                                                                                                                                                                                                                                                                                            default:
                                                                                                                                                                                                                                                                                                                return;
                                                                                                                                                                                                                                                                                                                if (VAR33 < VAR32)
                                                                                                                                                                                                                                                                                                                    return;
                                                                                                                                                                                                                                                                                                                for (; VAR33 >= VAR32; VAR33--)
                                                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                                    if (VAR33->VAR51 != 0)
                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                        VAR33->VAR51 = 0;
                                                                                                                                                                                                                                                                                                                        VAR33->VAR52 = (VAR33 - 1)->VAR52;
                                                                                                                                                                                                                                                                                                                        if (VAR33->VAR50)
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                            VAR33->VAR49 += VAR33->VAR6;
                                                                                                                                                                                                                                                                                                                            VAR33->VAR6 = (VAR33 - 1)->VAR6 - VAR33->VAR6;
                                                                                                                                                                                                                                                                                                                            if (VAR43 <= VAR33->VAR49 && VAR6 < VAR33->VAR6 + VAR33->VAR49)
                                                                                                                                                                                                                                                                                                                                VAR33->VAR6 = VAR6 - VAR33->VAR49;
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                        else
                                                                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                                                            VAR33->VAR48 += VAR33->VAR7;
                                                                                                                                                                                                                                                                                                                            VAR33->VAR7 = (VAR33 - 1)->VAR7 - VAR33->VAR7;