static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR1 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    TCGOpcode VAR15;
    const VAR7 *VAR16;
    VAR1 *VAR17;
    TCGArg VAR18;
    TCGCond VAR19;
    VAR12 = VAR3->VAR12;
    VAR13 = VAR3->VAR13;
    memset(VAR20, 0, VAR12 * sizeof(struct VAR21));
    VAR10 = VAR5 - VAR22;
    VAR17 = VAR6;
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
    {
        VAR15 = VAR22[VAR11];
        VAR16 = &VAR8[VAR15];
        if (VAR15 == VAR23)
        {
            int VAR24 = VAR6[0] >> 16;
            int VAR25 = VAR6[0] & 0xffff;
            for (VAR9 = VAR24 + 1; VAR9 < VAR24 + VAR25 + 1; VAR9++)
            {
                if (VAR20[VAR6[VAR9]].VAR26 == VAR27)
                {
                    VAR6[VAR9] = FUN2(VAR3, VAR6[VAR9]);
                }
                else
                {
                    for (VAR9 = VAR16->VAR24; VAR9 < VAR16->VAR24 + VAR16->VAR25; VAR9++)
                    {
                        if (VAR20[VAR6[VAR9]].VAR26 == VAR27)
                        {
                            VAR6[VAR9] = FUN2(VAR3, VAR6[VAR9]);
                            FUN3(VAR28) : FUN3(VAR29) : FUN3(and) : FUN3(or) : FUN3(VAR30) : FUN3(VAR31) : FUN3(VAR32) : if (VAR20[VAR6[1]].VAR26 == VAR33)
                            {
                                VAR18 = VAR6[1];
                                VAR6[1] = VAR6[2];
                                VAR6[2] = VAR18;
                                FUN3(VAR34) : if (VAR20[VAR6[0]].VAR26 == VAR33 && VAR20[VAR6[1]].VAR26 != VAR33)
                                {
                                    VAR18 = VAR6[0];
                                    VAR6[0] = VAR6[1];
                                    VAR6[1] = VAR18;
                                    VAR6[2] = FUN4(VAR6[2]);
                                    FUN3(VAR35) : if (VAR20[VAR6[1]].VAR26 == VAR33 && VAR20[VAR6[2]].VAR26 != VAR33)
                                    {
                                        VAR18 = VAR6[1];
                                        VAR6[1] = VAR6[2];
                                        VAR6[2] = VAR18;
                                        VAR6[3] = FUN4(VAR6[3]);
                                        FUN3(VAR36) : VAR19 = VAR6[5];
                                        if (VAR20[VAR6[1]].VAR26 == VAR33 && VAR20[VAR6[2]].VAR26 != VAR33)
                                        {
                                            VAR18 = VAR6[1];
                                            VAR6[1] = VAR6[2];
                                            VAR6[2] = VAR18;
                                            VAR19 = FUN4(VAR19);
                                            if (VAR6[0] == VAR6[3])
                                            {
                                                VAR18 = VAR6[3];
                                                VAR6[3] = VAR6[4];
                                                VAR6[4] = VAR18;
                                                VAR19 = FUN5(VAR19);
                                                VAR6[5] = VAR19;
                                                FUN3(VAR37) : FUN3(VAR38) : FUN3(VAR39) : FUN3(VAR40) : FUN3(VAR41) : if (VAR20[VAR6[1]].VAR26 == VAR33 && VAR20[VAR6[1]].VAR42 == 0)
                                                {
                                                    FUN3(VAR28) : FUN3(VAR37) : FUN3(VAR38) : FUN3(VAR39) : FUN3(VAR40) : FUN3(VAR41) : FUN3(or) : if (VAR20[VAR6[1]].VAR26 == VAR33)
                                                    {
                                                        if (VAR20[VAR6[2]].VAR26 == VAR33 && VAR20[VAR6[2]].VAR42 == 0)
                                                        {
                                                            if (FUN6(VAR6[0], VAR6[1]))
                                                            {
                                                                VAR22[VAR11] = VAR43;
                                                            }
                                                            else
                                                            {
                                                                VAR22[VAR11] = FUN7(VAR15);
                                                                FUN8(VAR3, VAR17, VAR6[0], VAR6[1]);
                                                                FUN3(and) : FUN3(VAR29) : if ((VAR20[VAR6[2]].VAR26 == VAR33 && VAR20[VAR6[2]].VAR42 == 0))
                                                                {
                                                                    FUN3(or) : FUN3(and) : if (FUN6(VAR6[0], VAR6[1])) { VAR22[VAR11] = VAR43; }
                                                                    else
                                                                    {
                                                                        VAR22[VAR11] = FUN7(VAR15);
                                                                        FUN8(VAR3, VAR17, VAR6[0], VAR6[1]);
                                                                        FUN3(VAR44) : if (FUN6(VAR6[0], VAR6[1]))
                                                                        {
                                                                            VAR6 += 2;
                                                                            VAR22[VAR11] = VAR43;
                                                                            if (VAR20[VAR6[1]].VAR26 != VAR33)
                                                                            {
                                                                                FUN8(VAR3, VAR17, VAR6[0], VAR6[1]);
                                                                                VAR6 += 2;
                                                                                VAR15 = FUN9(VAR15);
                                                                                VAR22[VAR11] = VAR15;
                                                                                VAR6[1] = VAR20[VAR6[1]].VAR42;
                                                                                FUN3(VAR45) : FUN10(VAR17, VAR6[0], VAR6[1]);
                                                                                VAR6 += 2;
                                                                                FUN3(not ) : FUN3(VAR46) : FUN3(VAR47) : FUN3(VAR48) : FUN3(VAR49) : FUN3(VAR50) : case VAR51 : case VAR52 : if (VAR20[VAR6[1]].VAR26 == VAR33)
                                                                                {
                                                                                    VAR18 = FUN11(VAR15, VAR20[VAR6[1]].VAR42, 0);
                                                                                    FUN10(VAR17, VAR6[0], VAR18);
                                                                                }
                                                                                else
                                                                                {
                                                                                    FUN12(VAR6[0]);
                                                                                    VAR17[0] = VAR6[0];
                                                                                    VAR17[1] = VAR6[1];
                                                                                    VAR6 += 2;
                                                                                    FUN3(VAR28) : FUN3(VAR29) : FUN3(or) : FUN3(and) : FUN3(VAR37) : FUN3(VAR38) : FUN3(VAR39) : FUN3(VAR40) : FUN3(VAR41) : FUN3(VAR53) : FUN3(VAR54) : FUN3(VAR30) : FUN3(VAR31) : FUN3(VAR32) : if (VAR20[VAR6[1]].VAR26 == VAR33 && VAR20[VAR6[2]].VAR26 == VAR33)
                                                                                    {
                                                                                        VAR18 = FUN11(VAR15, VAR20[VAR6[1]].VAR42, VAR20[VAR6[2]].VAR42);
                                                                                        FUN10(VAR17, VAR6[0], VAR18);
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        FUN12(VAR6[0]);
                                                                                        VAR17[0] = VAR6[0];
                                                                                        VAR17[1] = VAR6[1];
                                                                                        VAR17[2] = VAR6[2];
                                                                                        VAR17 += 3;
                                                                                        FUN3(VAR35) : if (VAR20[VAR6[1]].VAR26 == VAR33 && VAR20[VAR6[2]].VAR26 == VAR33)
                                                                                        {
                                                                                            VAR18 = FUN13(VAR15, VAR20[VAR6[1]].VAR42, VAR20[VAR6[2]].VAR42, VAR6[3]);
                                                                                            FUN10(VAR17, VAR6[0], VAR18);
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            FUN12(VAR6[0]);
                                                                                            VAR17[0] = VAR6[0];
                                                                                            VAR17[1] = VAR6[1];
                                                                                            VAR17[2] = VAR6[2];
                                                                                            VAR17[3] = VAR6[3];
                                                                                            VAR17 += 4;
                                                                                            VAR6 += 4;
                                                                                            FUN3(VAR34) : if (VAR20[VAR6[0]].VAR26 == VAR33 && VAR20[VAR6[1]].VAR26 == VAR33)
                                                                                            {
                                                                                                if (FUN13(VAR15, VAR20[VAR6[0]].VAR42, VAR20[VAR6[1]].VAR42, VAR6[2]))
                                                                                                {
                                                                                                    memset(VAR20, 0, VAR12 * sizeof(struct VAR21));
                                                                                                    VAR22[VAR11] = VAR55;
                                                                                                    VAR17[0] = VAR6[3];
                                                                                                    VAR17 += 1;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    VAR22[VAR11] = VAR43;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    memset(VAR20, 0, VAR12 * sizeof(struct VAR21));
                                                                                                    FUN12(VAR6[0]);
                                                                                                    VAR17[0] = VAR6[0];
                                                                                                    VAR17[1] = VAR6[1];
                                                                                                    VAR17[2] = VAR6[2];
                                                                                                    VAR17[3] = VAR6[3];
                                                                                                    VAR17 += 4;
                                                                                                    VAR6 += 4;
                                                                                                    FUN3(VAR36) : if (VAR20[VAR6[1]].VAR26 == VAR33 && VAR20[VAR6[2]].VAR26 == VAR33)
                                                                                                    {
                                                                                                        VAR18 = FUN13(VAR15, VAR20[VAR6[1]].VAR42, VAR20[VAR6[2]].VAR42, VAR6[5]);
                                                                                                        if (FUN6(VAR6[0], VAR6[4 - VAR18]))
                                                                                                        {
                                                                                                            VAR22[VAR11] = VAR43;
                                                                                                        }
                                                                                                        else if (VAR20[VAR6[4 - VAR18]].VAR26 == VAR33)
                                                                                                        {
                                                                                                            FUN10(VAR17, VAR6[0], VAR20[VAR6[4 - VAR18]].VAR42);
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            VAR22[VAR11] = FUN7(VAR15);
                                                                                                            FUN8(VAR3, VAR17, VAR6[0], VAR6[4 - VAR18]);
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            FUN12(VAR6[0]);
                                                                                                            VAR17[0] = VAR6[0];
                                                                                                            VAR17[1] = VAR6[1];
                                                                                                            VAR17[2] = VAR6[2];
                                                                                                            VAR17[3] = VAR6[3];
                                                                                                            VAR17[4] = VAR6[4];
                                                                                                            VAR17[5] = VAR6[5];
                                                                                                            VAR17 += 6;
                                                                                                            VAR6 += 6;
                                                                                                        case VAR23:
                                                                                                            VAR14 = (VAR6[0] >> 16) + (VAR6[0] & 0xffff);
                                                                                                            if (!(VAR6[VAR14 + 1] & (VAR56 | VAR57)))
                                                                                                            {
                                                                                                                for (VAR9 = 0; VAR9 < VAR13; VAR9++)
                                                                                                                {
                                                                                                                    FUN12(VAR9);
                                                                                                                    for (VAR9 = 0; VAR9 < (VAR6[0] >> 16); VAR9++)
                                                                                                                    {
                                                                                                                        FUN12(VAR6[VAR9 + 1]);
                                                                                                                        VAR9 = VAR14 + 3;
                                                                                                                        while (VAR9)
                                                                                                                        {
                                                                                                                            *VAR17 = *VAR6;
                                                                                                                            VAR6++;
                                                                                                                            VAR17++;
                                                                                                                            VAR9--;
                                                                                                                            if (VAR16->VAR58 & VAR59)
                                                                                                                            {
                                                                                                                                memset(VAR20, 0, VAR12 * sizeof(struct VAR21));
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                                for (VAR9 = 0; VAR9 < VAR16->VAR24; VAR9++)
                                                                                                                                {
                                                                                                                                    FUN12(VAR6[VAR9]);
                                                                                                                                    for (VAR9 = 0; VAR9 < VAR16->VAR60; VAR9++)
                                                                                                                                    {
                                                                                                                                        VAR17[VAR9] = VAR6[VAR9];
                                                                                                                                        VAR6 += VAR16->VAR60;
                                                                                                                                        VAR17 += VAR16->VAR60;
                                                                                                                                        return VAR17