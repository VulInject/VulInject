static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, TCGv VAR6)
{
    uint32_t VAR7;
    uint16_t VAR8;
    TCGv VAR9;
    TCGv VAR10;
    uint32_t VAR11, VAR12;
    VAR7 = VAR5->VAR13;
    VAR8 = FUN2(VAR3, VAR5->VAR13);
    VAR5->VAR13 += 2;
    if ((VAR8 & 0x800) == 0 && !FUN3(VAR5->VAR3, VAR14))
        return VAR15;
    if (VAR8 & 0x100)
    {
        if (!FUN3(VAR5->VAR3, VAR16))
            return VAR15;
        if ((VAR8 & 0x30) > 0x10)
        {
            if ((VAR8 & 0x30) == 0x20)
            {
                VAR11 = (VAR17)FUN2(VAR3, VAR5->VAR13);
                VAR5->VAR13 += 2;
            }
            else
            {
                VAR11 = FUN4(VAR3, VAR5);
            }
            else
            {
                VAR11 = 0;
                VAR10 = FUN5();
                if ((VAR8 & 0x44) == 0)
                {
                    VAR9 = FUN6(VAR8, VAR10);
                }
                else
                {
                    VAR9 = VAR15;
                    if ((VAR8 & 0x80) == 0)
                    {
                        if (FUN7(VAR6))
                        {
                            VAR6 = FUN8(VAR7 + VAR11);
                            VAR11 = 0;
                            if (!FUN7(VAR9))
                            {
                                FUN9(VAR10, VAR9, VAR6);
                                VAR9 = VAR10;
                            }
                            else
                            {
                                VAR9 = VAR6;
                                if (!FUN7(VAR9))
                                {
                                    if (VAR11 != 0)
                                    {
                                        FUN10(VAR10, VAR9, VAR11);
                                        VAR9 = VAR10;
                                    }
                                    else
                                    {
                                        VAR9 = FUN8(VAR11);
                                        if ((VAR8 & 3) != 0)
                                        {
                                            VAR6 = FUN11(VAR5, VAR18, VAR9, 0);
                                            if ((VAR8 & 0x44) == 4)
                                            {
                                                VAR9 = FUN6(VAR8, VAR10);
                                                FUN9(VAR10, VAR9, VAR6);
                                                VAR9 = VAR10;
                                            }
                                            else
                                            {
                                                VAR9 = VAR6;
                                                if ((VAR8 & 3) > 1)
                                                {
                                                    if ((VAR8 & 3) == 2)
                                                    {
                                                        VAR12 = (VAR17)FUN2(VAR3, VAR5->VAR13);
                                                        VAR5->VAR13 += 2;
                                                    }
                                                    else
                                                    {
                                                        VAR12 = FUN4(VAR3, VAR5);
                                                    }
                                                    else
                                                    {
                                                        VAR12 = 0;
                                                        if (VAR12 != 0)
                                                        {
                                                            FUN10(VAR10, VAR9, VAR12);
                                                            VAR9 = VAR10;
                                                        }
                                                        else
                                                        {
                                                            VAR10 = FUN5();
                                                            VAR9 = FUN6(VAR8, VAR10);
                                                            if (!FUN7(VAR6))
                                                            {
                                                                FUN9(VAR10, VAR9, VAR6);
                                                                if ((VAR19)VAR8)
                                                                    FUN10(VAR10, VAR10, (VAR19)VAR8);
                                                            }
                                                            else
                                                            {
                                                                FUN10(VAR10, VAR9, VAR7 + (VAR19)VAR8);
                                                                VAR9 = VAR10;
                                                                return VAR9