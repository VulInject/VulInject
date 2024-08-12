static void FUN1(VAR1 *VAR2)
{
    if (!FUN2(VAR2, VAR3))
    {
        FUN3("", (VAR3), VAR4, VAR5);
        goto VAR6;
    }
}
while (0)
    (((VAR7 & 0x20000) ? 0xfffc0000 : 0) | VAR7) uint8_t VAR8 = FUN4(VAR2->VAR9);
uint8_t VAR10 = FUN4(VAR2->VAR9 + 1);
uint8_t VAR11 = FUN4(VAR2->VAR9 + 2);
static const uint32_t VAR12[] = {0xffffffff, 1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 16, 32, 64, 128, 256};
static const uint32_t VAR13[] = {32768, 65536, 2, 3, 4, 5, 6, 7, 8, 10, 12, 16, 32, 64, 128, 256};
if (VAR14 >= 8)
{
    VAR2->VAR15 = VAR2->VAR9 + 2;
    FUN5(VAR16);
}
else
{
    VAR2->VAR15 = VAR2->VAR9 + 3;
}
switch (VAR14)
{
case 0:
    switch (VAR17)
    {
    case 0:
        switch (VAR18)
        {
        case 0:
            if ((VAR19 & 0xc) == 0x8)
            {
                FUN5(VAR20);
            }
            switch (VAR19)
            {
            case 0:
                switch (VAR21)
                {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    switch (VAR22)
                    {
                    case 0:
                    case 2:
                        FUN6(VAR2, VAR23[VAR24]);
                        break;
                    case 1:
                        FUN5(VAR25);
                        break;
                    case 3:
                        break;
                    }
                    break;
                case 3:
                    switch (VAR22)
                    {
                    case 0:
                    {
                        TCGv_i32 VAR26 = FUN7();
                        FUN8(VAR26, VAR23[VAR24]);
                        FUN9(VAR23[0], VAR2->VAR15);
                        FUN6(VAR2, VAR26);
                        FUN10(VAR26);
                    }
                    break;
                    case 1:
                    case 2:
                    case 3:
                        FUN5(VAR25);
                        break;
                    }
                    break;
                }
                break;
            case 1:
                FUN5(VAR25);
                break;
            case 2:
                break;
            case 3:
                break;
            }
            break;
        case 1:
            FUN11(VAR23[VAR19], VAR23[VAR27], VAR23[VAR28]);
            break;
        case 2:
            FUN12(VAR23[VAR19], VAR23[VAR27], VAR23[VAR28]);
            break;
        case 3:
            FUN13(VAR23[VAR19], VAR23[VAR27], VAR23[VAR28]);
            break;
        case 4:
            switch (VAR19)
            {
            case 0:
                FUN14(VAR2, VAR23[VAR27]);
                break;
            case 1:
                FUN15(VAR2, VAR23[VAR27]);
                break;
            case 2:
            {
                TCGv_i32 VAR26 = FUN7();
                FUN16(VAR26, VAR23[VAR27], 3);
                FUN14(VAR2, VAR26);
                FUN10(VAR26);
            }
            break;
            case 3:
            {
                TCGv_i32 VAR26 = FUN7();
                FUN16(VAR26, VAR23[VAR27], 3);
                FUN15(VAR2, VAR26);
                FUN10(VAR26);
            }
            break;
            case 4:
            {
                TCGv_i32 VAR26 = FUN17(VAR27 | ((VAR28 & 1) << 4));
                FUN14(VAR2, VAR26);
                FUN10(VAR26);
            }
            break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                FUN5(VAR25);
                break;
            case 14:
                FUN5(VAR29);
                FUN18(VAR23[VAR28], VAR23[VAR27]);
                break;
            case 15:
                FUN5(VAR29);
                FUN19(VAR23[VAR28], VAR23[VAR27]);
                break;
            default:
                break;
            }
            break;
        case 5:
            break;
        case 6:
            switch (VAR27)
            {
            case 0:
                FUN20(VAR23[VAR19], VAR23[VAR28]);
                break;
            case 1:
            {
                int VAR30 = FUN21();
                FUN8(VAR23[VAR19], VAR23[VAR28]);
                FUN22(VAR31, VAR23[VAR19], 0, VAR30);
                FUN20(VAR23[VAR19], VAR23[VAR28]);
                FUN23(VAR30);
            }
            break;
            default:
                break;
            }
            break;
        case 7:
            break;
        case 8:
            FUN24(VAR23[VAR19], VAR23[VAR27], VAR23[VAR28]);
            break;
        case 9:
        case 10:
        case 11:
        {
            TCGv_i32 VAR26 = FUN7();
            FUN16(VAR26, VAR23[VAR27], VAR18 - 8);
            FUN24(VAR23[VAR19], VAR26, VAR23[VAR28]);
            FUN10(VAR26);
        }
        break;
        case 12:
            FUN25(VAR23[VAR19], VAR23[VAR27], VAR23[VAR28]);
            break;
        case 13:
        case 14:
        case 15:
        {
            TCGv_i32 VAR26 = FUN7();
            FUN16(VAR26, VAR23[VAR27], VAR18 - 12);
            FUN25(VAR23[VAR19], VAR26, VAR23[VAR28]);
            FUN10(VAR26);
        }
        break;
        }
        break;
    case 1:
        switch (VAR18)
        {
        case 0:
        case 1:
            FUN16(VAR23[VAR19], VAR23[VAR27], 32 - (VAR28 | ((VAR18 & 1) << 4)));
            break;
        case 2:
        case 3:
            FUN26(VAR23[VAR19], VAR23[VAR28], VAR27 | ((VAR18 & 1) << 4));
            break;
        case 4:
            FUN27(VAR23[VAR19], VAR23[VAR28], VAR27);
            break;
        case 6:
        {
            TCGv_i32 VAR26 = FUN7();
            FUN8(VAR26, VAR23[VAR28]);
            FUN28(VAR2, VAR23[VAR28], VAR32);
            FUN29(VAR2, VAR32, VAR26);
            FUN10(VAR26);
        }
        break;
            TCGv_i64 VAR26 = FUN30();
            FUN31(VAR26, VAR33);
            VAR34##VAR35##FUN32(VAR36, VAR36, VAR26);
            FUN33(VAR23[VAR19], VAR36);
            FUN34(VAR36);
            FUN34(VAR26);
        }
        while (0)
        case 8:
        {
            TCGv_i64 VAR36 = FUN30();
            FUN35(VAR36, VAR23[VAR28], VAR23[VAR27]);
            FUN36(VAR37);
        }
        break;
        case 9:
            if (VAR2->VAR38)
            {
                FUN37(VAR23[VAR19], VAR23[VAR28], VAR39[VAR40]);
            }
            else
            {
                TCGv_i64 VAR36 = FUN30();
                FUN31(VAR36, VAR23[VAR28]);
                FUN36(VAR37);
            }
        break;
    case 10:
        if (VAR2->VAR41)
        {
            FUN38(VAR23[VAR19], VAR23[VAR27], VAR2->VAR42);
        }
        else
        {
            TCGv_i64 VAR36 = FUN30();
            TCGv_i32 VAR43 = FUN17(32);
            FUN25(VAR43, VAR43, VAR39[VAR40]);
            FUN39(VAR43, VAR43, 0x3f);
            FUN31(VAR36, VAR23[VAR27]);
            FUN40(VAR44, VAR43);
            FUN10(VAR43);
        }
        break;
    case 11:
        if (VAR2->VAR38)
        {
            FUN41(VAR23[VAR19], VAR23[VAR28], VAR39[VAR40]);
        }
        else
        {
            TCGv_i64 VAR36 = FUN30();
            FUN42(VAR36, VAR23[VAR28]);
            FUN36(VAR45);
        }
        break;
    case 12:
        FUN5(VAR46);
        {
            TCGv_i32 VAR47 = FUN7();
            TCGv_i32 VAR48 = FUN7();
            FUN43(VAR47, VAR23[VAR27]);
            FUN43(VAR48, VAR23[VAR28]);
            FUN44(VAR23[VAR19], VAR47, VAR48);
            FUN10(VAR48);
            FUN10(VAR47);
        }
        break;
    case 13:
        FUN5(VAR46);
        {
            TCGv_i32 VAR47 = FUN7();
            TCGv_i32 VAR48 = FUN7();
            FUN45(VAR47, VAR23[VAR27]);
            FUN45(VAR48, VAR23[VAR28]);
            FUN44(VAR23[VAR19], VAR47, VAR48);
            FUN10(VAR48);
            FUN10(VAR47);
        }
        break;
    default:
        break;
    }
    break;
case 2:
    break;
case 3:
    switch (VAR18)
    {
    case 0:
        FUN28(VAR2, VAR23[VAR28], VAR32);
        break;
    case 1:
        FUN29(VAR2, VAR32, VAR23[VAR28]);
        break;
    case 2:
        FUN5(VAR29);
        {
            int VAR49 = 24 - VAR28;
            if (VAR49 == 24)
            {
                FUN46(VAR23[VAR19], VAR23[VAR27]);
            }
            else if (VAR49 == 16)
            {
                FUN45(VAR23[VAR19], VAR23[VAR27]);
            }
            else
            {
                TCGv_i32 VAR26 = FUN7();
                FUN16(VAR26, VAR23[VAR27], VAR49);
                FUN26(VAR23[VAR19], VAR26, VAR49);
                FUN10(VAR26);
            }
        }
        break;
    case 3:
        FUN5(VAR29);
        {
            TCGv_i32 VAR50 = FUN7();
            TCGv_i32 VAR51 = FUN7();
            int VAR30 = FUN21();
            FUN26(VAR50, VAR23[VAR27], 24 - VAR28);
            FUN13(VAR51, VAR50, VAR23[VAR27]);
            FUN39(VAR51, VAR51, 0xffffffff << (VAR28 + 7));
            FUN8(VAR23[VAR19], VAR23[VAR27]);
            FUN22(VAR52, VAR51, 0, VAR30);
            FUN26(VAR50, VAR23[VAR27], 31);
            FUN47(VAR23[VAR19], VAR50, 0xffffffff >> (25 - VAR28));
            FUN23(VAR30);
            FUN10(VAR50);
            FUN10(VAR51);
        }
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        FUN5(VAR29);
        {
            static const TCGCond VAR53[] = {VAR54, VAR31, VAR55, VAR56};
            int VAR30 = FUN21();
            if (VAR19 != VAR28)
            {
                FUN8(VAR23[VAR19], VAR23[VAR27]);
                FUN48(VAR53[VAR18 - 4], VAR23[VAR27], VAR23[VAR28], VAR30);
                FUN8(VAR23[VAR19], VAR23[VAR28]);
            }
            else
            {
                FUN48(VAR53[VAR18 - 4], VAR23[VAR28], VAR23[VAR27], VAR30);
                FUN8(VAR23[VAR19], VAR23[VAR27]);
            }
            FUN23(VAR30);
        }
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    {
        static const TCGCond VAR53[] = {VAR57, VAR52, VAR31, VAR58};
        int VAR30 = FUN21();
        FUN22(VAR53[VAR18 - 8], VAR23[VAR28], 0, VAR30);
        FUN8(VAR23[VAR19], VAR23[VAR27]);
        FUN23(VAR30);
    }
    break;
    case 12:
        FUN5(VAR20);
        break;
    case 13:
        FUN5(VAR20);
        break;
    case 14:
    {
        int VAR59 = (VAR27 << 4) + VAR28;
        if (VAR60[VAR59])
        {
            FUN8(VAR23[VAR19], VAR61[VAR59]);
        }
        else
        {
            FUN3("", VAR59);
        }
    }
    break;
    case 15:
    {
        if (VAR60[VAR32])
        {
            FUN8(VAR61[VAR32], VAR23[VAR28]);
        }
        else
        {
            FUN3("", VAR32);
        }
    }
    break;
    }
    break;
case 4:
case 5:
{
    int VAR62 = VAR27 | (VAR17 << 4);
    int VAR63 = (1 << (VAR18 + 1)) - 1;
    TCGv_i32 VAR26 = FUN7();
    FUN27(VAR26, VAR23[VAR28], VAR62);
    FUN39(VAR23[VAR19], VAR26, VAR63);
    FUN10(VAR26);
}
break;
case 6:
    break;
case 7:
    break;
case 8:
    FUN5(VAR64);
    break;
case 9:
    break;
case 10:
    FUN5(VAR65);
    break;
case 11:
    FUN5(VAR65);
    break;
default:
    break;
}
break;
case 1:
{
    TCGv_i32 VAR26 = FUN17((0xfffc0000 | (VAR66 << 2)) + ((VAR2->VAR9 + 3) & ~3));
    FUN49(VAR23[VAR28], VAR26, 0);
    FUN10(VAR26);
}
break;
case 2:
TCGv_i32 VAR67 = FUN7();
FUN50(VAR67, VAR23[VAR68], VAR69 << VAR49);
VAR70##FUN51(VAR23[VAR71], VAR67, 0);
FUN10(VAR67);
}
while (0)
    switch (VAR72)
    {
    case 0:
        FUN52(VAR73, 0);
        break;
    case 1:
        FUN52(VAR74, 1);
        break;
    case 2:
        FUN52(VAR75, 2);
        break;
    case 4:
        FUN52(VAR76, 0);
        break;
    case 5:
        FUN52(VAR77, 1);
        break;
    case 6:
        FUN52(VAR78, 2);
        break;
    case 7:
        break;
    case 9:
        FUN52(VAR79, 1);
        break;
    case 10:
        FUN9(VAR23[VAR71], VAR69 | (VAR68 << 8) | ((VAR68 & 0x8) ? 0xfffff000 : 0));
        break;
    case 11:
        FUN5(VAR80);
        FUN52(VAR75, 2);
        break;
    case 12:
        FUN50(VAR23[VAR71], VAR23[VAR68], VAR81);
        break;
    case 13:
        FUN50(VAR23[VAR71], VAR23[VAR68], VAR81 << 8);
        break;
    case 14:
        FUN5(VAR80);
        {
            int VAR30 = FUN21();
            TCGv_i32 VAR26 = FUN53();
            TCGv_i32 VAR67 = FUN53();
            FUN8(VAR26, VAR23[VAR71]);
            FUN50(VAR67, VAR23[VAR68], VAR69 << 2);
            FUN49(VAR23[VAR71], VAR67, 0);
            FUN48(VAR57, VAR23[VAR71], VAR39[VAR82], VAR30);
            FUN54(VAR26, VAR67, 0);
            FUN23(VAR30);
            FUN10(VAR67);
            FUN10(VAR26);
        }
        break;
    case 15:
        FUN5(VAR80);
        FUN52(VAR78, 2);
        break;
    default:
        break;
    }
break;
case 3:
FUN5(VAR64);
break;
case 4:
FUN5(VAR83);
break;
case 5:
switch (VAR84)
{
case 0:
    FUN9(VAR23[0], VAR2->VAR15);
    FUN55(VAR2, (VAR2->VAR9 & ~3) + (VAR85 << 2) + 4, 0);
    break;
case 1:
case 2:
case 3:
    FUN5(VAR25);
    break;
}
break;
case 6:
switch (VAR84)
{
case 0:
    FUN55(VAR2, VAR2->VAR9 + 4 + VAR85, 0);
    break;
case 1:
{
    static const TCGCond VAR53[] = {
        VAR52,
        VAR57,
        VAR58,
        VAR31,
    };
    FUN56(VAR2, VAR53[VAR86 & 3], VAR23[VAR87], 0, 4 + VAR88);
}
break;
case 2:
{
    static const TCGCond VAR53[] = {
        VAR52,
        VAR57,
        VAR58,
        VAR31,
    };
    FUN56(VAR2, VAR53[VAR89 & 3], VAR23[VAR90], VAR12[VAR91], 4 + VAR92);
}
break;
case 3:
    switch (VAR89)
    {
    case 0:
        FUN5(VAR25);
        break;
    case 1:
        switch (VAR91)
        {
        case 0:
            FUN5(VAR20);
            break;
        case 1:
            FUN5(VAR20);
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        default:
            break;
        }
        break;
    case 2:
    case 3:
        FUN56(VAR2, VAR89 == 2 ? VAR93 : VAR56, VAR23[VAR90], VAR13[VAR91], 4 + VAR92);
        break;
    }
    break;
}
break;
case 7:
{
    TCGCond VAR94 = (VAR72 & 8) ? VAR57 : VAR52;
    switch (VAR72 & 7)
    {
    case 0:
    {
        TCGv_i32 VAR26 = FUN7();
        FUN11(VAR26, VAR23[VAR68], VAR23[VAR71]);
        FUN56(VAR2, VAR94, VAR26, 0, 4 + VAR81);
        FUN10(VAR26);
    }
    break;
    case 1:
    case 2:
    case 3:
    {
        static const TCGCond VAR53[] = {
            [1] = VAR52,
            [2] = VAR58,
            [3] = VAR93,
            [9] = VAR57,
            [10] = VAR31,
            [11] = VAR56,
        };
        FUN57(VAR2, VAR53[VAR72], VAR23[VAR68], VAR23[VAR71], 4 + VAR81);
    }
    break;
    case 4:
    {
        TCGv_i32 VAR26 = FUN7();
        FUN11(VAR26, VAR23[VAR68], VAR23[VAR71]);
        FUN57(VAR2, VAR94, VAR26, VAR23[VAR71], 4 + VAR81);
        FUN10(VAR26);
    }
    break;
    case 5:
    {
        TCGv_i32 VAR95 = FUN17(1);
        TCGv_i32 VAR26 = FUN7();
        FUN39(VAR26, VAR23[VAR71], 0x1f);
        FUN38(VAR95, VAR95, VAR26);
        FUN11(VAR26, VAR23[VAR68], VAR95);
        FUN56(VAR2, VAR94, VAR26, 0, 4 + VAR81);
        FUN10(VAR26);
        FUN10(VAR95);
    }
    break;
    case 6:
    case 7:
    {
        TCGv_i32 VAR26 = FUN7();
        FUN39(VAR26, VAR23[VAR68], 1 << (((VAR72 & 1) << 4) | VAR71));
        FUN56(VAR2, VAR94, VAR26, 0, 4 + VAR81);
        FUN10(VAR26);
    }
    break;
    }
}
break;
TCGv_i32 VAR67 = FUN7();
FUN50(VAR67, VAR23[VAR96], VAR97 << 2);
VAR70##FUN51(VAR23[VAR98], VAR67, 0);
FUN10(VAR67);
}
while (0)
case 8:
    FUN58(VAR75);
break;
case 9:
FUN58(VAR78);
break;
case 10:
FUN24(VAR23[VAR97], VAR23[VAR96], VAR23[VAR98]);
break;
case 11:
FUN50(VAR23[VAR97], VAR23[VAR96], VAR98 ? VAR98 : -1);
break;
case 12:
if (VAR98 < 8)
{
    FUN9(VAR23[VAR96], VAR97 | (VAR98 << 4) | ((VAR98 & 6) == 6 ? 0xffffff80 : 0));
}
else
{
    TCGCond VAR94 = (VAR98 & 4) ? VAR57 : VAR52;
    FUN56(VAR2, VAR94, VAR23[VAR96], 0, 4 + (VAR97 | ((VAR98 & 3) << 4)));
}
break;
case 13:
switch (VAR97)
{
case 0:
    FUN8(VAR23[VAR98], VAR23[VAR96]);
    break;
case 15:
    switch (VAR98)
    {
    case 0:
        FUN6(VAR2, VAR23[0]);
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 6:
        break;
    default:
        break;
    }
    break;
default:
    break;
}
break;
default:
break;
}
VAR2->VAR9 = VAR2->VAR15;
return;
VAR6 : FUN3("", VAR2->VAR9);
VAR2->VAR9 = VAR2->VAR15;
}