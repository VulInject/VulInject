static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10, VAR11 = 0, VAR12, VAR13;
    VAR14 *VAR15 = VAR2->VAR16;
    VAR17 *VAR18 = &VAR15->VAR18;
    VAR19 *VAR20 = VAR3;
    VAR7 *VAR21 = NULL;
    const VAR7 *VAR22 = VAR8;
    int VAR23, VAR24;
    struct
    {
        VAR7 *VAR8;
        GetBitContext VAR25;
        int VAR26;
    } *VAR27 = NULL, *VAR28;
    if (VAR9 == 0 || (VAR9 == 4 && FUN2(VAR8) == VAR29))
    {
        if (VAR18->VAR30 == 0 && VAR18->VAR31)
        {
            if ((VAR13 = FUN3(VAR20, VAR18->VAR31->VAR32)) < 0)
                return VAR13;
            VAR18->VAR31 = NULL;
            *VAR4 = 1;
            return 0;
            if (VAR2->VAR33 == VAR34 || VAR2->VAR33 == VAR35)
            {
                int VAR36 = 0;
                VAR21 = FUN4(VAR9 + VAR37);
                if (FUN5(FUN2(VAR8)))
                {
                    const VAR7 *VAR38, *VAR39, *VAR40;
                    int VAR10;
                    VAR40 = VAR8;
                    for (VAR38 = VAR8, VAR39 = VAR8 + VAR9; VAR40 < VAR39; VAR38 = VAR40)
                    {
                        VAR40 = FUN6(VAR38 + 4, VAR39);
                        VAR10 = VAR40 - VAR38 - 4;
                        if (VAR10 <= 0)
                            continue;
                        switch (FUN2(VAR38))
                        {
                        case VAR41:
                            if (VAR2->VAR42)
                                VAR22 = VAR38;
                            VAR36 = FUN7(VAR38 + 4, VAR10, VAR21);
                            break;
                        case VAR43:
                        {
                            int VAR44;
                            VAR28 = FUN8(VAR27, sizeof(*VAR27) * (VAR11 + 1));
                            if (!VAR28)
                                VAR27 = VAR28;
                            VAR27[VAR11].VAR8 = FUN4(VAR9 + VAR37);
                            if (!VAR27[VAR11].VAR8)
                                VAR44 = FUN7(VAR38 + 4, VAR10, VAR27[VAR11].VAR8);
                            FUN9(&VAR27[VAR11].VAR25, VAR27[VAR11].VAR8, VAR44 << 3);
                            VAR27[VAR11].VAR26 = VAR18->VAR23 >> 1;
                            VAR24 = VAR11 - 1;
                            VAR11++;
                            break;
                        case VAR45:
                            VAR36 = FUN7(VAR38 + 4, VAR10, VAR21);
                            FUN9(&VAR18->VAR25, VAR21, VAR36 * 8);
                            FUN10(VAR2, VAR15, &VAR18->VAR25);
                            break;
                        case VAR46:
                        {
                            int VAR44;
                            VAR28 = FUN8(VAR27, sizeof(*VAR27) * (VAR11 + 1));
                            if (!VAR28)
                                VAR27 = VAR28;
                            VAR27[VAR11].VAR8 = FUN4(VAR9 + VAR37);
                            if (!VAR27[VAR11].VAR8)
                                VAR44 = FUN7(VAR38 + 4, VAR10, VAR27[VAR11].VAR8);
                            FUN9(&VAR27[VAR11].VAR25, VAR27[VAR11].VAR8, VAR44 << 3);
                            VAR27[VAR11].VAR26 = FUN11(&VAR27[VAR11].VAR25, 9);
                            VAR11++;
                            break;
                        }
                            else if (VAR15->VAR47 && ((VAR8[0] & 0xC0) == 0xC0))
                            {
                                const VAR7 *VAR48;
                                int VAR44;
                                VAR48 = FUN6(VAR8, VAR8 + VAR9);
                                if ((VAR48 == (VAR8 + VAR9)) || FUN2(VAR48) != VAR43)
                                {
                                    FUN12(VAR2, VAR49, "");
                                }
                                else
                                {
                                    VAR28 = FUN8(VAR27, sizeof(*VAR27) * (VAR11 + 1));
                                    if (!VAR28)
                                        VAR27 = VAR28;
                                    VAR27[VAR11].VAR8 = FUN4(VAR9 + VAR37);
                                    if (!VAR27[VAR11].VAR8)
                                        VAR44 = FUN7(VAR48 + 4, VAR8 + VAR9 - VAR48 - 4, VAR27[VAR11].VAR8);
                                    FUN9(&VAR27[VAR11].VAR25, VAR27[VAR11].VAR8, VAR44 << 3);
                                    VAR27[VAR11].VAR26 = VAR18->VAR23 >> 1;
                                    VAR24 = VAR11 - 1;
                                    VAR11++;
                                    VAR36 = FUN7(VAR8, VAR48 - VAR8, VAR21);
                                }
                                else
                                {
                                    VAR36 = FUN7(VAR8, VAR9, VAR21);
                                    FUN9(&VAR18->VAR25, VAR21, VAR36 * 8);
                                }
                                else FUN9(&VAR18->VAR25, VAR8, VAR9 * 8);
                                if (VAR15->VAR50)
                                {
                                    VAR15->VAR51 = !FUN13(&VAR18->VAR25);
                                    VAR15->VAR52 = FUN13(&VAR18->VAR25);
                                    if (VAR2->VAR33 == VAR53 || VAR2->VAR33 == VAR35)
                                    {
                                        if (VAR15->VAR51)
                                        {
                                            VAR2->VAR54 = VAR2->VAR55 = VAR15->VAR56;
                                            VAR2->VAR57 = VAR2->VAR58 = VAR15->VAR59;
                                        }
                                        else
                                        {
                                            goto VAR60;
                                            if (VAR18->VAR61 && (VAR18->VAR54 != VAR2->VAR55 || VAR18->VAR57 != VAR2->VAR58))
                                            {
                                                FUN14(VAR2);
                                                if (!VAR18->VAR61)
                                                {
                                                    if (FUN15(VAR2) < 0)
                                                        if (FUN16(VAR15) < 0)
                                                        {
                                                            FUN17(VAR18);
                                                            VAR18->VAR30 = !VAR2->VAR62 || VAR15->VAR50;
                                                            if (VAR15->VAR63 == VAR64)
                                                            {
                                                                VAR18->VAR65 = VAR2->VAR55;
                                                                VAR18->VAR66 = VAR2->VAR58;
                                                                VAR15->VAR67 = 0;
                                                                VAR15->VAR68 = 1;
                                                                if (VAR15->VAR63 < VAR64)
                                                                {
                                                                    if (FUN18(VAR15, &VAR18->VAR25) < 0)
                                                                    {
                                                                    }
                                                                    else
                                                                    {
                                                                        if (FUN19(VAR15, &VAR18->VAR25) < 0)
                                                                        {
                                                                            VAR15->VAR68 = 0;
                                                                            if ((VAR2->VAR33 == VAR53 || VAR2->VAR33 == VAR35) && VAR18->VAR69 != VAR70)
                                                                            {
                                                                                FUN12(VAR15->VAR18.VAR2, VAR49, "");
                                                                                VAR18->VAR71.VAR32->VAR69 = VAR18->VAR69;
                                                                                VAR18->VAR71.VAR32->VAR72 = VAR18->VAR69 == VAR70;
                                                                                if (!VAR18->VAR73 && (VAR18->VAR69 == VAR74 || VAR18->VAR75))
                                                                                {
                                                                                    goto VAR39;
                                                                                    if ((VAR2->VAR76 >= VAR77 && VAR18->VAR69 == VAR74) || (VAR2->VAR76 >= VAR78 && VAR18->VAR69 != VAR70) || VAR2->VAR76 >= VAR79)
                                                                                    {
                                                                                        goto VAR39;
                                                                                        if (VAR18->VAR80)
                                                                                        {
                                                                                            if (VAR18->VAR69 == VAR74)
                                                                                                goto VAR39;
                                                                                            else
                                                                                                VAR18->VAR80 = 0;
                                                                                            if (FUN20(VAR18, VAR2) < 0)
                                                                                            {
                                                                                                VAR18->VAR81->VAR32->VAR82 = 0;
                                                                                                if (VAR15->VAR83)
                                                                                                {
                                                                                                    VAR18->VAR81->VAR32->VAR82 = 1;
                                                                                                }
                                                                                                else if (VAR15->VAR84)
                                                                                                {
                                                                                                    VAR18->VAR81->VAR32->VAR82 = VAR15->VAR84 * 2;
                                                                                                    VAR18->VAR85.VAR86 = VAR18->VAR87.VAR88;
                                                                                                    VAR18->VAR85.VAR89 = VAR18->VAR87.VAR90;
                                                                                                    if (VAR2->VAR42)
                                                                                                    {
                                                                                                        if (VAR2->VAR42->FUN21(VAR2, VAR8, VAR9) < 0)
                                                                                                            if (VAR2->VAR42->FUN22(VAR2, VAR22, (VAR8 + VAR9) - VAR22) < 0)
                                                                                                                if (VAR2->VAR42->FUN23(VAR2) < 0)
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        int VAR91 = 0;
                                                                                                        FUN24(VAR18);
                                                                                                        VAR15->VAR92 = VAR9 * 8;
                                                                                                        VAR15->VAR93 = VAR18->VAR94;
                                                                                                        if (VAR15->VAR95)
                                                                                                        {
                                                                                                            VAR18->VAR71.VAR32->VAR96[0] <<= 1;
                                                                                                            VAR18->VAR71.VAR32->VAR96[1] <<= 1;
                                                                                                            VAR18->VAR71.VAR32->VAR96[2] <<= 1;
                                                                                                            VAR18->VAR96 <<= 1;
                                                                                                            VAR18->VAR97 <<= 1;
                                                                                                            VAR23 = VAR18->VAR23 >> VAR15->VAR95;
                                                                                                            if (!VAR23)
                                                                                                            {
                                                                                                                FUN12(VAR15->VAR18.VAR2, VAR49, "");
                                                                                                                for (VAR12 = 0; VAR12 <= VAR11; VAR12++)
                                                                                                                {
                                                                                                                    if (VAR12 > 0 && VAR27[VAR12 - 1].VAR26 >= VAR23)
                                                                                                                    {
                                                                                                                        if (VAR15->VAR95 <= 0)
                                                                                                                        {
                                                                                                                            FUN12(VAR15->VAR18.VAR2, VAR49, ""
                                                                                                                                                             "",
                                                                                                                                   VAR12, VAR27[VAR12 - 1].VAR26, VAR23);
                                                                                                                            continue;
                                                                                                                            VAR15->VAR98 = 1;
                                                                                                                            VAR15->VAR99 = VAR18->VAR94 * VAR18->VAR23 << 1;
                                                                                                                            VAR15->VAR100 = VAR18->VAR101 * VAR18->VAR23 >> 1;
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                            VAR15->VAR98 = 0;
                                                                                                                            VAR15->VAR99 = 0;
                                                                                                                            VAR15->VAR100 = 0;
                                                                                                                            if (VAR12)
                                                                                                                            {
                                                                                                                                VAR15->VAR67 = 0;
                                                                                                                                if (VAR15->VAR95 && VAR12 == VAR24 + 2)
                                                                                                                                {
                                                                                                                                    if ((VAR91 = FUN19(VAR15, &VAR18->VAR25)) < 0)
                                                                                                                                    {
                                                                                                                                        FUN12(VAR15->VAR18.VAR2, VAR49, "");
                                                                                                                                        if (VAR2->VAR102 & VAR103)
                                                                                                                                            continue;
                                                                                                                                    }
                                                                                                                                    else if (FUN13(&VAR18->VAR25))
                                                                                                                                    {
                                                                                                                                        VAR15->VAR67 = 1;
                                                                                                                                        if ((VAR91 = FUN19(VAR15, &VAR18->VAR25)) < 0)
                                                                                                                                        {
                                                                                                                                            FUN12(VAR15->VAR18.VAR2, VAR49, "");
                                                                                                                                            if (VAR2->VAR102 & VAR103)
                                                                                                                                                continue;
                                                                                                                                            if (VAR91 < 0)
                                                                                                                                                continue;
                                                                                                                                            VAR18->VAR104 = (VAR12 == 0) ? 0 : FUN25(0, VAR27[VAR12 - 1].VAR26 % VAR23);
                                                                                                                                            if (!VAR15->VAR95 || VAR15->VAR98)
                                                                                                                                                VAR18->VAR105 = (VAR12 == VAR11) ? VAR23 : FUN26(VAR23, VAR27[VAR12].VAR26 % VAR23);
                                                                                                                                            else
                                                                                                                                                VAR18->VAR105 = (VAR12 <= VAR24 + 1) ? VAR23 : FUN26(VAR23, VAR27[VAR12].VAR26 % VAR23);
                                                                                                                                            FUN27(VAR15);
                                                                                                                                            if (VAR12 != VAR11)
                                                                                                                                                VAR18->VAR25 = VAR27[VAR12].VAR25;
                                                                                                                                            if (VAR15->VAR95)
                                                                                                                                            {
                                                                                                                                                VAR15->VAR98 = 0;
                                                                                                                                                VAR18->VAR71.VAR32->VAR96[0] >>= 1;
                                                                                                                                                VAR18->VAR71.VAR32->VAR96[1] >>= 1;
                                                                                                                                                VAR18->VAR71.VAR32->VAR96[2] >>= 1;
                                                                                                                                                VAR18->VAR96 >>= 1;
                                                                                                                                                VAR18->VAR97 >>= 1;
                                                                                                                                                if (VAR15->VAR18.VAR69 != VAR106 && VAR15->VAR18.VAR69 != VAR74)
                                                                                                                                                {
                                                                                                                                                    FUN28(VAR7 *, VAR15->VAR107[0], VAR15->VAR108[0]);
                                                                                                                                                    FUN28(VAR7 *, VAR15->VAR107[1], VAR15->VAR108[1]);
                                                                                                                                                    FUN29(VAR18->VAR2, "", FUN30(&VAR18->VAR25), VAR18->VAR25.VAR109);
                                                                                                                                                    if (!VAR15->VAR95)
                                                                                                                                                        FUN31(&VAR18->VAR110);
                                                                                                                                                    FUN32(VAR18);
                                                                                                                                                    if (VAR2->VAR33 == VAR53 || VAR2->VAR33 == VAR35)
                                                                                                                                                    {
                                                                                                                                                    VAR60:
                                                                                                                                                        VAR2->VAR54 = VAR2->VAR55 = VAR15->VAR111;
                                                                                                                                                        VAR2->VAR57 = VAR2->VAR58 = VAR15->VAR112;
                                                                                                                                                        if (VAR2->VAR76 >= VAR77)
                                                                                                                                                            goto VAR39;
                                                                                                                                                        if (FUN33(VAR15, &VAR18->VAR25))
                                                                                                                                                            if ((VAR13 = FUN3(VAR20, VAR15->VAR113)) < 0)
                                                                                                                                                                *VAR4 = 1;
                                                                                                                                                    }
                                                                                                                                                    else
                                                                                                                                                    {
                                                                                                                                                        if (VAR18->VAR69 == VAR74 || VAR18->VAR30)
                                                                                                                                                        {
                                                                                                                                                            if ((VAR13 = FUN3(VAR20, VAR18->VAR81->VAR32)) < 0)
                                                                                                                                                                FUN34(VAR18, VAR18->VAR81);
                                                                                                                                                            *VAR4 = 1;
                                                                                                                                                        }
                                                                                                                                                        else if (VAR18->VAR73)
                                                                                                                                                        {
                                                                                                                                                            if ((VAR13 = FUN3(VAR20, VAR18->VAR73->VAR32)) < 0)
                                                                                                                                                                FUN34(VAR18, VAR18->VAR73);
                                                                                                                                                            *VAR4 = 1;
                                                                                                                                                        VAR39:
                                                                                                                                                            FUN35(VAR21);
                                                                                                                                                            for (VAR12 = 0; VAR12 < VAR11; VAR12++)
                                                                                                                                                                FUN35(VAR27[VAR12].VAR8);
                                                                                                                                                            FUN35(VAR27);
                                                                                                                                                            return VAR9;
                                                                                                                                                        VAR114:
                                                                                                                                                            FUN35(VAR21);
                                                                                                                                                            for (VAR12 = 0; VAR12 < VAR11; VAR12++)
                                                                                                                                                                FUN35(VAR27[VAR12].VAR8);
                                                                                                                                                            FUN35(VAR27);
                                                                                                                                                            return -1