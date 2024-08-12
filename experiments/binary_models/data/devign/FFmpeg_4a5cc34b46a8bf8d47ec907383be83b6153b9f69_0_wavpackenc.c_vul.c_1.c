static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15 = 0;
    int VAR16, VAR17, VAR18 = 0, VAR19 = 0, VAR20 = VAR2->VAR21;
    uint32_t VAR22 = 0xffffffffu;
    struct VAR23 *VAR24;
    PutByteContext VAR25;
    if (!(VAR2->VAR26 & VAR27) && VAR2->VAR28)
    {
        int32_t VAR29 = 0, VAR30 = 0;
        for (VAR16 = 0; VAR16 < VAR20; VAR16++)
        {
            VAR29 |= VAR4[VAR16] | VAR5[VAR16];
            VAR30 |= VAR4[VAR16] - VAR5[VAR16];
            if (VAR29 && VAR30)
                break;
        }
        if (VAR16 == VAR20 && VAR29 && !VAR30)
        {
            VAR2->VAR26 &= ~(VAR31 | VAR32);
            VAR2->VAR26 |= VAR33;
            if (!VAR2->VAR34)
            {
                VAR2->VAR34 = 1;
                VAR2->VAR35 = 0;
                FUN2(VAR2->VAR36);
            }
        }
        else if (VAR2->VAR34)
        {
            VAR2->VAR34 = 0;
            VAR2->VAR35 = 0;
            FUN2(VAR2->VAR36);
        }
    }
    if (VAR2->VAR26 & VAR37)
    {
        int VAR38 = (VAR2->VAR26 & VAR37) >> VAR39;
        int VAR40 = (VAR2->VAR26 & VAR41) >> VAR42;
        if (VAR2->VAR26 & VAR43)
            FUN3(VAR4, VAR20, VAR38);
        else
            FUN4(VAR4, VAR5, VAR20, VAR38);
        if ((VAR40 -= VAR38) < 0)
            VAR2->VAR26 &= ~VAR41;
        else
            VAR2->VAR26 -= (1 << VAR42) * VAR38;
    }
    if ((VAR2->VAR26 & VAR44) || (VAR2->VAR26 & VAR41) >> VAR42 >= 24)
    {
        FUN5(&VAR2->VAR45, &VAR2->VAR46, sizeof(VAR3) * VAR20);
        memcpy(VAR2->VAR45, VAR4, sizeof(VAR3) * VAR20);
        if (!(VAR2->VAR26 & VAR43))
        {
            FUN5(&VAR2->VAR47, &VAR2->VAR48, sizeof(VAR3) * VAR20);
            memcpy(VAR2->VAR47, VAR5, sizeof(VAR3) * VAR20);
        }
        if (VAR2->VAR26 & VAR44)
            VAR19 = FUN6(VAR2, VAR4, VAR5, VAR20);
        else
            VAR19 = FUN7(VAR2, VAR4, VAR5, VAR20);
        VAR2->VAR35 = 0;
    }
    else
    {
        FUN8(VAR2, VAR4, VAR5, VAR20);
        if (VAR2->VAR38 != VAR2->VAR49 + VAR2->VAR50 + VAR2->VAR51)
        {
            VAR2->VAR38 = VAR2->VAR49 + VAR2->VAR50 + VAR2->VAR51;
            VAR2->VAR35 = 0;
        }
    }
    if (!VAR2->VAR52 && !VAR2->VAR35)
    {
        VAR2->VAR52 = 1;
        if (VAR2->VAR26 & VAR43)
            VAR18 = FUN9(VAR2, VAR4, 1, 0);
        else
            VAR18 = FUN10(VAR2, VAR4, VAR5, 1, 0);
        VAR2->VAR52 = 0;
    }
    if (VAR2->VAR26 & VAR43)
    {
        for (VAR16 = 0; VAR16 < VAR20; VAR16++)
            VAR22 += (VAR22 << 1) + VAR4[VAR16];
        if (VAR2->VAR52)
            VAR18 = FUN9(VAR2, VAR4, !VAR2->VAR35, 1);
    }
    else
    {
        for (VAR16 = 0; VAR16 < VAR20; VAR16++)
            VAR22 += (VAR22 << 3) + (VAR4[VAR16] << 1) + VAR4[VAR16] + VAR5[VAR16];
        if (VAR2->VAR52)
            VAR18 = FUN10(VAR2, VAR4, VAR5, !VAR2->VAR35, 1);
    }
    if (VAR18 < 0)
        return VAR18;
    if (!VAR2->VAR53)
        VAR2->VAR26 |= VAR54;
    VAR2->VAR53 += 1 + !(VAR2->VAR26 & VAR27);
    if (VAR2->VAR53 == VAR2->VAR55->VAR56)
        VAR2->VAR26 |= VAR57;
    FUN11(&VAR25, VAR7, VAR8);
    FUN12(&VAR25, FUN13('', '', '', ''));
    FUN12(&VAR25, 0);
    FUN14(&VAR25, 0x410);
    FUN14(&VAR25, 0);
    FUN12(&VAR25, 0);
    FUN12(&VAR25, VAR2->VAR58);
    FUN12(&VAR25, VAR20);
    FUN12(&VAR25, VAR2->VAR26);
    FUN12(&VAR25, VAR22);
    if (VAR2->VAR26 & VAR54 && VAR2->VAR55->VAR59 != VAR60 && VAR2->VAR55->VAR59 != VAR61)
    {
        FUN15(&VAR25, VAR62, 5);
        FUN16(&VAR25, VAR2->VAR55->VAR56);
        FUN12(&VAR25, VAR2->VAR55->VAR59);
        FUN16(&VAR25, 0);
    }
    if ((VAR2->VAR26 & VAR63) == VAR63)
    {
        FUN15(&VAR25, VAR64, 3);
        FUN17(&VAR25, VAR2->VAR55->VAR65);
        FUN16(&VAR25, 0);
    }
    FUN15(&VAR25, VAR66, VAR2->VAR35);
    for (VAR16 = 0; VAR16 < VAR2->VAR35; VAR16++)
    {
        struct VAR23 *VAR24 = &VAR2->VAR67[VAR16];
        FUN16(&VAR25, ((VAR24->VAR68 + 5) & 0x1f) | ((VAR24->VAR69 << 5) & 0xe0));
    }
    if (VAR2->VAR35 & 1)
        FUN16(&VAR25, 0);
    VAR14 = FUN18(VAR70);
    FUN16(&VAR25, VAR14);
    VAR70 = FUN19(VAR14);
}
while (0)
    FUN16(&VAR25, VAR71);
FUN16(&VAR25, 0);
VAR10 = FUN20(&VAR25);
for (VAR16 = VAR2->VAR35 - 1; VAR16 >= 0; --VAR16)
{
    struct VAR23 *VAR24 = &VAR2->VAR67[VAR16];
    if (FUN18(VAR24->VAR72) || (!(VAR2->VAR26 & VAR43) && FUN18(VAR24->VAR73)))
        break;
}
VAR13 = VAR16 + 1;
for (VAR16 = 0; VAR16 < VAR2->VAR35; VAR16++)
{
    struct VAR23 *VAR24 = &VAR2->VAR67[VAR16];
    if (VAR16 < VAR13)
    {
        FUN21(VAR24->VAR72);
        if (!(VAR2->VAR26 & VAR43))
            FUN21(VAR24->VAR73);
    }
    else
    {
        VAR24->VAR72 = VAR24->VAR73 = 0;
    }
}
VAR11 = FUN20(&VAR25);
VAR7[VAR10 - 2] = VAR71 | (((VAR11 - VAR10) & 1) ? VAR74 : 0);
VAR7[VAR10 - 1] = (VAR11 - VAR10 + 1) >> 1;
if ((VAR11 - VAR10) & 1)
    FUN16(&VAR25, 0);
VAR14 = FUN22(VAR70);
VAR70 = FUN23(VAR14);
FUN14(&VAR25, VAR14);
}
while (0)
    FUN16(&VAR25, VAR75);
FUN16(&VAR25, 0);
VAR10 = FUN20(&VAR25);
for (VAR16 = 0; VAR16 < VAR2->VAR35; VAR16++)
{
    struct VAR23 *VAR24 = &VAR2->VAR67[VAR16];
    if (VAR16 == 0)
    {
        if (VAR24->VAR68 > VAR76)
        {
            FUN24(VAR24->VAR77[0]);
            FUN24(VAR24->VAR77[1]);
            if (!(VAR2->VAR26 & VAR43))
            {
                FUN24(VAR24->VAR78[0]);
                FUN24(VAR24->VAR78[1]);
            }
        }
        else if (VAR24->VAR68 < 0)
        {
            FUN24(VAR24->VAR77[0]);
            FUN24(VAR24->VAR78[0]);
        }
        else
        {
            for (VAR17 = 0; VAR17 < VAR24->VAR68; VAR17++)
            {
                FUN24(VAR24->VAR77[VAR17]);
                if (!(VAR2->VAR26 & VAR43))
                    FUN24(VAR24->VAR78[VAR17]);
            }
        }
    }
    else
    {
        FUN2(VAR24->VAR77);
        FUN2(VAR24->VAR78);
    }
}
VAR11 = FUN20(&VAR25);
VAR7[VAR10 - 1] = (VAR11 - VAR10) >> 1;
for (VAR16 = 0; VAR16 < 3; VAR16++)
{
    VAR14 = FUN25(VAR2->VAR36.VAR79[VAR80].VAR81[VAR16]);
    FUN14(&VAR25, VAR14);
    VAR2->VAR36.VAR79[VAR80].VAR81[VAR16] = FUN23(VAR14);
}
}
while (0)
    FUN15(&VAR25, VAR82, 6 * (1 + (!(VAR2->VAR26 & VAR43))));
FUN26(0);
if (!(VAR2->VAR26 & VAR43))
    FUN26(1);
if (VAR2->VAR26 & VAR44)
{
    FUN15(&VAR25, VAR83, 4);
    FUN16(&VAR25, VAR2->VAR84);
    FUN16(&VAR25, VAR2->VAR85);
    FUN16(&VAR25, VAR2->VAR86);
    FUN16(&VAR25, 127);
}
if (VAR2->VAR26 & VAR87)
{
    FUN15(&VAR25, VAR88, 4);
    FUN16(&VAR25, VAR2->VAR89);
    FUN16(&VAR25, VAR2->VAR49);
    FUN16(&VAR25, VAR2->VAR50);
    FUN16(&VAR25, VAR2->VAR51);
}
if (VAR2->VAR26 & VAR43 && !VAR2->VAR52)
{
    for (VAR16 = 0; VAR16 < VAR20; VAR16++)
    {
        int32_t VAR90 = VAR4[VAR16];
        for (VAR13 = VAR2->VAR35, VAR24 = VAR2->VAR67; VAR13--; VAR24++)
        {
            int32_t VAR91;
            if (VAR24->VAR68 > VAR76)
            {
                if (VAR24->VAR68 & 1)
                    VAR91 = 2 * VAR24->VAR77[0] - VAR24->VAR77[1];
                else
                    VAR91 = (3 * VAR24->VAR77[0] - VAR24->VAR77[1]) >> 1;
                VAR24->VAR77[1] = VAR24->VAR77[0];
                VAR24->VAR77[0] = VAR90;
            }
            else
            {
                VAR91 = VAR24->VAR77[VAR15];
                VAR24->VAR77[(VAR15 + VAR24->VAR68) & (VAR76 - 1)] = VAR90;
            }
            VAR90 -= FUN27(VAR24->VAR72, VAR91);
            FUN28(VAR24->VAR72, VAR24->VAR69, VAR91, VAR90);
        }
        VAR15 = (VAR15 + 1) & (VAR76 - 1);
        VAR4[VAR16] = VAR90;
    }
    if (VAR15)
    {
        for (VAR13 = VAR2->VAR35, VAR24 = VAR2->VAR67; VAR13--; VAR24++)
            if (VAR24->VAR68 > 0 && VAR24->VAR68 <= VAR76)
            {
                int32_t VAR92[VAR76], VAR93[VAR76];
                int VAR94;
                memcpy(VAR92, VAR24->VAR77, sizeof(VAR24->VAR77));
                memcpy(VAR93, VAR24->VAR78, sizeof(VAR24->VAR78));
                for (VAR94 = 0; VAR94 < VAR76; VAR94++)
                {
                    VAR24->VAR77[VAR94] = VAR92[VAR15];
                    VAR24->VAR78[VAR94] = VAR93[VAR15];
                    VAR15 = (VAR15 + 1) & (VAR76 - 1);
                }
            }
    }
}
else if (!VAR2->VAR52)
{
    if (VAR2->VAR26 & VAR31)
    {
        for (VAR16 = 0; VAR16 < VAR20; VAR16++)
            VAR5[VAR16] += ((VAR4[VAR16] -= VAR5[VAR16]) >> 1);
    }
    for (VAR16 = 0; VAR16 < VAR2->VAR35; VAR16++)
    {
        struct VAR23 *VAR24 = &VAR2->VAR67[VAR16];
        if (((VAR2->VAR26 & VAR41) >> VAR42) >= 16 || VAR24->VAR69 != 2)
            FUN29(VAR24, VAR4, VAR5, VAR20);
        else
            FUN30(VAR24, VAR4, VAR5, VAR20);
    }
}
FUN16(&VAR25, VAR95 | VAR96);
FUN31(&VAR2->VAR25, VAR25.VAR97 + 3, FUN32(&VAR25));
if (VAR2->VAR26 & VAR43)
{
    for (VAR16 = 0; VAR16 < VAR20; VAR16++)
        FUN33(VAR2, &VAR2->VAR36.VAR79[0], VAR2->VAR98[0][VAR16]);
}
else
{
    for (VAR16 = 0; VAR16 < VAR20; VAR16++)
    {
        FUN33(VAR2, &VAR2->VAR36.VAR79[0], VAR2->VAR98[0][VAR16]);
        FUN33(VAR2, &VAR2->VAR36.VAR79[1], VAR2->VAR98[1][VAR16]);
    }
}
FUN34(VAR2);
FUN35(&VAR2->VAR25);
VAR12 = FUN36(&VAR2->VAR25) >> 3;
FUN17(&VAR25, (VAR12 + 1) >> 1);
FUN37(&VAR25, VAR12);
if (VAR12 & 1)
    FUN16(&VAR25, 0);
if (VAR19)
{
    FUN16(&VAR25, VAR99 | VAR96);
    FUN31(&VAR2->VAR25, VAR25.VAR97 + 7, FUN32(&VAR25));
    if (VAR2->VAR26 & VAR44)
        FUN38(VAR2, VAR2->VAR45, VAR2->VAR47, VAR20);
    else
        FUN39(VAR2, VAR2->VAR45, VAR2->VAR47, VAR20);
    FUN35(&VAR2->VAR25);
    VAR12 = FUN36(&VAR2->VAR25) >> 3;
    FUN17(&VAR25, (VAR12 + 5) >> 1);
    FUN12(&VAR25, VAR2->VAR100);
    FUN37(&VAR25, VAR12);
    if (VAR12 & 1)
        FUN16(&VAR25, 0);
}
VAR9 = FUN20(&VAR25);
FUN40(VAR7 + 4, VAR9 - 8);
return VAR9;