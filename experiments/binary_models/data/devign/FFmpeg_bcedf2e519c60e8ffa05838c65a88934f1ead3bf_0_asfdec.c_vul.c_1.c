static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = 1;
    int VAR9 = FUN2(VAR4);
    int64_t VAR10, VAR11;
    VAR6->VAR12--;
    VAR6->VAR13 = VAR9 >> 7;
    VAR6->VAR14 = VAR6->VAR15[VAR9 & 0x7f];
    FUN3(VAR6->VAR16 >> 4, VAR6->VAR17, 0);
    FUN3(VAR6->VAR16 >> 2, VAR6->VAR18, 0);
    FUN3(VAR6->VAR16, VAR6->VAR19, 0);
    if (VAR6->VAR19 >= 8)
    {
        VAR6->VAR20 = FUN4(VAR4);
        if (VAR6->VAR20 >= (1 << 24) || VAR6->VAR20 <= 0)
        {
            FUN5(VAR2, VAR21, "");
            VAR6->VAR22 = FUN4(VAR4);
            if (VAR6->VAR19 >= 8 + 38 + 4)
            {
                FUN6(VAR4, 10);
                VAR10 = FUN7(VAR4);
                VAR11 = FUN7(VAR4);
                FUN6(VAR4, 12);
                FUN4(VAR4);
                FUN6(VAR4, VAR6->VAR19 - 8 - 38 - 4);
                if (VAR10 != -1)
                    VAR6->VAR22 = VAR10 / 10000;
                else
                    VAR6->VAR22 = VAR23;
            }
            else
                FUN6(VAR4, VAR6->VAR19 - 8);
            VAR8 += VAR6->VAR19;
        }
        else if (VAR6->VAR19 == 1)
        {
            VAR6->VAR24 = VAR6->VAR18;
            VAR6->VAR18 = 0;
            VAR6->VAR22 = VAR6->VAR25;
            VAR6->VAR26 = FUN2(VAR4);
            VAR8++;
        }
        else if (VAR6->VAR19 != 0)
        {
            FUN5(VAR2, VAR21, "", VAR6->VAR19);
            if (VAR6->VAR27 & 0x01)
            {
                FUN3(VAR6->VAR28 >> 6, VAR6->VAR29, 0);
                if (VAR6->VAR29 > VAR6->VAR30 - VAR8)
                {
                    if (VAR6->VAR29 > VAR6->VAR30 - VAR8 + VAR6->VAR31)
                    {
                        FUN5(VAR2, VAR21, "", VAR6->VAR30, VAR8);
                    }
                    else
                    {
                        int VAR32 = VAR6->VAR29 - (VAR6->VAR30 - VAR8);
                        VAR6->VAR30 += VAR32;
                        VAR6->VAR31 -= VAR32;
                    }
                    else
                    {
                        VAR6->VAR29 = VAR6->VAR30 - VAR8;
                        if (VAR6->VAR19 == 1)
                        {
                            VAR6->VAR33 = VAR6->VAR29;
                            if (VAR6->VAR33 > VAR6->VAR30)
                                VAR6->VAR30 -= VAR8;
                            return 0;