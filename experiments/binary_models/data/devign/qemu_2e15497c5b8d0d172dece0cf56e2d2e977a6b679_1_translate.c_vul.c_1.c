static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint16_t VAR5, int *VAR6)
{
    int32_t VAR7;
    uint16_t VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    int16_t VAR13;
    uint32_t VAR14, VAR15, VAR16;
    uint32_t VAR17, VAR18, VAR19;
    VAR8 = FUN2(VAR4->VAR20 + 2);
    VAR4->VAR21 = (VAR4->VAR21 << 16) | VAR8;
    VAR9 = (VAR4->VAR21 >> 21) & 0x1f;
    VAR10 = (VAR4->VAR21 >> 16) & 0x1f;
    VAR11 = (VAR4->VAR21 >> 11) & 0x1f;
    VAR12 = (VAR4->VAR21 >> 6) & 0x1f;
    VAR13 = (VAR22)VAR4->VAR21;
    VAR14 = (VAR4->VAR21 >> 26) & 0x3f;
    switch (VAR14)
    {
    case VAR23:
        VAR15 = VAR4->VAR21 & 0x3f;
        switch (VAR15)
        {
        case 0x00:
            VAR15 = (VAR4->VAR21 >> 6) & 0xf;
            switch (VAR15)
            {
            case VAR24:
                VAR16 = VAR25;
                goto VAR26;
            case VAR27:
                VAR16 = VAR28;
                goto VAR26;
            case VAR29:
                VAR16 = VAR30;
                goto VAR26;
            case VAR31:
                VAR16 = VAR32;
            VAR26:
                FUN3(VAR2, VAR4, VAR16, VAR9, VAR10, VAR11);
                break;
            default:
                goto VAR33;
            }
            break;
        case 0x10:
            VAR15 = (VAR4->VAR21 >> 6) & 0xf;
            switch (VAR15)
            {
            case VAR34:
                VAR16 = VAR35;
                goto VAR36;
            case VAR37:
                VAR16 = VAR38;
                goto VAR36;
            case VAR39:
                VAR16 = VAR40;
                goto VAR36;
            case VAR41:
                VAR16 = VAR42;
                goto VAR36;
            case VAR43:
                VAR16 = VAR44;
            VAR36:
                FUN4(VAR2, VAR4, VAR16, VAR11, VAR10, VAR9);
                break;
            case VAR45:
                VAR16 = VAR46;
                goto VAR47;
            case VAR48:
                VAR16 = VAR49;
                goto VAR47;
            case VAR50:
                VAR16 = VAR51;
                goto VAR47;
            case VAR52:
                VAR16 = VAR53;
            VAR47:
                FUN5(VAR2, VAR4, VAR16, VAR11, VAR10, VAR9);
                break;
            case VAR54:
                VAR16 = VAR55;
                goto VAR56;
            case VAR57:
                VAR16 = VAR58;
                goto VAR56;
            case VAR59:
                VAR16 = VAR60;
                goto VAR56;
            case VAR61:
                VAR16 = VAR62;
            VAR56:
                FUN6(VAR2, VAR16, VAR11, VAR10, VAR9);
                break;
            case VAR63:
                VAR16 = VAR64;
                goto VAR65;
            case VAR66:
                VAR16 = VAR67;
            VAR65:
                FUN7(VAR2, VAR16, VAR11, VAR10, VAR9);
                break;
            default:
                goto VAR33;
            }
            break;
        case 0x18:
            VAR15 = (VAR4->VAR21 >> 6) & 0xf;
            switch (VAR15)
            {
            case VAR68:
                VAR16 = VAR69;
                goto VAR70;
            case VAR71:
                VAR16 = VAR72;
            VAR70:
                FUN8(VAR2, VAR16, VAR11, VAR10, VAR9);
                break;
            case VAR73:
                FUN9(VAR4, VAR10, VAR9, VAR11);
                break;
            default:
                goto VAR33;
            }
            break;
        case VAR74:
            FUN10(VAR4, VAR75, VAR9, VAR10, VAR12, VAR11);
            return;
        case VAR76:
            FUN10(VAR4, VAR77, VAR9, VAR10, VAR12, VAR11);
            return;
        case VAR78:
            FUN11(VAR2, VAR4, VAR9, VAR10, VAR6);
            break;
        case 0x07:
            FUN12(VAR4, VAR79);
            break;
        default:
        VAR33:
            FUN13("");
            FUN12(VAR4, VAR80);
            break;
        }
        break;
    case VAR81:
        VAR15 = (VAR4->VAR21 >> 12) & 0xf;
        switch (VAR15)
        {
        case VAR82:
            break;
        case VAR83:
        case VAR84:
            FUN14(VAR4, VAR85, 2);
            break;
        case VAR86:
        case VAR87:
        case VAR88:
        case VAR89:
            FUN15(VAR4, VAR15, VAR9, VAR10, FUN16(VAR4->VAR21, 0, 12));
            break;
        case VAR90:
        case VAR91:
        case VAR92:
        case VAR93:
            FUN17(VAR4, VAR15, VAR9, VAR10, FUN16(VAR4->VAR21, 0, 12));
            break;
        default:
            FUN13("");
            FUN12(VAR4, VAR80);
            break;
        }
        break;
    case VAR94:
        if (VAR2->VAR95 & (1 << VAR96))
        {
            VAR15 = VAR4->VAR21 & 0x3f;
            FUN18(VAR4);
            switch (VAR15)
            {
            case VAR97:
                VAR16 = VAR98;
                goto VAR99;
            case VAR100:
                VAR16 = VAR101;
                goto VAR99;
            case VAR102:
                VAR16 = VAR103;
                goto VAR99;
            case VAR104:
                VAR16 = VAR105;
                goto VAR99;
            case VAR106:
                VAR16 = VAR107;
                goto VAR99;
            case VAR108:
                VAR16 = VAR109;
                goto VAR99;
            case VAR110:
                VAR16 = VAR111;
                goto VAR99;
            case VAR112:
                VAR16 = VAR113;
                goto VAR99;
            case VAR114:
                VAR16 = VAR115;
                goto VAR99;
            case VAR116:
                VAR16 = VAR117;
                goto VAR99;
            case VAR118:
                VAR16 = VAR119;
                goto VAR99;
            case VAR120:
                VAR16 = VAR121;
                goto VAR99;
            case VAR122:
                VAR16 = VAR123;
            VAR99:
                FUN19(VAR4, VAR16, VAR11, VAR12, VAR10, VAR9);
                break;
            case VAR124:
                VAR17 = (VAR4->VAR21 >> 6) & 0xf;
                VAR19 = (VAR4->VAR21 >> 13) & 0x7;
                VAR18 = (VAR4->VAR21 >> 10) & 0x3;
                switch (VAR18)
                {
                case 0x0:
                    FUN20(VAR4, VAR17, VAR9, VAR10, VAR19);
                    break;
                case 0x1:
                    FUN21(VAR4, VAR17, VAR9, VAR10, VAR19);
                    break;
                case 0x2:
                    FUN22(VAR4, VAR17, VAR9, VAR10, VAR19);
                    break;
                default:
                    goto VAR125;
                }
                break;
            case VAR126:
                VAR17 = (VAR4->VAR21 >> 6) & 0xf;
                VAR19 = (VAR4->VAR21 >> 13) & 0x7;
                VAR18 = (VAR4->VAR21 >> 10) & 0x3;
                switch (VAR18)
                {
                case 0x0:
                    FUN23(VAR4, VAR17, VAR9, VAR10, VAR19);
                    break;
                case 0x1:
                    FUN24(VAR4, VAR17, VAR9, VAR10, VAR19);
                    break;
                case 0x2:
                    FUN25(VAR4, VAR17, VAR9, VAR10, VAR19);
                    break;
                default:
                    goto VAR125;
                }
                break;
            case VAR127:
                FUN26(VAR2, VAR4, VAR9, VAR10);
                break;
            case 0x00:
                switch ((VAR4->VAR21 >> 6) & 0x7)
                {
                case VAR128:
                    VAR16 = VAR129;
                    goto VAR130;
                case VAR131:
                    VAR16 = VAR132;
                    goto VAR130;
                case VAR133:
                    VAR16 = VAR134;
                    goto VAR130;
                case VAR135:
                    VAR16 = VAR136;
                    goto VAR130;
                case VAR137:
                    VAR16 = VAR138;
                VAR130:
                    FUN27(VAR4, VAR16, VAR9, VAR10, VAR11, 0);
                    break;
                default:
                    goto VAR125;
                }
                break;
            case 0x08:
                switch ((VAR4->VAR21 >> 6) & 0x7)
                {
                case VAR139:
                    VAR16 = VAR140;
                    goto VAR141;
                case VAR142:
                    VAR16 = VAR143;
                    goto VAR141;
                case VAR144:
                    VAR16 = VAR145;
                    goto VAR141;
                case VAR146:
                    VAR16 = VAR147;
                    goto VAR141;
                case VAR148:
                    VAR16 = VAR149;
                    goto VAR141;
                case VAR150:
                    VAR16 = VAR151;
                VAR141:
                    FUN28(VAR4, VAR16, VAR11, VAR11, VAR9, VAR10);
                    break;
                default:
                    goto VAR125;
                }
                break;
            case 0x18:
                VAR18 = (VAR4->VAR21 >> 9) & 0x3;
                switch ((VAR4->VAR21 >> 6) & 0x7)
                {
                case VAR152:
                    switch (VAR18)
                    {
                    case VAR153:
                        VAR16 = VAR154;
                        goto VAR155;
                    case VAR156:
                        VAR16 = VAR157;
                        goto VAR155;
                    case VAR158:
                        VAR16 = VAR159;
                        goto VAR155;
                    default:
                        goto VAR125;
                    }
                    break;
                case VAR160:
                    switch (VAR18)
                    {
                    case VAR153:
                        VAR16 = VAR161;
                        goto VAR155;
                    case VAR156:
                        VAR16 = VAR162;
                        goto VAR155;
                    case VAR158:
                        VAR16 = VAR163;
                        goto VAR155;
                    default:
                        goto VAR125;
                    }
                    break;
                case VAR164:
                    VAR16 = VAR165;
                    goto VAR155;
                case VAR166:
                    VAR16 = VAR167;
                VAR155:
                    FUN27(VAR4, VAR16, VAR9, VAR10, VAR11, 0);
                    break;
                default:
                    goto VAR125;
                }
                break;
            case 0x20:
                VAR19 = (VAR4->VAR21 >> 13) & 0x7;
                VAR18 = (VAR4->VAR21 >> 9) & 0x3;
                switch ((VAR4->VAR21 >> 6) & 0x7)
                {
                case VAR168:
                    switch (VAR18)
                    {
                    case VAR153:
                        FUN29(VAR10, VAR9, VAR19, 0);
                        break;
                    case VAR156:
                        FUN30(VAR4, VAR10, VAR9, VAR19, 0);
                        break;
                    case VAR158:
                        FUN31(VAR10, VAR9, VAR19, 0);
                        break;
                    default:
                        goto VAR125;
                    }
                    break;
                case VAR169:
                    switch (VAR18)
                    {
                    case VAR153:
                        FUN29(VAR10, VAR9, VAR19, 1);
                        break;
                    case VAR156:
                        FUN30(VAR4, VAR10, VAR9, VAR19, 1);
                        break;
                    case VAR158:
                        FUN31(VAR10, VAR9, VAR19, 1);
                        break;
                    default:
                        goto VAR125;
                    }
                    break;
                case VAR170:
                    break;
                default:
                    goto VAR125;
                }
                break;
                switch ((VAR4->VAR21 >> 8) & 0x3)
                {
                case VAR153:
                    VAR16 = VAR171##VAR172##VAR173;
                    goto VAR174;
                case VAR156:
                    VAR16 = VAR171##VAR172##VAR175;
                    goto VAR174;
                case VAR158:
                    VAR16 = VAR171##VAR172##VAR176;
                    goto VAR174;
                default:
                    goto VAR125;
                }
            case 0x30:
                switch ((VAR4->VAR21 >> 6) & 0x3)
                {
                case VAR177:
                    FUN32(VAR34);
                    break;
                case VAR178:
                    FUN32(VAR39);
                    break;
                case VAR179:
                    FUN32(VAR43);
                    break;
                case VAR180:
                    VAR18 = (VAR4->VAR21 >> 8) & 0x3;
                    if (VAR18 == 1)
                    {
                        VAR16 = VAR181;
                    }
                    else if (VAR18 == 0)
                    {
                        VAR16 = VAR182;
                    }
                    else
                    {
                        goto VAR125;
                    }
                    goto VAR174;
                default:
                    goto VAR125;
                }
                break;
            case 0x38:
                switch ((VAR4->VAR21 >> 6) & 0x3)
                {
                case VAR183:
                    FUN32(VAR68);
                    break;
                case VAR184:
                    FUN32(VAR71);
                    break;
                default:
                    goto VAR125;
                }
                break;
            VAR174:
                FUN27(VAR4, VAR16, VAR9, VAR10, VAR11, 0);
                break;
            default:
            VAR125:
                FUN13("");
                FUN12(VAR4, VAR80);
                break;
            }
        }
        else
        {
            FUN14(VAR4, VAR85, 1);
        }
        break;
    case VAR185:
        VAR15 = (VAR4->VAR21 >> 21) & 0x1f;
        switch (VAR15)
        {
        case VAR186:
            VAR16 = VAR187;
            goto VAR188;
        case VAR189:
            VAR16 = VAR190;
            goto VAR188;
        case VAR191:
            VAR16 = VAR192;
            goto VAR188;
        case VAR193:
            VAR16 = VAR194;
            goto VAR188;
        case VAR195:
            VAR16 = VAR196;
            goto VAR188;
        case VAR197:
            VAR16 = VAR198;
            goto VAR188;
        case VAR199:
            VAR16 = VAR200;
            goto VAR188;
        case VAR201:
            VAR16 = VAR202;
        VAR188:
            FUN33(VAR4, VAR16, 4, VAR10, -1, VAR13 << 1);
            *VAR6 = 1;
            break;
        case VAR203:
            VAR16 = VAR204;
            goto VAR205;
        case VAR206:
            VAR16 = VAR207;
            goto VAR205;
        case VAR208:
            VAR16 = VAR209;
            goto VAR205;
        case VAR210:
            VAR16 = VAR211;
            goto VAR205;
        case VAR212:
            VAR16 = VAR213;
            goto VAR205;
        case VAR214:
            VAR16 = VAR215;
        VAR205:
            FUN34(VAR4, VAR16, VAR10, -1, VAR13);
            break;
        case VAR216:
        case VAR217:
            FUN33(VAR4, VAR15 == VAR216 ? VAR218 : VAR219, 4, VAR10, 0, VAR13 << 1);
            break;
        case VAR220:
            FUN35(VAR2, VAR221, VAR10, -1, VAR13);
            break;
        case VAR222:
            break;
        case VAR223:
        case VAR224:
            FUN14(VAR4, VAR85, 2);
            break;
        case VAR225:
            VAR16 = (VAR4->VAR21 & (1 << 16)) ? VAR226 : VAR227;
            goto VAR228;
        case VAR229:
            VAR16 = (VAR4->VAR21 & (1 << 16)) ? VAR230 : VAR231;
            goto VAR228;
        case VAR232:
            VAR16 = VAR233;
            goto VAR234;
        case VAR235:
            VAR16 = VAR236;
        VAR234:
            FUN36(VAR4);
            FUN37(VAR2, VAR4, VAR237);
        VAR228:
            FUN38(VAR2, VAR4, VAR16, (VAR4->VAR21 >> 18) & 0x7, VAR13 << 1);
            *VAR6 = 1;
            break;
        case VAR238:
        case VAR239:
        default:
            FUN13("");
            FUN12(VAR4, VAR80);
            break;
        }
        break;
    case VAR240:
        VAR15 = (VAR4->VAR21 >> 12) & 0xf;
        switch (VAR15)
        {
        case VAR241:
            VAR16 = VAR242;
            goto VAR243;
        case VAR244:
            VAR16 = VAR245;
            goto VAR246;
        case VAR247:
            VAR16 = VAR248;
            goto VAR243;
        case VAR249:
            VAR16 = VAR250;
            goto VAR246;
        case VAR251:
            VAR16 = VAR252;
            goto VAR243;
        case VAR253:
            VAR16 = VAR254;
            goto VAR246;
        case VAR255:
            VAR16 = VAR256;
            goto VAR243;
        case VAR257:
            VAR16 = VAR258;
            goto VAR246;
        case VAR259:
            VAR16 = VAR260;
            goto VAR243;
        case VAR261:
            VAR16 = VAR262;
            goto VAR243;
        case VAR263:
            VAR16 = VAR264;
            goto VAR243;
        VAR243:
            FUN39(VAR2, VAR4, VAR16, VAR9, VAR10, FUN16(VAR4->VAR21, 0, 12));
            break;
        VAR246:
            FUN40(VAR4, VAR16, VAR9, VAR10, FUN16(VAR4->VAR21, 0, 12));
            break;
        case VAR265:
            FUN41(VAR4, VAR266, VAR9, VAR10, FUN16(VAR4->VAR21, 0, 12));
            break;
        case VAR267:
            FUN41(VAR4, VAR268, VAR9, VAR10, FUN16(VAR4->VAR21, 0, 12));
            break;
        case VAR269:
            break;
        default:
            FUN13("");
            FUN12(VAR4, VAR80);
            break;
        }
        break;
    case VAR270:
        VAR16 = VAR271;
        goto VAR272;
    case VAR273:
        VAR16 = VAR274;
    VAR272:
        FUN42(VAR2, VAR4, VAR16, VAR9, VAR10, VAR13);
        break;
    case VAR275:
        VAR16 = VAR276;
        goto VAR277;
    case VAR278:
        VAR16 = VAR279;
        goto VAR277;
    case VAR280:
        VAR16 = VAR281;
    VAR277:
        FUN35(VAR2, VAR16, VAR9, VAR10, VAR13);
        break;
    case VAR282:
        VAR16 = VAR283;
        goto VAR284;
    case VAR285:
        VAR16 = VAR286;
    VAR284:
        FUN43(VAR2, VAR16, VAR9, VAR10, VAR13);
        break;
    case VAR287:
        VAR7 = (VAR288)(VAR4->VAR21 & 0x3FFFFFF) << 2;
        FUN33(VAR4, VAR289, 4, VAR9, VAR10, VAR7);
        *VAR6 = 1;
        break;
    case VAR290:
        VAR7 = (VAR288)(VAR4->VAR21 & 0x3FFFFFF) << 1;
        FUN33(VAR4, VAR291, 4, VAR9, VAR10, VAR7);
        *VAR6 = 1;
        break;
    case VAR292:
        FUN33(VAR4, VAR219, 4, VAR9, VAR10, VAR13 << 1);
        *VAR6 = 1;
        break;
    case VAR293:
        FUN33(VAR4, VAR218, 4, VAR9, VAR10, VAR13 << 1);
        *VAR6 = 1;
        break;
    case VAR294:
        FUN33(VAR4, VAR295, 4, VAR9, VAR10, (VAR288)(VAR4->VAR21 & 0x3FFFFFF) << 1);
        *VAR6 = 1;
        break;
    case VAR296:
        FUN33(VAR4, VAR297, 4, VAR9, VAR10, (VAR288)(VAR4->VAR21 & 0x3FFFFFF) << 1);
        *VAR6 = 1;
        break;
    case VAR298:
        VAR16 = VAR299;
        goto VAR300;
    case VAR301:
        VAR16 = VAR302;
        goto VAR300;
    case VAR303:
        VAR16 = VAR304;
        goto VAR300;
    case VAR305:
        VAR16 = VAR306;
    VAR300:
        FUN44(VAR2, VAR4, VAR16, VAR9, VAR10, VAR13);
        break;
    case VAR307:
    {
        int VAR308 = FUN45(FUN46(VAR4->VAR21, 23, 3));
        int VAR7 = FUN16(VAR4->VAR21, 0, 23) << 2;
        FUN47(VAR4, VAR308, VAR7, 0, 0);
    }
    break;
    case VAR309:
        VAR16 = VAR310;
        goto VAR311;
    case VAR312:
        VAR16 = VAR313;
        goto VAR311;
    case VAR314:
        VAR16 = VAR315;
        goto VAR311;
    case VAR316:
        VAR16 = VAR317;
        goto VAR311;
    case VAR318:
        VAR16 = VAR319;
        goto VAR311;
    case VAR320:
        VAR16 = VAR321;
        goto VAR311;
    case VAR322:
        VAR16 = VAR323;
        goto VAR324;
    case VAR325:
        VAR16 = VAR326;
        goto VAR324;
    case VAR327:
        VAR16 = VAR328;
        goto VAR324;
    case VAR329:
        VAR16 = VAR330;
        goto VAR324;
    VAR311:
        FUN39(VAR2, VAR4, VAR16, VAR9, VAR10, VAR13);
        break;
    VAR324:
        FUN40(VAR4, VAR16, VAR9, VAR10, VAR13);
        break;
    default:
        FUN12(VAR4, VAR80);
        break;
    }