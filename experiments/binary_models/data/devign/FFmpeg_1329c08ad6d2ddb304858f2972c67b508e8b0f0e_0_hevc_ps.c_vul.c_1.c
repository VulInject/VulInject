int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int *VAR5, int VAR6, VAR7 **VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12;
    int VAR13 = 0;
    int VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19;
    VAR2->VAR20 = FUN2(VAR4, 4);
    if (VAR2->VAR20 >= VAR21)
    {
        FUN3(VAR10, VAR22, "", VAR2->VAR20);
        if (VAR8 && !VAR8[VAR2->VAR20])
        {
            FUN3(VAR10, VAR22, "", VAR2->VAR20);
            VAR2->VAR23 = FUN2(VAR4, 3) + 1;
            if (VAR2->VAR23 > VAR24)
            {
                FUN3(VAR10, VAR22, "", VAR2->VAR23);
                FUN4(VAR4);
                FUN5(VAR4, VAR10, &VAR2->VAR25, VAR2->VAR23);
                *VAR5 = FUN6(VAR4);
                if (*VAR5 >= VAR26)
                {
                    FUN3(VAR10, VAR22, "", *VAR5);
                    VAR2->VAR27 = FUN6(VAR4);
                    if (VAR2->VAR27 != 1)
                    {
                        FUN7(VAR10, "", VAR2->VAR27);
                        VAR13 = VAR28;
                        if (VAR2->VAR27 == 3)
                            VAR2->VAR29 = FUN8(VAR4);
                        VAR2->VAR30 = FUN6(VAR4);
                        VAR2->VAR31 = FUN6(VAR4);
                        if ((VAR13 = FUN9(VAR2->VAR30, VAR2->VAR31, 0, VAR10)) < 0)
                            if (FUN8(VAR4))
                            {
                                VAR2->VAR32.VAR33 = FUN6(VAR4) * 2;
                                VAR2->VAR32.VAR34 = FUN6(VAR4) * 2;
                                VAR2->VAR32.VAR35 = FUN6(VAR4) * 2;
                                VAR2->VAR32.VAR36 = FUN6(VAR4) * 2;
                                if (VAR10->VAR37 & VAR38)
                                {
                                    FUN3(VAR10, VAR39, ""
                                                                "",
                                           VAR2->VAR32.VAR33, VAR2->VAR32.VAR34, VAR2->VAR32.VAR35, VAR2->VAR32.VAR36);
                                    VAR2->VAR32.VAR33 = VAR2->VAR32.VAR34 = VAR2->VAR32.VAR35 = VAR2->VAR32.VAR36 = 0;
                                    VAR2->VAR40 = VAR2->VAR32;
                                    VAR2->VAR41 = FUN6(VAR4) + 8;
                                    VAR15 = FUN6(VAR4) + 8;
                                    if (VAR15 != VAR2->VAR41)
                                    {
                                        FUN3(VAR10, VAR22, ""
                                                                    "",
                                               VAR2->VAR41, VAR15);
                                        VAR13 = FUN10(VAR10, VAR2);
                                        if (VAR13 < 0)
                                            VAR2->VAR42 = FUN6(VAR4) + 4;
                                        if (VAR2->VAR42 > 16)
                                        {
                                            FUN3(VAR10, VAR22, "", VAR2->VAR42 - 4);
                                            VAR18 = FUN8(VAR4);
                                            VAR16 = VAR18 ? 0 : VAR2->VAR23 - 1;
                                            for (VAR19 = VAR16; VAR19 < VAR2->VAR23; VAR19++)
                                            {
                                                VAR2->VAR43[VAR19].VAR44 = FUN6(VAR4) + 1;
                                                VAR2->VAR43[VAR19].VAR45 = FUN6(VAR4);
                                                VAR2->VAR43[VAR19].VAR46 = FUN6(VAR4) - 1;
                                                if (VAR2->VAR43[VAR19].VAR44 > VAR47)
                                                {
                                                    FUN3(VAR10, VAR22, "", VAR2->VAR43[VAR19].VAR44 - 1);
                                                    if (VAR2->VAR43[VAR19].VAR45 > VAR2->VAR43[VAR19].VAR44 - 1)
                                                    {
                                                        FUN3(VAR10, VAR48, "", VAR2->VAR43[VAR19].VAR45);
                                                        if (VAR10->VAR49 & VAR50 || VAR2->VAR43[VAR19].VAR45 > VAR47 - 1)
                                                        {
                                                            VAR2->VAR43[VAR19].VAR44 = VAR2->VAR43[VAR19].VAR45 + 1;
                                                            if (!VAR18)
                                                            {
                                                                for (VAR19 = 0; VAR19 < VAR16; VAR19++)
                                                                {
                                                                    VAR2->VAR43[VAR19].VAR44 = VAR2->VAR43[VAR16].VAR44;
                                                                    VAR2->VAR43[VAR19].VAR45 = VAR2->VAR43[VAR16].VAR45;
                                                                    VAR2->VAR43[VAR19].VAR46 = VAR2->VAR43[VAR16].VAR46;
                                                                    VAR2->VAR51 = FUN6(VAR4) + 3;
                                                                    VAR2->VAR52 = FUN6(VAR4);
                                                                    VAR2->VAR53 = FUN6(VAR4) + 2;
                                                                    VAR14 = FUN6(VAR4);
                                                                    VAR2->VAR54 = VAR14 + VAR2->VAR53;
                                                                    if (VAR2->VAR53 >= VAR2->VAR51)
                                                                    {
                                                                        FUN3(VAR10, VAR22, "");
                                                                        VAR2->VAR55 = FUN6(VAR4);
                                                                        VAR2->VAR56 = FUN6(VAR4);
                                                                        VAR2->VAR57 = FUN8(VAR4);
                                                                        if (VAR2->VAR57)
                                                                        {
                                                                            FUN11(&VAR2->VAR58);
                                                                            if (FUN8(VAR4))
                                                                            {
                                                                                VAR13 = FUN12(VAR4, VAR10, &VAR2->VAR58);
                                                                                if (VAR13 < 0)
                                                                                    VAR2->VAR59 = FUN8(VAR4);
                                                                                VAR2->VAR60 = FUN8(VAR4);
                                                                                VAR2->VAR61 = FUN8(VAR4);
                                                                                if (VAR2->VAR61)
                                                                                {
                                                                                    VAR2->VAR62.VAR41 = FUN2(VAR4, 4) + 1;
                                                                                    VAR2->VAR62.VAR15 = FUN2(VAR4, 4) + 1;
                                                                                    VAR2->VAR62.VAR63 = FUN6(VAR4) + 3;
                                                                                    VAR2->VAR62.VAR64 = VAR2->VAR62.VAR63 + FUN6(VAR4);
                                                                                    if (VAR2->VAR62.VAR41 > VAR2->VAR41)
                                                                                    {
                                                                                        FUN3(VAR10, VAR22, "", VAR2->VAR62.VAR41, VAR2->VAR41);
                                                                                        VAR2->VAR62.VAR65 = FUN8(VAR4);
                                                                                        VAR2->VAR66 = FUN6(VAR4);
                                                                                        if (VAR2->VAR66 > VAR67)
                                                                                        {
                                                                                            FUN3(VAR10, VAR22, "", VAR2->VAR66);
                                                                                            for (VAR19 = 0; VAR19 < VAR2->VAR66; VAR19++)
                                                                                            {
                                                                                                if ((VAR13 = FUN13(VAR4, VAR10, &VAR2->VAR68[VAR19], VAR2, 0)) < 0)
                                                                                                    VAR2->VAR69 = FUN8(VAR4);
                                                                                                if (VAR2->VAR69)
                                                                                                {
                                                                                                    VAR2->VAR70 = FUN6(VAR4);
                                                                                                    for (VAR19 = 0; VAR19 < VAR2->VAR70; VAR19++)
                                                                                                    {
                                                                                                        VAR2->VAR71[VAR19] = FUN2(VAR4, VAR2->VAR42);
                                                                                                        VAR2->VAR72[VAR19] = FUN8(VAR4);
                                                                                                        VAR2->VAR73 = FUN8(VAR4);
                                                                                                        VAR2->VAR74 = FUN8(VAR4);
                                                                                                        VAR2->VAR75.VAR76 = (VAR77){0, 1};
                                                                                                        VAR17 = FUN8(VAR4);
                                                                                                        if (VAR17)
                                                                                                            FUN14(VAR4, VAR10, VAR6, VAR2);
                                                                                                        FUN4(VAR4);
                                                                                                        if (VAR6)
                                                                                                        {
                                                                                                            VAR2->VAR40.VAR33 += VAR2->VAR75.VAR78.VAR33;
                                                                                                            VAR2->VAR40.VAR34 += VAR2->VAR75.VAR78.VAR34;
                                                                                                            VAR2->VAR40.VAR35 += VAR2->VAR75.VAR78.VAR35;
                                                                                                            VAR2->VAR40.VAR36 += VAR2->VAR75.VAR78.VAR36;
                                                                                                            VAR12 = &VAR2->VAR40;
                                                                                                            if (VAR12->VAR33 >= VAR79 - VAR12->VAR34 || VAR12->VAR35 >= VAR79 - VAR12->VAR36 || VAR12->VAR33 + VAR12->VAR34 >= VAR2->VAR30 || VAR12->VAR35 + VAR12->VAR36 >= VAR2->VAR31)
                                                                                                            {
                                                                                                                FUN3(VAR10, VAR48, "", VAR12->VAR33, VAR12->VAR34, VAR12->VAR35, VAR12->VAR36);
                                                                                                                if (VAR10->VAR49 & VAR50)
                                                                                                                {
                                                                                                                    FUN3(VAR10, VAR48, "");
                                                                                                                    memset(VAR12, 0, sizeof(*VAR12));
                                                                                                                    VAR2->VAR80 = VAR2->VAR51 + VAR2->VAR52;
                                                                                                                    VAR2->VAR81 = VAR2->VAR51 - 1;
                                                                                                                    VAR2->VAR82 = (VAR2->VAR30 + (1 << VAR2->VAR80) - 1) >> VAR2->VAR80;
                                                                                                                    VAR2->VAR83 = (VAR2->VAR31 + (1 << VAR2->VAR80) - 1) >> VAR2->VAR80;
                                                                                                                    VAR2->VAR84 = VAR2->VAR82 * VAR2->VAR83;
                                                                                                                    VAR2->VAR85 = VAR2->VAR30 >> VAR2->VAR51;
                                                                                                                    VAR2->VAR86 = VAR2->VAR31 >> VAR2->VAR51;
                                                                                                                    VAR2->VAR87 = VAR2->VAR30 >> VAR2->VAR53;
                                                                                                                    VAR2->VAR88 = VAR2->VAR31 >> VAR2->VAR53;
                                                                                                                    VAR2->VAR89 = VAR2->VAR30 >> VAR2->VAR81;
                                                                                                                    VAR2->VAR90 = VAR2->VAR31 >> VAR2->VAR81;
                                                                                                                    VAR2->VAR91 = 6 * (VAR2->VAR41 - 8);
                                                                                                                    if (VAR2->VAR30 & ((1 << VAR2->VAR51) - 1) || VAR2->VAR31 & ((1 << VAR2->VAR51) - 1))
                                                                                                                    {
                                                                                                                        FUN3(VAR10, VAR22, "");
                                                                                                                        if (VAR2->VAR80 > VAR92)
                                                                                                                        {
                                                                                                                            FUN3(VAR10, VAR22, "", VAR2->VAR80);
                                                                                                                            if (VAR2->VAR55 > VAR2->VAR80 - VAR2->VAR53)
                                                                                                                            {
                                                                                                                                FUN3(VAR10, VAR22, "", VAR2->VAR55);
                                                                                                                                if (VAR2->VAR56 > VAR2->VAR80 - VAR2->VAR53)
                                                                                                                                {
                                                                                                                                    FUN3(VAR10, VAR22, "", VAR2->VAR56);
                                                                                                                                    if (VAR2->VAR54 > FUN15(VAR2->VAR80, 5))
                                                                                                                                    {
                                                                                                                                        FUN3(VAR10, VAR22, "", VAR2->VAR54);
                                                                                                                                        return 0;
                                                                                                                                    VAR93:
                                                                                                                                        return VAR13 < 0 ? VAR13 : VAR94;