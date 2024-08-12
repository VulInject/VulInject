static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    ff_asf_guid VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15, VAR16;
    int64_t VAR17;
    AVRational VAR18[128];
    uint32_t VAR19[128];
    memset(VAR18, 0, sizeof(VAR18));
    memset(VAR19, 0, sizeof(VAR19));
    FUN2(VAR10, &VAR8);
    if (FUN3(&VAR8, &VAR20))
        return -1;
    FUN4(VAR10);
    FUN5(VAR10);
    FUN6(VAR10);
    FUN6(VAR10);
    memset(&VAR6->VAR21, -1, sizeof(VAR6->VAR21));
    for (;;)
    {
        uint64_t VAR22 = FUN7(VAR10);
        FUN2(VAR10, &VAR8);
        VAR17 = FUN4(VAR10);
        FUN8(VAR2, "" VAR23 "", VAR22);
        FUN9(&VAR8);
        FUN8(VAR2, "" VAR23 "", VAR17);
        if (!FUN3(&VAR8, &VAR24))
        {
            VAR6->VAR25 = FUN7(VAR10);
            if (!(VAR6->VAR26.VAR27 & 0x01) && VAR17 >= 100)
            {
                VAR6->VAR28 = VAR17 - 24;
            }
            else
            {
                VAR6->VAR28 = (VAR29)-1;
            }
            break;
        }
        if (VAR17 < 24)
            return -1;
        if (!FUN3(&VAR8, &VAR30))
        {
            FUN2(VAR10, &VAR6->VAR26.VAR31);
            VAR6->VAR26.VAR32 = FUN4(VAR10);
            VAR6->VAR26.VAR33 = FUN4(VAR10);
            VAR6->VAR34 = FUN4(VAR10);
            VAR6->VAR26.VAR35 = FUN4(VAR10);
            VAR6->VAR26.VAR36 = FUN4(VAR10);
            VAR6->VAR26.VAR37 = FUN5(VAR10);
            VAR6->VAR26.VAR38 = FUN5(VAR10);
            VAR6->VAR26.VAR27 = FUN5(VAR10);
            VAR6->VAR26.VAR39 = FUN5(VAR10);
            VAR6->VAR26.VAR40 = FUN5(VAR10);
            VAR6->VAR26.VAR41 = FUN5(VAR10);
            VAR2->VAR42 = VAR6->VAR26.VAR40;
        }
        else if (!FUN3(&VAR8, &VAR43))
        {
            enum AVMediaType VAR44;
            int VAR45, VAR46;
            uint64_t VAR47;
            unsigned int VAR48;
            int64_t VAR49, VAR50, VAR51;
            int VAR52, VAR53 = 0;
            if (VAR2->VAR54 == VAR55)
            {
                FUN10(VAR2, VAR56, "");
                return FUN11(VAR57);
            }
            VAR49 = FUN7(VAR10);
            VAR12 = FUN12(VAR2, 0);
            if (!VAR12)
                return FUN11(VAR58);
            FUN13(VAR12, 32, 1, 1000);
            VAR14 = FUN14(sizeof(VAR13));
            if (!VAR14)
                return FUN11(VAR58);
            VAR12->VAR7 = VAR14;
            VAR51 = VAR6->VAR26.VAR37;
            VAR14->VAR59 = 128;
            if (!(VAR6->VAR26.VAR27 & 0x01))
            {
                VAR12->VAR60 = VAR6->VAR26.VAR35 / (10000000 / 1000) - VAR51;
            }
            FUN2(VAR10, &VAR8);
            VAR52 = 0;
            if (!FUN3(&VAR8, &VAR61))
            {
                VAR44 = VAR62;
            }
            else if (!FUN3(&VAR8, &VAR63))
            {
                VAR44 = VAR64;
            }
            else if (!FUN3(&VAR8, &VAR65))
            {
                VAR44 = VAR66;
            }
            else if (!FUN3(&VAR8, &VAR67))
            {
                VAR52 = 1;
                VAR44 = VAR68;
            }
            else
            {
                return -1;
            }
            FUN2(VAR10, &VAR8);
            VAR47 = FUN4(VAR10);
            VAR45 = FUN5(VAR10);
            FUN5(VAR10);
            VAR12->VAR69 = FUN15(VAR10) & 0x7f;
            VAR6->VAR21[VAR12->VAR69] = VAR2->VAR54 - 1;
            FUN5(VAR10);
            if (VAR52)
            {
                FUN2(VAR10, &VAR8);
                if (!FUN3(&VAR8, &VAR70))
                {
                    VAR44 = VAR62;
                    VAR53 = 1;
                    FUN2(VAR10, &VAR8);
                    FUN5(VAR10);
                    FUN5(VAR10);
                    FUN5(VAR10);
                    FUN2(VAR10, &VAR8);
                    FUN5(VAR10);
                }
            }
            VAR12->VAR71->VAR72 = VAR44;
            if (VAR44 == VAR62)
            {
                FUN16(VAR10, VAR12->VAR71, VAR45);
                if (VAR53)
                {
                    VAR12->VAR71->VAR73 = VAR74;
                    VAR12->VAR71->VAR75 = 0;
                }
                if (VAR12->VAR71->VAR73 == VAR76)
                {
                    VAR12->VAR77 = VAR78;
                }
                else
                {
                    VAR12->VAR77 = VAR79;
                }
                VAR50 = FUN7(VAR10);
                if (VAR17 >= (VAR50 + 8 - VAR49 + 24))
                {
                    VAR14->VAR80 = FUN6(VAR10);
                    VAR14->VAR81 = FUN15(VAR10);
                    VAR14->VAR82 = FUN15(VAR10);
                    FUN15(VAR10);
                    FUN6(VAR10);
                }
                if (VAR14->VAR80 > 1)
                {
                    if (!VAR14->VAR82 || (VAR14->VAR81 / VAR14->VAR82 <= 1) || VAR14->VAR81 % VAR14->VAR82)
                        VAR14->VAR80 = 0;
                }
                switch (VAR12->VAR71->VAR73)
                {
                case VAR83:
                    VAR12->VAR71->VAR84 = VAR85;
                    break;
                case VAR86:
                case VAR87:
                case VAR88:
                case VAR89:
                case VAR90:
                case VAR91:
                case VAR92:
                case VAR93:
                    VAR12->VAR71->VAR84 = 1;
                    break;
                default:
                    VAR12->VAR71->VAR84 = 1;
                    break;
                }
            }
            else if (VAR44 == VAR64)
            {
                FUN5(VAR10);
                FUN5(VAR10);
                FUN6(VAR10);
                VAR15 = FUN15(VAR10);
                VAR46 = FUN5(VAR10);
                VAR12->VAR71->VAR94 = FUN5(VAR10);
                VAR12->VAR71->VAR95 = FUN5(VAR10);
                FUN15(VAR10);
                VAR12->VAR71->VAR96 = FUN15(VAR10);
                VAR48 = FUN5(VAR10);
                FUN17(VAR10, 20);
                VAR15 = VAR46;
                if (VAR15 > 40)
                {
                    VAR12->VAR71->VAR97 = VAR15 - 40;
                    VAR12->VAR71->VAR98 = FUN14(VAR12->VAR71->VAR97 + VAR99);
                    FUN18(VAR10, VAR12->VAR71->VAR98, VAR12->VAR71->VAR97);
                }
                if (VAR12->VAR71->VAR97 && (VAR12->VAR71->VAR96 <= 8))
                {
                    VAR12->VAR71->VAR100 = FUN14(sizeof(VAR101));
                    for (VAR16 = 0; VAR16 < FUN19(VAR12->VAR71->VAR97, VAR102) / 4; VAR16++)
                        VAR12->VAR71->VAR100->VAR103[VAR16] = FUN20(((VAR104 *)VAR12->VAR71->VAR98)[VAR16]);
                    memcpy(VAR12->VAR71->VAR100->VAR103, VAR12->VAR71->VAR98, FUN19(VAR12->VAR71->VAR97, VAR102));
                    VAR12->VAR71->VAR100->VAR105 = 1;
                }
                VAR12->VAR71->VAR75 = VAR48;
                VAR12->VAR71->VAR73 = FUN21(VAR106, VAR48);
                if (VAR48 == FUN22('', '', '', ''))
                    VAR12->VAR77 = VAR79;
                if (VAR12->VAR71->VAR73 == VAR107)
                    VAR12->VAR77 = VAR108;
            }
            VAR50 = FUN7(VAR10);
            FUN17(VAR10, VAR17 - (VAR50 - VAR49 + 24));
        }
        else if (!FUN3(&VAR8, &VAR109))
        {
            int VAR110, VAR111, VAR112, VAR113, VAR114;
            VAR110 = FUN15(VAR10);
            VAR111 = FUN15(VAR10);
            VAR112 = FUN15(VAR10);
            VAR113 = FUN15(VAR10);
            VAR114 = FUN15(VAR10);
            FUN23(VAR2, "", 0, VAR110);
            FUN23(VAR2, "", 0, VAR111);
            FUN23(VAR2, "", 0, VAR112);
            FUN23(VAR2, "", 0, VAR113);
            FUN17(VAR10, VAR114);
        }
        else if (!FUN3(&VAR8, &VAR115))
        {
            int VAR116 = FUN15(VAR10);
            int VAR117;
            for (VAR117 = 0; VAR117 < VAR116; VAR117++)
            {
                int VAR27, VAR19, VAR118;
                VAR27 = FUN15(VAR10);
                VAR19 = FUN5(VAR10);
                VAR118 = (VAR27 & 0x7f);
                VAR6->VAR119[VAR118] = VAR19;
            }
        }
        else if (!FUN3(&VAR8, &VAR120))
        {
            int VAR117;
            int VAR116 = FUN15(VAR10);
            for (VAR117 = 0; VAR117 < VAR116; VAR117++)
            {
                char VAR121[6];
                unsigned int VAR122 = FUN6(VAR10);
                FUN24(VAR10, VAR122, VAR121, sizeof(VAR121));
                if (VAR117 < 128)
                    FUN25(VAR6->VAR123[VAR117], VAR121, sizeof(*VAR6->VAR123));
            }
        }
        else if (!FUN3(&VAR8, &VAR124))
        {
            int VAR125, VAR16;
            VAR125 = FUN15(VAR10);
            for (VAR16 = 0; VAR16 < VAR125; VAR16++)
            {
                int VAR126, VAR127, VAR128;
                char VAR129[1024];
                VAR126 = FUN15(VAR10);
                if (VAR126 % 2)
                    VAR126 += 1;
                FUN24(VAR10, VAR126, VAR129, sizeof(VAR129));
                VAR127 = FUN15(VAR10);
                VAR128 = FUN15(VAR10);
                if (!VAR127 && VAR128 % 2)
                    VAR128 += 1;
                FUN23(VAR2, VAR129, VAR127, VAR128);
            }
        }
        else if (!FUN3(&VAR8, &VAR130))
        {
            int VAR131, VAR132, VAR126, VAR128, VAR127, VAR133;
            VAR131 = FUN15(VAR10);
            for (VAR16 = 0; VAR16 < VAR131; VAR16++)
            {
                char VAR129[1024];
                FUN15(VAR10);
                VAR132 = FUN15(VAR10);
                VAR126 = FUN15(VAR10);
                VAR127 = FUN15(VAR10);
                VAR128 = FUN5(VAR10);
                FUN24(VAR10, VAR126, VAR129, sizeof(VAR129));
                VAR133 = FUN15(VAR10);
                FUN17(VAR10, VAR128 - 2);
                if (VAR132 < 128)
                {
                    if (!strcmp(VAR129, ""))
                        VAR18[VAR132].VAR134 = VAR133;
                    else if (!strcmp(VAR129, ""))
                        VAR18[VAR132].VAR135 = VAR133;
                }
            }
        }
        else if (!FUN3(&VAR8, &VAR136))
        {
            int VAR137, VAR138, VAR139;
            uint32_t VAR140, VAR141, VAR132;
            unsigned int VAR142;
            FUN4(VAR10);
            FUN4(VAR10);
            VAR141 = FUN5(VAR10);
            FUN5(VAR10);
            FUN5(VAR10);
            FUN5(VAR10);
            FUN5(VAR10);
            FUN5(VAR10);
            FUN5(VAR10);
            FUN5(VAR10);
            VAR132 = FUN15(VAR10);
            VAR142 = FUN15(VAR10);
            if (VAR132 < 128)
                VAR6->VAR143[VAR132].VAR59 = VAR142;
            FUN4(VAR10);
            VAR139 = FUN15(VAR10);
            VAR138 = FUN15(VAR10);
            if (VAR132 < 128)
                VAR19[VAR132] = VAR141;
            for (VAR16 = 0; VAR16 < VAR139; VAR16++)
            {
                FUN15(VAR10);
                VAR137 = FUN15(VAR10);
                FUN26(VAR10, VAR137, VAR144);
            }
            for (VAR16 = 0; VAR16 < VAR138; VAR16++)
            {
                FUN2(VAR10, &VAR8);
                VAR140 = FUN15(VAR10);
                VAR137 = FUN5(VAR10);
                FUN26(VAR10, VAR137, VAR144);
            }
            continue;
        }
        else if (!FUN3(&VAR8, &VAR145))
        {
            int VAR146, VAR147;
            FUN2(VAR10, &VAR8);
            VAR146 = FUN5(VAR10);
            VAR147 = FUN15(VAR10);
            continue;
        }
        else if (!FUN3(&VAR8, &VAR148))
        {
            int VAR16, VAR149, VAR126;
            char VAR129[1024];
            FUN4(VAR10);
            FUN4(VAR10);
            VAR149 = FUN5(VAR10);
            FUN15(VAR10);
            VAR126 = FUN15(VAR10);
            for (VAR16 = 0; VAR16 < VAR126; VAR16++)
            {
                FUN6(VAR10);
            }
            for (VAR16 = 0; VAR16 < VAR149; VAR16++)
            {
                int64_t VAR150;
                int VAR126;
                FUN4(VAR10);
                VAR150 = FUN4(VAR10);
                FUN15(VAR10);
                FUN5(VAR10);
                FUN5(VAR10);
                VAR126 = FUN5(VAR10);
                FUN24(VAR10, VAR126 * 2, VAR129, sizeof(VAR129));
                FUN27(VAR2, VAR16, (VAR151){1, 10000000}, VAR150, VAR152, VAR129);
            }
        }
        else if (!FUN3(&VAR8, &VAR153))
        {
            int VAR154, VAR146, VAR131, VAR134;
            char VAR155[256], *VAR156;
            char VAR157[16];
            FUN2(VAR10, &VAR8);
            FUN9(&VAR8);
            VAR131 = FUN5(VAR10);
            for (VAR16 = 0; VAR16 < VAR131; VAR16++)
            {
                VAR134 = FUN15(VAR10);
                FUN28(VAR10, VAR155, sizeof(VAR155));
                FUN28(VAR10, VAR155, sizeof(VAR155));
                VAR154 = FUN15(VAR10);
                VAR156 = VAR157;
                while (VAR154 > 0)
                {
                    VAR146 = FUN6(VAR10);
                    if ((VAR156 - VAR157) < sizeof(VAR157) - 1)
                        *VAR156++ = VAR146;
                    VAR154--;
                }
                *VAR156 = '';
            }
        }
        else if (FUN29(VAR10))
        {
            return -1;
        }
        else
        {
            if (!VAR2->VAR158)
            {
                if (!FUN3(&VAR8, &VAR159))
                {
                    FUN10(VAR2, VAR160, "");
                }
                else if (!FUN3(&VAR8, &VAR161))
                {
                    FUN10(VAR2, VAR160, "");
                }
                else if (!FUN3(&VAR8, &VAR162))
                {
                    FUN10(VAR2, VAR160, "");
                }
            }
        }
        if (FUN7(VAR10) != VAR22 + VAR17)
            FUN10(VAR2, VAR163, "" VAR164 "" VAR164 "", FUN7(VAR10) - VAR22, VAR17);
        FUN26(VAR10, VAR22 + VAR17, VAR165);
    }
    FUN2(VAR10, &VAR8);
    FUN4(VAR10);
    FUN6(VAR10);
    FUN6(VAR10);
    if (FUN29(VAR10))
        return -1;
    VAR6->VAR166 = FUN7(VAR10);
    VAR6->VAR167 = 0;
    for (VAR16 = 0; VAR16 < 128; VAR16++)
    {
        int VAR132 = VAR6->VAR21[VAR16];
        if (VAR132 >= 0)
        {
            VAR11 *VAR12 = VAR2->VAR143[VAR132];
            if (!VAR12->VAR71->VAR168)
                VAR12->VAR71->VAR168 = VAR19[VAR16];
            if (VAR18[VAR16].VAR134 > 0 && VAR18[VAR16].VAR135 > 0)
                FUN30(&VAR12->VAR169.VAR134, &VAR12->VAR169.VAR135, VAR18[VAR16].VAR134, VAR18[VAR16].VAR135, VAR170);
            if (VAR6->VAR143[VAR16].VAR59 < 128)
            {
                const char *VAR171 = VAR6->VAR123[VAR6->VAR143[VAR16].VAR59];
                if (VAR171 && strlen(VAR171) > 1)
                {
                    const char VAR172[3] = {VAR171[0], VAR171[1], ''};
                    const char *VAR173 = FUN31(VAR172, VAR174);
                    if (VAR173)
                        FUN32(&VAR12->VAR175, "", VAR173, 0);
                }
            }
        }
    }
    return 0;
}