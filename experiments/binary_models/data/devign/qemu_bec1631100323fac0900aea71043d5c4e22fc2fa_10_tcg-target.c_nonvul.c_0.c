static inline void FUN1(VAR1 *VAR2, TCGOpcode VAR3, const VAR4 *VAR5, const int *VAR6)
{
    S390Opcode VAR7;
    TCGArg VAR8, VAR9, VAR10;
    switch (VAR3)
    {
    case VAR11:
        FUN2(VAR2, VAR12, VAR13, VAR5[0]);
        FUN3(VAR2, VAR14, VAR15);
        break;
    case VAR16:
        if (VAR2->VAR17)
        {
            FUN4(VAR2, VAR18 | (VAR14 << 4));
            VAR2->VAR17[VAR5[0]] = FUN5(VAR2);
            VAR2->VAR19 += 2;
        }
        else
        {
            FUN6(VAR2, VAR12, VAR20, VAR2->VAR21 + VAR5[0]);
            FUN7(VAR2, VAR22, VAR23, VAR14, VAR20);
        }
        VAR2->VAR24[VAR5[0]] = FUN5(VAR2);
        break;
        FUN8(VAR25) : FUN9(VAR2, 0, VAR26, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        break;
        FUN8(VAR28) : FUN9(VAR2, 0, VAR29, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        break;
        FUN8(VAR30) : FUN9(VAR2, 0, VAR31, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        break;
    case VAR32:
        FUN9(VAR2, VAR33, VAR34, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        break;
    case VAR35:
        FUN10(VAR2, VAR36, VAR5[0], VAR5[1], VAR5[2]);
        break;
        FUN8(VAR37) : FUN9(VAR2, VAR38, VAR39, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        break;
        FUN8(VAR40) : FUN9(VAR2, VAR41, VAR42, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        break;
    case VAR43:
        FUN11(VAR2, VAR36, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR44:
        VAR8 = VAR5[0], VAR9 = VAR5[1], VAR10 = (VAR45)VAR5[2];
        if (VAR6[2])
        {
        VAR46:
            if (VAR8 == VAR9)
            {
                if (VAR10 == (VAR47)VAR10)
                {
                    FUN7(VAR2, VAR48, VAR49, VAR8, VAR10);
                    break;
                }
                if (VAR50 & VAR51)
                {
                    FUN7(VAR2, VAR52, VAR53, VAR8, VAR10);
                    break;
                }
            }
            FUN9(VAR2, VAR54, VAR55, VAR8, VAR9, VAR27, VAR10);
        }
        else if (VAR8 == VAR9)
        {
            FUN7(VAR2, VAR22, VAR56, VAR8, VAR10);
        }
        else
        {
            FUN7(VAR2, VAR57, VAR58, VAR8, VAR9, VAR10, 0);
        }
        break;
    case VAR59:
        VAR8 = VAR5[0], VAR9 = VAR5[1], VAR10 = (VAR45)VAR5[2];
        if (VAR6[2])
        {
            VAR10 = -VAR10;
            goto VAR46;
        }
        FUN7(VAR2, VAR22, VAR60, VAR5[0], VAR5[2]);
        break;
    case VAR61:
        if (VAR6[2])
        {
            FUN12(VAR2, VAR36, VAR5[0], VAR5[2]);
        }
        else
        {
            FUN7(VAR2, VAR22, VAR62, VAR5[0], VAR5[2]);
        }
        break;
    case VAR63:
        if (VAR6[2])
        {
            FUN13(VAR2, VAR5[0], VAR5[2] & 0xffffffff);
        }
        else
        {
            FUN7(VAR2, VAR22, VAR64, VAR5[0], VAR5[2]);
        }
        break;
    case VAR65:
        if (VAR6[2])
        {
            FUN14(VAR2, VAR5[0], VAR5[2] & 0xffffffff);
        }
        else
        {
            FUN7(VAR2, VAR22, VAR66, VAR5[0], VAR5[2]);
        }
        break;
    case VAR67:
        FUN7(VAR2, VAR22, VAR68, VAR5[0], VAR5[1]);
        break;
    case VAR69:
        if (VAR6[2])
        {
            if ((VAR45)VAR5[2] == (VAR47)VAR5[2])
            {
                FUN7(VAR2, VAR48, VAR70, VAR5[0], VAR5[2]);
            }
            else
            {
                FUN7(VAR2, VAR52, VAR71, VAR5[0], VAR5[2]);
            }
        }
        else
        {
            FUN7(VAR2, VAR72, VAR73, VAR5[0], VAR5[2]);
        }
        break;
    case VAR74:
        FUN7(VAR2, VAR22, VAR75, VAR13, VAR5[4]);
        break;
    case VAR76:
        FUN7(VAR2, VAR72, VAR77, VAR13, VAR5[4]);
        break;
    case VAR78:
        VAR7 = VAR79;
    VAR80:
        if (VAR6[2])
        {
            FUN15(VAR2, VAR7, VAR5[0], VAR27, VAR5[2]);
        }
        else
        {
            FUN15(VAR2, VAR7, VAR5[0], VAR5[2], 0);
        }
        break;
    case VAR81:
        VAR7 = VAR82;
        goto VAR80;
    case VAR83:
        VAR7 = VAR84;
        goto VAR80;
    case VAR85:
        if (VAR6[2])
        {
            FUN16(VAR2, VAR86, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        }
        else
        {
            FUN16(VAR2, VAR86, VAR5[0], VAR5[1], VAR5[2], 0);
        }
        break;
    case VAR87:
        if (VAR6[2])
        {
            FUN16(VAR2, VAR86, VAR5[0], VAR5[1], VAR27, (32 - VAR5[2]) & 31);
        }
        else
        {
            FUN7(VAR2, VAR22, VAR68, VAR20, VAR5[2]);
            FUN16(VAR2, VAR86, VAR5[0], VAR5[1], VAR20, 0);
        }
        break;
    case VAR88:
        FUN17(VAR2, VAR36, VAR5[0], VAR5[1]);
        break;
    case VAR89:
        FUN18(VAR2, VAR36, VAR5[0], VAR5[1]);
        break;
    case VAR90:
        FUN19(VAR2, VAR36, VAR5[0], VAR5[1]);
        break;
    case VAR91:
        FUN20(VAR2, VAR36, VAR5[0], VAR5[1]);
        break;
        FUN8(VAR92) : FUN7(VAR2, VAR72, VAR93, VAR5[0], VAR5[1]);
        FUN15(VAR2, VAR82, VAR5[0], VAR27, 16);
        break;
        FUN8(VAR94) : FUN7(VAR2, VAR72, VAR93, VAR5[0], VAR5[1]);
        break;
    case VAR95:
        if (VAR6[4])
        {
            FUN7(VAR2, VAR52, VAR96, VAR5[0], VAR5[4]);
        }
        else
        {
            FUN7(VAR2, VAR22, VAR97, VAR5[0], VAR5[4]);
        }
        FUN7(VAR2, VAR72, VAR98, VAR5[1], VAR5[5]);
        break;
    case VAR99:
        if (VAR6[4])
        {
            FUN7(VAR2, VAR52, VAR100, VAR5[0], VAR5[4]);
        }
        else
        {
            FUN7(VAR2, VAR22, VAR101, VAR5[0], VAR5[4]);
        }
        FUN7(VAR2, VAR72, VAR102, VAR5[1], VAR5[5]);
        break;
    case VAR103:
        FUN21(VAR2, VAR14, FUN22(VAR5[0]));
        break;
    case VAR104:
        FUN23(VAR2, VAR36, VAR5[2], VAR5[0], VAR5[1], VAR6[1], FUN22(VAR5[3]));
        break;
    case VAR105:
        FUN24(VAR2, VAR36, VAR5[3], VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR106:
        FUN25(VAR2, VAR36, VAR5[5], VAR5[0], VAR5[1], VAR5[2], VAR6[2], VAR5[3]);
        break;
    case VAR107:
    case VAR108:
        FUN26(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR5[3]);
        break;
    case VAR109:
    case VAR110:
        FUN27(VAR2, VAR5[0], VAR5[1], VAR5[2], VAR5[3]);
        break;
    case VAR111:
        FUN9(VAR2, 0, VAR112, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        break;
    case VAR113:
        FUN9(VAR2, 0, VAR114, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        break;
    case VAR115:
        FUN9(VAR2, 0, VAR116, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        break;
    case VAR117:
        FUN10(VAR2, VAR118, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR119:
        FUN11(VAR2, VAR36, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR120:
        FUN11(VAR2, VAR118, VAR5[0], VAR5[1], VAR5[2]);
        break;
    case VAR121:
        VAR8 = VAR5[0], VAR9 = VAR5[1], VAR10 = VAR5[2];
        if (VAR6[2])
        {
        VAR122:
            if (VAR8 == VAR9)
            {
                if (VAR10 == (VAR47)VAR10)
                {
                    FUN7(VAR2, VAR48, VAR123, VAR8, VAR10);
                    break;
                }
                if (VAR50 & VAR51)
                {
                    if (VAR10 == (VAR45)VAR10)
                    {
                        FUN7(VAR2, VAR52, VAR124, VAR8, VAR10);
                        break;
                    }
                    else if (VAR10 == (VAR125)VAR10)
                    {
                        FUN7(VAR2, VAR52, VAR126, VAR8, VAR10);
                        break;
                    }
                    else if (-VAR10 == (VAR125)-VAR10)
                    {
                        FUN7(VAR2, VAR52, VAR127, VAR8, -VAR10);
                        break;
                    }
                }
            }
            FUN9(VAR2, VAR54, VAR55, VAR8, VAR9, VAR27, VAR10);
        }
        else if (VAR8 == VAR9)
        {
            FUN7(VAR2, VAR72, VAR128, VAR8, VAR10);
        }
        else
        {
            FUN7(VAR2, VAR57, VAR58, VAR8, VAR9, VAR10, 0);
        }
        break;
    case VAR129:
        VAR8 = VAR5[0], VAR9 = VAR5[1], VAR10 = VAR5[2];
        if (VAR6[2])
        {
            VAR10 = -VAR10;
            goto VAR122;
        }
        else
        {
            FUN7(VAR2, VAR72, VAR130, VAR5[0], VAR5[2]);
        }
        break;
    case VAR131:
        if (VAR6[2])
        {
            FUN12(VAR2, VAR118, VAR5[0], VAR5[2]);
        }
        else
        {
            FUN7(VAR2, VAR72, VAR132, VAR5[0], VAR5[2]);
        }
        break;
    case VAR133:
        if (VAR6[2])
        {
            FUN13(VAR2, VAR5[0], VAR5[2]);
        }
        else
        {
            FUN7(VAR2, VAR72, VAR134, VAR5[0], VAR5[2]);
        }
        break;
    case VAR135:
        if (VAR6[2])
        {
            FUN14(VAR2, VAR5[0], VAR5[2]);
        }
        else
        {
            FUN7(VAR2, VAR72, VAR136, VAR5[0], VAR5[2]);
        }
        break;
    case VAR137:
        FUN7(VAR2, VAR72, VAR138, VAR5[0], VAR5[1]);
        break;
    case VAR139:
        FUN7(VAR2, VAR72, VAR140, VAR5[0], VAR5[1]);
        break;
    case VAR141:
        if (VAR6[2])
        {
            if (VAR5[2] == (VAR47)VAR5[2])
            {
                FUN7(VAR2, VAR48, VAR142, VAR5[0], VAR5[2]);
            }
            else
            {
                FUN7(VAR2, VAR52, VAR143, VAR5[0], VAR5[2]);
            }
        }
        else
        {
            FUN7(VAR2, VAR72, VAR144, VAR5[0], VAR5[2]);
        }
        break;
    case VAR145:
        FUN7(VAR2, VAR72, VAR146, VAR13, VAR5[4]);
        break;
    case VAR147:
        FUN7(VAR2, VAR72, VAR148, VAR13, VAR5[4]);
        break;
    case VAR149:
        FUN7(VAR2, VAR72, VAR150, VAR13, VAR5[3]);
        break;
    case VAR151:
        VAR7 = VAR152;
    VAR153:
        if (VAR6[2])
        {
            FUN16(VAR2, VAR7, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        }
        else
        {
            FUN16(VAR2, VAR7, VAR5[0], VAR5[1], VAR5[2], 0);
        }
        break;
    case VAR154:
        VAR7 = VAR155;
        goto VAR153;
    case VAR156:
        VAR7 = VAR157;
        goto VAR153;
    case VAR158:
        if (VAR6[2])
        {
            FUN16(VAR2, VAR159, VAR5[0], VAR5[1], VAR27, VAR5[2]);
        }
        else
        {
            FUN16(VAR2, VAR159, VAR5[0], VAR5[1], VAR5[2], 0);
        }
        break;
    case VAR160:
        if (VAR6[2])
        {
            FUN16(VAR2, VAR159, VAR5[0], VAR5[1], VAR27, (64 - VAR5[2]) & 63);
        }
        else
        {
            FUN7(VAR2, VAR22, VAR68, VAR20, VAR5[2]);
            FUN16(VAR2, VAR159, VAR5[0], VAR5[1], VAR20, 0);
        }
        break;
    case VAR161:
        FUN17(VAR2, VAR118, VAR5[0], VAR5[1]);
        break;
    case VAR162:
        FUN18(VAR2, VAR118, VAR5[0], VAR5[1]);
        break;
    case VAR163:
        FUN28(VAR2, VAR5[0], VAR5[1]);
        break;
    case VAR164:
        FUN19(VAR2, VAR118, VAR5[0], VAR5[1]);
        break;
    case VAR165:
        FUN20(VAR2, VAR118, VAR5[0], VAR5[1]);
        break;
    case VAR166:
        FUN29(VAR2, VAR5[0], VAR5[1]);
        break;
    case VAR167:
        if (VAR6[4])
        {
            if ((VAR168)VAR5[4] >= 0)
            {
                FUN7(VAR2, VAR52, VAR126, VAR5[0], VAR5[4]);
            }
            else
            {
                FUN7(VAR2, VAR52, VAR127, VAR5[0], -VAR5[4]);
            }
        }
        else
        {
            FUN7(VAR2, VAR72, VAR169, VAR5[0], VAR5[4]);
        }
        FUN7(VAR2, VAR72, VAR170, VAR5[1], VAR5[5]);
        break;
    case VAR171:
        if (VAR6[4])
        {
            if ((VAR168)VAR5[4] >= 0)
            {
                FUN7(VAR2, VAR52, VAR127, VAR5[0], VAR5[4]);
            }
            else
            {
                FUN7(VAR2, VAR52, VAR126, VAR5[0], -VAR5[4]);
            }
        }
        else
        {
            FUN7(VAR2, VAR72, VAR172, VAR5[0], VAR5[4]);
        }
        FUN7(VAR2, VAR72, VAR173, VAR5[1], VAR5[5]);
        break;
    case VAR174:
        FUN23(VAR2, VAR118, VAR5[2], VAR5[0], VAR5[1], VAR6[1], FUN22(VAR5[3]));
        break;
    case VAR175:
        FUN24(VAR2, VAR118, VAR5[3], VAR5[0], VAR5[1], VAR5[2], VAR6[2]);
        break;
    case VAR176:
        FUN25(VAR2, VAR118, VAR5[5], VAR5[0], VAR5[1], VAR5[2], VAR6[2], VAR5[3]);
        break;
        FUN8(VAR177) : FUN30(VAR2, VAR5[0], VAR5[2], VAR5[3], VAR5[4]);
        break;
    case VAR178:
    case VAR179:
    case VAR180:
    case VAR181:
    case VAR182:
    default:
        FUN31();
    }
}