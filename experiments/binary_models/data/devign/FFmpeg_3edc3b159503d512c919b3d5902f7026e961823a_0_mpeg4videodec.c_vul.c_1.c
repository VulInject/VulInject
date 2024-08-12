static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    FUN2(VAR4, 1);
    VAR6->VAR11 = FUN3(VAR4, 8);
    if (FUN4(VAR4) != 0)
    {
        VAR10 = FUN3(VAR4, 4);
        FUN2(VAR4, 3);
    }
    else
    {
        VAR10 = 1;
        VAR6->VAR12 = FUN3(VAR4, 4);
        if (VAR6->VAR12 == VAR13)
        {
            VAR6->VAR14->VAR15.VAR16 = FUN3(VAR4, 8);
            VAR6->VAR14->VAR15.VAR17 = FUN3(VAR4, 8);
        }
        else
        {
            VAR6->VAR14->VAR15 = VAR18[VAR6->VAR12];
            if ((VAR6->VAR19 = FUN4(VAR4)))
            {
                int VAR20 = FUN3(VAR4, 2);
                if (VAR20 != VAR21)
                    FUN5(VAR6->VAR14, VAR22, "");
                VAR6->VAR23 = FUN4(VAR4);
                if (FUN4(VAR4))
                {
                    FUN3(VAR4, 15);
                    FUN6(VAR4);
                    FUN3(VAR4, 15);
                    FUN6(VAR4);
                    FUN3(VAR4, 15);
                    FUN6(VAR4);
                    FUN3(VAR4, 3);
                    FUN3(VAR4, 11);
                    FUN6(VAR4);
                    FUN3(VAR4, 15);
                    FUN6(VAR4);
                }
                else
                {
                    if (VAR6->VAR24 == 0)
                        VAR6->VAR23 = 0;
                    VAR2->VAR25 = FUN3(VAR4, 2);
                    if (VAR2->VAR25 != VAR26)
                        FUN5(VAR6->VAR14, VAR22, "");
                    if (VAR2->VAR25 == VAR27 && VAR10 != 1)
                    {
                        FUN5(VAR6->VAR14, VAR22, "");
                        FUN2(VAR4, 4);
                        FUN7(VAR4, "");
                        VAR6->VAR14->VAR28.VAR17 = FUN3(VAR4, 16);
                        if (!VAR6->VAR14->VAR28.VAR17)
                        {
                            FUN5(VAR6->VAR14, VAR22, "");
                            VAR6->VAR14->VAR28.VAR16 = 0;
                            return -1;
                            VAR2->VAR29 = FUN8(VAR6->VAR14->VAR28.VAR17 - 1) + 1;
                            if (VAR2->VAR29 < 1)
                                VAR2->VAR29 = 1;
                            FUN7(VAR4, "");
                            if (FUN4(VAR4) != 0)
                                VAR6->VAR14->VAR28.VAR16 = FUN3(VAR4, VAR2->VAR29);
                            else
                                VAR6->VAR14->VAR28.VAR16 = 1;
                            VAR2->VAR30 = 0;
                            if (VAR2->VAR25 != VAR31)
                            {
                                if (VAR2->VAR25 == VAR26)
                                {
                                    FUN7(VAR4, "");
                                    VAR8 = FUN3(VAR4, 13);
                                    FUN7(VAR4, "");
                                    VAR9 = FUN3(VAR4, 13);
                                    FUN7(VAR4, "");
                                    if (VAR8 && VAR9 && !(VAR6->VAR8 && VAR6->VAR32 == FUN9("")))
                                    {
                                        if (VAR6->VAR8 && VAR6->VAR9 && (VAR6->VAR8 != VAR8 || VAR6->VAR9 != VAR9))
                                            VAR6->VAR33 = 1;
                                        VAR6->VAR8 = VAR8;
                                        VAR6->VAR9 = VAR9;
                                        VAR6->VAR34 = VAR6->VAR35 = FUN4(VAR4) ^ 1;
                                        VAR6->VAR36 = 0;
                                        if (!FUN4(VAR4) && (VAR6->VAR14->VAR37 & VAR38))
                                            FUN5(VAR6->VAR14, VAR39, "");
                                        if (VAR10 == 1)
                                            VAR2->VAR40 = FUN4(VAR4);
                                        else
                                            VAR2->VAR40 = FUN3(VAR4, 2);
                                        if (VAR2->VAR40 == VAR41)
                                            FUN5(VAR6->VAR14, VAR22, "");
                                        if (VAR2->VAR40 == VAR41 || VAR2->VAR40 == VAR42)
                                        {
                                            if (VAR2->VAR40 == VAR41)
                                            {
                                                FUN2(VAR4, 13);
                                                FUN6(VAR4);
                                                FUN2(VAR4, 13);
                                                FUN6(VAR4);
                                                FUN2(VAR4, 13);
                                                FUN6(VAR4);
                                                FUN2(VAR4, 13);
                                                FUN6(VAR4);
                                                VAR2->VAR43 = FUN3(VAR4, 6);
                                                if (VAR2->VAR43 > 3)
                                                {
                                                    FUN5(VAR6->VAR14, VAR22, "", VAR2->VAR43);
                                                    VAR2->VAR43 = 0;
                                                    return -1;
                                                    VAR6->VAR44 = FUN3(VAR4, 2);
                                                    VAR2->VAR45 = FUN4(VAR4);
                                                    if (VAR2->VAR40 == VAR41)
                                                        FUN6(VAR4);
                                                    if (FUN4(VAR4) == 1)
                                                    {
                                                        VAR6->VAR46 = FUN3(VAR4, 4);
                                                        if (FUN3(VAR4, 4) != 8)
                                                            FUN5(VAR6->VAR14, VAR22, "");
                                                        if (VAR6->VAR46 != 5)
                                                            FUN5(VAR6->VAR14, VAR22, "", VAR6->VAR46);
                                                        if (VAR6->VAR46 < 3 || VAR6->VAR46 > 9)
                                                        {
                                                            VAR6->VAR46 = 5;
                                                        }
                                                        else
                                                        {
                                                            VAR6->VAR46 = 5;
                                                            if ((VAR6->VAR47 = FUN4(VAR4)))
                                                            {
                                                                int VAR48, VAR49;
                                                                for (VAR48 = 0; VAR48 < 64; VAR48++)
                                                                {
                                                                    int VAR50 = VAR6->VAR51.VAR52[VAR48];
                                                                    VAR49 = VAR53[VAR48];
                                                                    VAR6->VAR54[VAR50] = VAR49;
                                                                    VAR6->VAR55[VAR50] = VAR49;
                                                                    VAR49 = VAR56[VAR48];
                                                                    VAR6->VAR57[VAR50] = VAR49;
                                                                    VAR6->VAR58[VAR50] = VAR49;
                                                                    if (FUN4(VAR4))
                                                                    {
                                                                        int VAR59 = 0;
                                                                        for (VAR48 = 0; VAR48 < 64; VAR48++)
                                                                        {
                                                                            int VAR50;
                                                                            VAR49 = FUN3(VAR4, 8);
                                                                            if (VAR49 == 0)
                                                                                break;
                                                                            VAR59 = VAR49;
                                                                            VAR50 = VAR6->VAR51.VAR52[VAR60[VAR48]];
                                                                            VAR6->VAR54[VAR50] = VAR59;
                                                                            VAR6->VAR55[VAR50] = VAR59;
                                                                            for (; VAR48 < 64; VAR48++)
                                                                            {
                                                                                int VAR50 = VAR6->VAR51.VAR52[VAR60[VAR48]];
                                                                                VAR6->VAR54[VAR50] = VAR59;
                                                                                VAR6->VAR55[VAR50] = VAR59;
                                                                                if (FUN4(VAR4))
                                                                                {
                                                                                    int VAR59 = 0;
                                                                                    for (VAR48 = 0; VAR48 < 64; VAR48++)
                                                                                    {
                                                                                        int VAR50;
                                                                                        VAR49 = FUN3(VAR4, 8);
                                                                                        if (VAR49 == 0)
                                                                                            break;
                                                                                        VAR59 = VAR49;
                                                                                        VAR50 = VAR6->VAR51.VAR52[VAR60[VAR48]];
                                                                                        VAR6->VAR57[VAR50] = VAR49;
                                                                                        VAR6->VAR58[VAR50] = VAR49;
                                                                                        for (; VAR48 < 64; VAR48++)
                                                                                        {
                                                                                            int VAR50 = VAR6->VAR51.VAR52[VAR60[VAR48]];
                                                                                            VAR6->VAR57[VAR50] = VAR59;
                                                                                            VAR6->VAR58[VAR50] = VAR59;
                                                                                            if (VAR10 != 1)
                                                                                                VAR6->VAR61 = FUN4(VAR4);
                                                                                            else
                                                                                                VAR6->VAR61 = 0;
                                                                                            if (!FUN4(VAR4))
                                                                                            {
                                                                                                int VAR62 = FUN10(VAR4);
                                                                                                int VAR63 = FUN3(VAR4, 2);
                                                                                                if (VAR63 < 2)
                                                                                                {
                                                                                                    if (!FUN4(VAR4))
                                                                                                    {
                                                                                                        VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                        VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                        VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                        VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                        VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                        VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                        if (!FUN4(VAR4))
                                                                                                        {
                                                                                                            VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                            VAR2->VAR65 += 8 * FUN4(VAR4);
                                                                                                            VAR2->VAR65 += 8 * FUN4(VAR4);
                                                                                                            VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                            if (!FUN7(VAR4, ""))
                                                                                                            {
                                                                                                                FUN11(VAR4, VAR62 - FUN10(VAR4));
                                                                                                                goto VAR66;
                                                                                                                if (!FUN4(VAR4))
                                                                                                                {
                                                                                                                    VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                                    VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                                    VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                                    VAR2->VAR64 += 4 * FUN4(VAR4);
                                                                                                                    if (!FUN4(VAR4))
                                                                                                                    {
                                                                                                                        VAR2->VAR65 += 8 * FUN4(VAR4);
                                                                                                                        VAR2->VAR65 += 8 * FUN4(VAR4);
                                                                                                                        VAR2->VAR67 += 8 * FUN4(VAR4);
                                                                                                                        VAR2->VAR65 += 8 * FUN4(VAR4);
                                                                                                                        VAR2->VAR65 += 8 * FUN4(VAR4);
                                                                                                                        VAR2->VAR65 += 8 * FUN4(VAR4);
                                                                                                                        if (!FUN7(VAR4, ""))
                                                                                                                        {
                                                                                                                            FUN11(VAR4, VAR62 - FUN10(VAR4));
                                                                                                                            goto VAR66;
                                                                                                                            if (VAR63 == 1)
                                                                                                                            {
                                                                                                                                VAR2->VAR64 += 8 * FUN4(VAR4);
                                                                                                                                VAR2->VAR65 += 8 * FUN4(VAR4);
                                                                                                                            }
                                                                                                                            else
                                                                                                                                FUN5(VAR6->VAR14, VAR22, "", VAR63);
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                        VAR66:
                                                                                                                            VAR2->VAR64 = VAR2->VAR65 = VAR2->VAR67 = 0;
                                                                                                                            VAR2->VAR68 = !FUN4(VAR4);
                                                                                                                            VAR6->VAR69 = FUN4(VAR4);
                                                                                                                            if (VAR6->VAR69)
                                                                                                                                VAR2->VAR70 = FUN4(VAR4);
                                                                                                                            if (VAR10 != 1)
                                                                                                                            {
                                                                                                                                VAR2->VAR71 = FUN4(VAR4);
                                                                                                                                if (VAR2->VAR71)
                                                                                                                                {
                                                                                                                                    FUN5(VAR6->VAR14, VAR22, "");
                                                                                                                                    FUN2(VAR4, 2);
                                                                                                                                    FUN6(VAR4);
                                                                                                                                    if (FUN4(VAR4))
                                                                                                                                        FUN5(VAR6->VAR14, VAR22, "");
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    VAR2->VAR71 = 0;
                                                                                                                                    VAR2->VAR72 = FUN4(VAR4);
                                                                                                                                    if (VAR2->VAR72)
                                                                                                                                    {
                                                                                                                                        GetBitContext VAR73 = *VAR4;
                                                                                                                                        int VAR74;
                                                                                                                                        int VAR75;
                                                                                                                                        int VAR76;
                                                                                                                                        int VAR77;
                                                                                                                                        FUN6(VAR4);
                                                                                                                                        FUN2(VAR4, 4);
                                                                                                                                        FUN6(VAR4);
                                                                                                                                        VAR74 = FUN3(VAR4, 5);
                                                                                                                                        VAR75 = FUN3(VAR4, 5);
                                                                                                                                        VAR76 = FUN3(VAR4, 5);
                                                                                                                                        VAR77 = FUN3(VAR4, 5);
                                                                                                                                        VAR2->VAR78 = FUN4(VAR4);
                                                                                                                                        if (VAR74 == 0 || VAR75 == 0 || VAR76 == 0 || VAR77 == 0)
                                                                                                                                        {
                                                                                                                                            VAR2->VAR72 = 0;
                                                                                                                                            *VAR4 = VAR73;
                                                                                                                                        }
                                                                                                                                        else
                                                                                                                                            FUN5(VAR6->VAR14, VAR22, "");
                                                                                                                                        if (VAR6->VAR14->VAR37 & VAR38)
                                                                                                                                        {
                                                                                                                                            FUN5(VAR6->VAR14, VAR79, "", VAR6->VAR14->VAR28.VAR16, VAR6->VAR14->VAR28.VAR17, VAR2->VAR29, VAR6->VAR46, VAR6->VAR34, VAR2->VAR72 ? "" : "", VAR6->VAR61 ? "" : "", VAR6->VAR69 ? "" : "", VAR2->VAR70 ? "" : "");
                                                                                                                                            return 0