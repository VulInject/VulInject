static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR1 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    TCGOpcode VAR15;
    const VAR7 *VAR16;
    VAR1 *VAR17;
    TCGArg VAR18;
    VAR12 = VAR3->VAR12;
    VAR13 = VAR3->VAR13;
    memset(VAR19, 0, VAR12 * sizeof(struct VAR20));
    VAR10 = VAR5 - VAR21;
    VAR17 = VAR6;
    for (VAR11 = 0; VAR11 < VAR10; VAR11++)
    {
        VAR15 = VAR21[VAR11];
        VAR16 = &VAR8[VAR15];
        if (!(VAR16->VAR22 & (VAR23 | VAR24)))
        {
            assert(VAR15 != VAR25);
            for (VAR9 = VAR16->VAR26; VAR9 < VAR16->VAR26 + VAR16->VAR27; VAR9++)
            {
                if (VAR19[VAR6[VAR9]].VAR28 == VAR29)
                {
                    VAR6[VAR9] = VAR19[VAR6[VAR9]].VAR30;
                }
            }
        }
        switch (VAR15)
        {
            FUN2(VAR31) : FUN2(VAR32) : FUN2(and) : FUN2(or) : FUN2(xor) : FUN2(VAR33) : FUN2(VAR34) : FUN2(VAR35) : if (VAR19[VAR6[1]].VAR28 == VAR36)
            {
                VAR18 = VAR6[1];
                VAR6[1] = VAR6[2];
                VAR6[2] = VAR18;
            }
            break;
            FUN2(VAR37) : if (VAR19[VAR6[0]].VAR28 == VAR36 && VAR19[VAR6[1]].VAR28 != VAR36)
            {
                VAR18 = VAR6[0];
                VAR6[0] = VAR6[1];
                VAR6[1] = VAR18;
                VAR6[2] = FUN3(VAR6[2]);
            }
            break;
            FUN2(VAR38) : if (VAR19[VAR6[1]].VAR28 == VAR36 && VAR19[VAR6[2]].VAR28 != VAR36)
            {
                VAR18 = VAR6[1];
                VAR6[1] = VAR6[2];
                VAR6[2] = VAR18;
                VAR6[3] = FUN3(VAR6[3]);
            }
            break;
        default:
            break;
        }
        switch (VAR15)
        {
            FUN2(VAR39) : FUN2(VAR40) : FUN2(VAR41) : FUN2(VAR42) : FUN2(VAR43) : if (VAR19[VAR6[1]].VAR28 == VAR36 && VAR19[VAR6[1]].VAR30 == 0)
            {
                VAR21[VAR11] = FUN4(VAR15);
                FUN5(VAR17, VAR6[0], 0, VAR12, VAR13);
                VAR6 += 3;
                VAR17 += 2;
                continue;
            }
            break;
        default:
            break;
        }
        switch (VAR15)
        {
            FUN2(VAR31) : FUN2(VAR44) : FUN2(VAR39) : FUN2(VAR40) : FUN2(VAR41) : FUN2(VAR42) : FUN2(VAR43) : FUN2(or) : FUN2(xor) : if (VAR19[VAR6[1]].VAR28 == VAR36) { break; }
            if (VAR19[VAR6[2]].VAR28 == VAR36 && VAR19[VAR6[2]].VAR30 == 0)
            {
                if ((VAR19[VAR6[0]].VAR28 == VAR29 && VAR19[VAR6[0]].VAR30 == VAR6[1]) || VAR6[0] == VAR6[1])
                {
                    VAR21[VAR11] = VAR45;
                }
                else
                {
                    VAR21[VAR11] = FUN6(VAR15);
                    FUN7(VAR17, VAR6[0], VAR6[1], VAR12, VAR13);
                    VAR17 += 2;
                }
                VAR6 += 3;
                continue;
            }
            break;
        default:
            break;
        }
        switch (VAR15)
        {
            FUN2(and) : FUN2(VAR32) : if ((VAR19[VAR6[2]].VAR28 == VAR36 && VAR19[VAR6[2]].VAR30 == 0))
            {
                VAR21[VAR11] = FUN4(VAR15);
                FUN5(VAR17, VAR6[0], 0, VAR12, VAR13);
                VAR6 += 3;
                VAR17 += 2;
                continue;
            }
            break;
        default:
            break;
        }
        switch (VAR15)
        {
            FUN2(or) : FUN2(and) : if (VAR6[1] == VAR6[2])
            {
                if (VAR6[1] == VAR6[0])
                {
                    VAR21[VAR11] = VAR45;
                }
                else
                {
                    VAR21[VAR11] = FUN6(VAR15);
                    FUN7(VAR17, VAR6[0], VAR6[1], VAR12, VAR13);
                    VAR17 += 2;
                }
                VAR6 += 3;
                continue;
            }
            break;
        default:
            break;
        }
        switch (VAR15)
        {
            FUN2(VAR46) : if ((VAR19[VAR6[1]].VAR28 == VAR29 && VAR19[VAR6[1]].VAR30 == VAR6[0]) || VAR6[0] == VAR6[1])
            {
                VAR6 += 2;
                VAR21[VAR11] = VAR45;
                break;
            }
            if (VAR19[VAR6[1]].VAR28 != VAR36)
            {
                FUN7(VAR17, VAR6[0], VAR6[1], VAR12, VAR13);
                VAR17 += 2;
                VAR6 += 2;
                break;
            }
            VAR15 = FUN4(VAR15);
            VAR21[VAR11] = VAR15;
            VAR6[1] = VAR19[VAR6[1]].VAR30;
            FUN2(VAR47) : FUN5(VAR17, VAR6[0], VAR6[1], VAR12, VAR13);
            VAR17 += 2;
            VAR6 += 2;
            break;
            FUN2(not ) : FUN2(VAR48) : FUN2(VAR49) : FUN2(VAR50) : FUN2(VAR51) : FUN2(VAR52) : case VAR53 : case VAR54 : if (VAR19[VAR6[1]].VAR28 == VAR36)
            {
                VAR21[VAR11] = FUN4(VAR15);
                VAR18 = FUN8(VAR15, VAR19[VAR6[1]].VAR30, 0);
                FUN5(VAR17, VAR6[0], VAR18, VAR12, VAR13);
            }
            else
            {
                FUN9(VAR6[0], VAR12, VAR13);
                VAR17[0] = VAR6[0];
                VAR17[1] = VAR6[1];
            }
            VAR17 += 2;
            VAR6 += 2;
            break;
            FUN2(VAR31) : FUN2(VAR44) : FUN2(VAR32) : FUN2(or) : FUN2(and) : FUN2(xor) : FUN2(VAR39) : FUN2(VAR40) : FUN2(VAR41) : FUN2(VAR42) : FUN2(VAR43) : FUN2(VAR55) : FUN2(VAR56) : FUN2(VAR33) : FUN2(VAR34) : FUN2(VAR35) : if (VAR19[VAR6[1]].VAR28 == VAR36 && VAR19[VAR6[2]].VAR28 == VAR36)
            {
                VAR21[VAR11] = FUN4(VAR15);
                VAR18 = FUN8(VAR15, VAR19[VAR6[1]].VAR30, VAR19[VAR6[2]].VAR30);
                FUN5(VAR17, VAR6[0], VAR18, VAR12, VAR13);
                VAR17 += 2;
            }
            else
            {
                FUN9(VAR6[0], VAR12, VAR13);
                VAR17[0] = VAR6[0];
                VAR17[1] = VAR6[1];
                VAR17[2] = VAR6[2];
                VAR17 += 3;
            }
            VAR6 += 3;
            break;
            FUN2(VAR38) : if (VAR19[VAR6[1]].VAR28 == VAR36 && VAR19[VAR6[2]].VAR28 == VAR36)
            {
                VAR21[VAR11] = FUN4(VAR15);
                VAR18 = FUN10(VAR15, VAR19[VAR6[1]].VAR30, VAR19[VAR6[2]].VAR30, VAR6[3]);
                FUN5(VAR17, VAR6[0], VAR18, VAR12, VAR13);
                VAR17 += 2;
            }
            else
            {
                FUN9(VAR6[0], VAR12, VAR13);
                VAR17[0] = VAR6[0];
                VAR17[1] = VAR6[1];
                VAR17[2] = VAR6[2];
                VAR17[3] = VAR6[3];
                VAR17 += 4;
            }
            VAR6 += 4;
            break;
            FUN2(VAR37) : if (VAR19[VAR6[0]].VAR28 == VAR36 && VAR19[VAR6[1]].VAR28 == VAR36)
            {
                if (FUN10(VAR15, VAR19[VAR6[0]].VAR30, VAR19[VAR6[1]].VAR30, VAR6[2]))
                {
                    memset(VAR19, 0, VAR12 * sizeof(struct VAR20));
                    VAR21[VAR11] = VAR57;
                    VAR17[0] = VAR6[3];
                    VAR17 += 1;
                }
                else
                {
                    VAR21[VAR11] = VAR45;
                }
            }
            else
            {
                memset(VAR19, 0, VAR12 * sizeof(struct VAR20));
                FUN9(VAR6[0], VAR12, VAR13);
                VAR17[0] = VAR6[0];
                VAR17[1] = VAR6[1];
                VAR17[2] = VAR6[2];
                VAR17[3] = VAR6[3];
                VAR17 += 4;
            }
            VAR6 += 4;
            break;
        case VAR25:
            VAR14 = (VAR6[0] >> 16) + (VAR6[0] & 0xffff);
            if (!(VAR6[VAR14 + 1] & (VAR58 | VAR59)))
            {
                for (VAR9 = 0; VAR9 < VAR13; VAR9++)
                {
                    FUN9(VAR9, VAR12, VAR13);
                }
            }
            for (VAR9 = 0; VAR9 < (VAR6[0] >> 16); VAR9++)
            {
                FUN9(VAR6[VAR9 + 1], VAR12, VAR13);
            }
            VAR9 = VAR14 + 3;
            while (VAR9)
            {
                *VAR17 = *VAR6;
                VAR6++;
                VAR17++;
                VAR9--;
            }
            break;
        case VAR60:
        case VAR61:
        case VAR57:
            memset(VAR19, 0, VAR12 * sizeof(struct VAR20));
            for (VAR9 = 0; VAR9 < VAR16->VAR62; VAR9++)
            {
                *VAR17 = *VAR6;
                VAR6++;
                VAR17++;
            }
            break;
        default:
            for (VAR9 = 0; VAR9 < VAR16->VAR26; VAR9++)
            {
                FUN9(VAR6[VAR9], VAR12, VAR13);
            }
            for (VAR9 = 0; VAR9 < VAR16->VAR62; VAR9++)
            {
                VAR17[VAR9] = VAR6[VAR9];
            }
            VAR6 += VAR16->VAR62;
            VAR17 += VAR16->VAR62;
            break;
        }
    }
    return VAR17;
}