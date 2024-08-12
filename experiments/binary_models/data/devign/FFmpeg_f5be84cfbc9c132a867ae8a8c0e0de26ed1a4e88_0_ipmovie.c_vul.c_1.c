static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    if (VAR2->VAR8)
    {
        if (VAR2->VAR9 != VAR10)
        {
            VAR2->VAR8 += 6;
            VAR2->VAR11 -= 6;
            FUN2(VAR4, VAR2->VAR8, VAR12);
            VAR2->VAR8 = 0;
            if (VAR2->VAR11 != FUN3(VAR4, VAR6, VAR2->VAR11))
                return VAR13;
            VAR6->VAR14 = VAR2->VAR15;
            VAR6->VAR16 = VAR2->VAR17;
            if (VAR2->VAR9 != VAR10)
                VAR2->VAR17 += (VAR2->VAR11 / VAR2->VAR18 / (VAR2->VAR19 / 8));
            else
                VAR2->VAR17 += (VAR2->VAR11 - 6) / VAR2->VAR18;
            FUN4(NULL, "" VAR20 "", VAR6->VAR16, VAR2->VAR17);
            VAR7 = VAR21;
        }
        else if (VAR2->VAR22)
        {
            if (FUN5(VAR6, VAR2->VAR23 + VAR2->VAR24))
                return VAR25;
            if (VAR2->VAR26)
            {
                VAR27 *VAR28;
                VAR28 = FUN6(VAR6, VAR29, VAR30);
                if (VAR28)
                {
                    memcpy(VAR28, VAR2->VAR31, VAR30);
                    VAR2->VAR26 = 0;
                    VAR6->VAR32 = VAR2->VAR22;
                    FUN2(VAR4, VAR2->VAR22, VAR12);
                    VAR2->VAR22 = 0;
                    if (FUN7(VAR4, VAR6->VAR33, VAR2->VAR23) != VAR2->VAR23)
                    {
                        FUN8(VAR6);
                        return VAR13;
                        FUN2(VAR4, VAR2->VAR34, VAR12);
                        VAR2->VAR34 = 0;
                        if (FUN7(VAR4, VAR6->VAR33 + VAR2->VAR23, VAR2->VAR24) != VAR2->VAR24)
                        {
                            FUN8(VAR6);
                            return VAR13;
                            VAR6->VAR14 = VAR2->VAR35;
                            VAR6->VAR16 = VAR2->VAR36;
                            FUN4(NULL, "" VAR20 "", VAR6->VAR16);
                            VAR2->VAR36 += VAR2->VAR37;
                            VAR7 = VAR21;
                        }
                        else
                        {
                            FUN2(VAR4, VAR2->VAR38, VAR12);
                            VAR7 = VAR39;
                            return VAR7;