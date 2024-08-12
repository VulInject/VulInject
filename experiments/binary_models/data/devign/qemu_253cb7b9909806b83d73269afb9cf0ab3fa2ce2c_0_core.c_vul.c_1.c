static void FUN1(VAR1 *VAR2)
{
    const VAR3 *VAR4;
    VAR3 *VAR5;
    int VAR6;
    VAR4 = VAR2->VAR7;
    VAR5 = VAR2->VAR7;
    {
        int VAR8;
        FUN2("", VAR2->VAR9 | (VAR2->VAR10 << 8));
        for (VAR8 = 0; VAR8 < VAR11; VAR8++)
        {
            FUN2("", VAR4[VAR8]);
            FUN2("");
            if (VAR2->VAR12 == VAR13 && VAR2->VAR7[0] != VAR14 && VAR2->VAR7[0] != VAR15)
            {
                FUN3(VAR2);
                return;
                switch (VAR2->VAR7[0])
                {
                case VAR16:
                    if (FUN4(VAR2->VAR17) && !VAR2->VAR18)
                    {
                        FUN5(VAR2);
                    }
                    else
                    {
                        VAR2->VAR18 = 0;
                        FUN6(VAR2, VAR19, VAR20);
                    case VAR21:
                    case VAR22:
                    {
                        int VAR23, VAR24;
                        if (VAR4[0] == VAR22)
                            else VAR6 = VAR4[4];
                        VAR23 = VAR4[2] >> 6;
                        VAR24 = VAR4[2] & 0x3f;
                        switch (VAR23)
                        {
                        case 0:
                            switch (VAR24)
                            {
                            case VAR25:
                                FUN7(&VAR5[0], 16 + 6);
                                VAR5[2] = 0x70;
                                VAR5[3] = 0;
                                VAR5[4] = 0;
                                VAR5[5] = 0;
                                VAR5[6] = 0;
                                VAR5[7] = 0;
                                VAR5[8] = 0x01;
                                VAR5[9] = 0x06;
                                VAR5[10] = 0x00;
                                VAR5[11] = 0x05;
                                VAR5[12] = 0x00;
                                VAR5[13] = 0x00;
                                VAR5[14] = 0x00;
                                VAR5[15] = 0x00;
                                FUN8(VAR2, 16, VAR6);
                            case VAR26:
                                FUN7(&VAR5[0], 24 + 6);
                                VAR5[2] = 0x70;
                                VAR5[3] = 0;
                                VAR5[4] = 0;
                                VAR5[5] = 0;
                                VAR5[6] = 0;
                                VAR5[7] = 0;
                                VAR5[17] = 0;
                                VAR5[19] = 0;
                                VAR5[21] = 0;
                                VAR5[23] = 0;
                                FUN8(VAR2, 24, VAR6);
                            case VAR27:
                                FUN7(&VAR5[0], 28 + 6);
                                VAR5[2] = 0x70;
                                VAR5[3] = 0;
                                VAR5[4] = 0;
                                VAR5[5] = 0;
                                VAR5[6] = 0;
                                VAR5[7] = 0;
                                VAR5[8] = 0x2a;
                                VAR5[9] = 0x12;
                                VAR5[10] = 0x00;
                                VAR5[11] = 0x00;
                                VAR5[12] = 0x71;
                                VAR5[13] = 3 << 5;
                                VAR5[14] = (1 << 0) | (1 << 3) | (1 << 5);
                                if (FUN9(VAR2->VAR17))
                                    VAR5[6] |= 1 << 1;
                                VAR5[15] = 0x00;
                                FUN7(&VAR5[16], 706);
                                VAR5[18] = 0;
                                VAR5[19] = 2;
                                FUN7(&VAR5[20], 512);
                                FUN7(&VAR5[22], 706);
                                VAR5[24] = 0;
                                VAR5[25] = 0;
                                VAR5[26] = 0;
                                VAR5[27] = 0;
                                FUN8(VAR2, 28, VAR6);
                            default:
                                goto VAR28;
                            case 1:
                                goto VAR28;
                            case 2:
                                goto VAR28;
                            default:
                            case 3: VAR29 ) ;
                            case VAR14:
                                VAR6 = VAR4[4];
                                memset(VAR5, 0, 18);
                                VAR5[0] = 0x70 | (1 << 7);
                                VAR5[2] = VAR2->VAR12;
                                VAR5[7] = 10;
                                VAR5[12] = VAR2->VAR30;
                                if (VAR2->VAR12 == VAR13)
                                    VAR2->VAR12 = VAR31;
                                FUN8(VAR2, 18, VAR6);
                            case VAR32:
                                if (FUN4(VAR2->VAR17))
                                {
                                    FUN10(VAR2->VAR17, VAR4[4] & 1);
                                    FUN5(VAR2);
                                }
                                else
                                {
                                    FUN6(VAR2, VAR19, VAR20);
                                case VAR33:
                                case VAR34:
                                {
                                    int VAR35, VAR36;
                                    if (VAR4[0] == VAR33)
                                        VAR35 = FUN11(VAR4 + 7);
                                    else
                                        VAR35 = FUN12(VAR4 + 6);
                                    VAR36 = FUN12(VAR4 + 2);
                                    if (VAR35 == 0)
                                    {
                                        FUN5(VAR2);
                                        FUN13(VAR2, VAR36, VAR35, 2048);
                                    case VAR37:
                                    {
                                        int VAR35, VAR36, VAR38;
                                        VAR35 = (VAR4[6] << 16) | (VAR4[7] << 8) | VAR4[8];
                                        VAR36 = FUN12(VAR4 + 2);
                                        if (VAR35 == 0)
                                        {
                                            FUN5(VAR2);
                                            VAR38 = VAR4[9];
                                            switch (VAR38 & 0xf8)
                                            {
                                            case 0x00:
                                                FUN5(VAR2);
                                            case 0x10:
                                                FUN13(VAR2, VAR36, VAR35, 2048);
                                            case 0xf8:
                                                FUN13(VAR2, VAR36, VAR35, 2352);
                                            default:
                                            case VAR39:
                                            {
                                                unsigned int VAR36;
                                                uint64_t VAR40;
                                                FUN14(VAR2->VAR17, &VAR40);
                                                VAR40 >>= 2;
                                                if (VAR40 == 0)
                                                {
                                                    FUN6(VAR2, VAR19, VAR20);
                                                    VAR36 = FUN12(VAR4 + 2);
                                                    if (VAR36 >= VAR40)
                                                    { VAR41 ) ;
                                                        FUN5(VAR2);
                                                    case VAR42:
                                                    {
                                                        int VAR43, VAR44, VAR45 = 0;
                                                        VAR43 = VAR4[4] & 1;
                                                        VAR44 = (VAR4[4] >> 1) & 1;
                                                        if (VAR44)
                                                        {
                                                            VAR45 = FUN15(VAR2->VAR17, !VAR43);
                                                            switch (VAR45)
                                                            {
                                                            case 0:
                                                                FUN5(VAR2);
                                                            case -VAR46:
                                                                FUN6(VAR2, VAR19, VAR47);
                                                            default:
                                                                FUN6(VAR2, VAR19, VAR20);
                                                            case VAR48:
                                                            {
                                                                VAR6 = FUN11(VAR4 + 8);
                                                                FUN7(VAR5, 0);
                                                                VAR5[2] = 0;
                                                                VAR5[3] = 0;
                                                                VAR5[4] = 0;
                                                                VAR5[5] = 1;
                                                                FUN7(VAR5 + 6, 0);
                                                                FUN8(VAR2, 8, VAR6);
                                                            case VAR49:
                                                            {
                                                                int VAR50, VAR51, VAR52, VAR53;
                                                                uint64_t VAR40;
                                                                FUN14(VAR2->VAR17, &VAR40);
                                                                VAR40 >>= 2;
                                                                if (VAR40 == 0)
                                                                {
                                                                    FUN6(VAR2, VAR19, VAR20);
                                                                    VAR50 = VAR4[9] >> 6;
                                                                    VAR51 = (VAR4[1] >> 1) & 1;
                                                                    VAR52 = VAR4[6];
                                                                    switch (VAR50)
                                                                    {
                                                                    case 0:
                                                                        VAR53 = FUN16(VAR40, VAR5, VAR51, VAR52);
                                                                        if (VAR53 < 0)
                                                                            goto VAR28;
                                                                        FUN8(VAR2, VAR53, VAR6);
                                                                    case 1:
                                                                        memset(VAR5, 0, 12);
                                                                        VAR5[1] = 0x0a;
                                                                        VAR5[2] = 0x01;
                                                                        VAR5[3] = 0x01;
                                                                        FUN8(VAR2, 12, VAR6);
                                                                    case 2:
                                                                        VAR53 = FUN17(VAR40, VAR5, VAR51, VAR52);
                                                                        if (VAR53 < 0)
                                                                            goto VAR28;
                                                                        FUN8(VAR2, VAR53, VAR6);
                                                                    default:
                                                                    VAR28:
                                                                    case VAR54:
                                                                    {
                                                                        uint64_t VAR40;
                                                                        FUN14(VAR2->VAR17, &VAR40);
                                                                        VAR40 >>= 2;
                                                                        if (VAR40 == 0)
                                                                        {
                                                                            FUN6(VAR2, VAR19, VAR20);
                                                                            FUN18(VAR5, VAR40 - 1);
                                                                            FUN18(VAR5 + 4, 2048);
                                                                            FUN8(VAR2, 8, 8);
                                                                        case VAR55:
                                                                        {
                                                                            int VAR56 = VAR4[1];
                                                                            int VAR50 = VAR4[7];
                                                                            int VAR57;
                                                                            VAR6 = FUN11(VAR4 + 8);
                                                                            if (VAR50 < 0xff)
                                                                            {
                                                                                if (FUN19(VAR2))
                                                                                { VAR58 ) ;
                                                                                }
                                                                                else if (!FUN20(VAR2))
                                                                                {
                                                                                    memset(VAR5, 0, VAR6 > VAR59 * 512 + 4 ? VAR59 * 512 + 4 : VAR6);
                                                                                    switch (VAR50)
                                                                                    {
                                                                                    case 0x00 ... 0x7f:
                                                                                    case 0xff:
                                                                                        if (VAR56 == 0)
                                                                                        {
                                                                                            VAR57 = FUN21(VAR2, VAR50, VAR4, VAR5);
                                                                                            if (VAR57 < 0)
                                                                                                FUN6(VAR2, VAR60, -VAR57);
                                                                                            else
                                                                                                FUN8(VAR2, VAR57, VAR6);
                                                                                        case 0x80:
                                                                                        case 0x81:
                                                                                        case 0x82:
                                                                                        case 0x83:
                                                                                        case 0x90:
                                                                                        case 0xc0:
                                                                                        default:
                                                                                        case VAR61:
                                                                                            FUN5(VAR2);
                                                                                        case VAR15:
                                                                                            VAR6 = VAR4[4];
                                                                                            VAR5[0] = 0x05;
                                                                                            VAR5[1] = 0x80;
                                                                                            VAR5[2] = 0x00;
                                                                                            VAR5[3] = 0x21;
                                                                                            VAR5[4] = 31;
                                                                                            VAR5[5] = 0;
                                                                                            VAR5[6] = 0;
                                                                                            VAR5[7] = 0;
                                                                                            FUN22(VAR5 + 8, 8, "");
                                                                                            FUN22(VAR5 + 16, 16, "");
                                                                                            FUN22(VAR5 + 32, 4, VAR2->VAR62);
                                                                                            FUN8(VAR2, 36, VAR6);
                                                                                        case VAR63:
                                                                                        {
                                                                                            uint32_t VAR53;
                                                                                            uint8_t VAR64 = 0;
                                                                                            if (VAR4[2] != 0 || VAR4[3] != 0)
                                                                                            {
                                                                                                if (VAR6 > 512)
                                                                                                    VAR6 = 512;
                                                                                                memset(VAR5, 0, VAR6);
                                                                                                if (FUN23(VAR2))
                                                                                                    FUN7(VAR5 + 6, VAR65);
                                                                                                else if (FUN19(VAR2))
                                                                                                    FUN7(VAR5 + 6, VAR66);
                                                                                                VAR5[10] = 0x02 | 0x01;
                                                                                                VAR53 = 12;
                                                                                                VAR53 += FUN24(VAR5, &VAR64, VAR65);
                                                                                                VAR53 += FUN24(VAR5, &VAR64, VAR66);
                                                                                                FUN18(VAR5, VAR53 - 4);
                                                                                                FUN8(VAR2, VAR53, VAR6);
                                                                                            default: VAR67 )