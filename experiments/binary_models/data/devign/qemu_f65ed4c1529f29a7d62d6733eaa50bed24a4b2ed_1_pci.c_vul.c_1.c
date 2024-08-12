static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    uint32_t VAR7, VAR8, VAR9;
    VAR5 = FUN2(*(VAR10 *)(VAR2->VAR11 + VAR12));
    for (VAR6 = 0; VAR6 < VAR13; VAR6++)
    {
        VAR4 = &VAR2->VAR14[VAR6];
        if (VAR6 == VAR15)
        {
            VAR9 = 0x30;
        }
        else
        {
            VAR9 = 0x10 + VAR6 * 4;
        }
        if (VAR4->VAR16 != 0)
        {
            if (VAR4->VAR17 & VAR18)
            {
                if (VAR5 & VAR19)
                {
                    VAR8 = FUN3(*(VAR20 *)(VAR2->VAR11 + VAR9));
                    VAR8 = VAR8 & ~(VAR4->VAR16 - 1);
                    VAR7 = VAR8 + VAR4->VAR16 - 1;
                    if (VAR7 <= VAR8 || VAR8 == 0 || VAR7 >= 0x10000)
                    {
                        VAR8 = -1;
                    }
                }
                else
                {
                    VAR8 = -1;
                }
            }
            else
            {
                if (VAR5 & VAR21)
                {
                    VAR8 = FUN3(*(VAR20 *)(VAR2->VAR11 + VAR9));
                    if (VAR6 == VAR15 && !(VAR8 & 1))
                        goto VAR22;
                    VAR8 = VAR8 & ~(VAR4->VAR16 - 1);
                    VAR7 = VAR8 + VAR4->VAR16 - 1;
                    if (VAR7 <= VAR8 || VAR8 == 0 || VAR7 == -1)
                    {
                        VAR8 = -1;
                    }
                }
                else
                {
                VAR22:
                    VAR8 = -1;
                }
            }
            if (VAR8 != VAR4->VAR23)
            {
                if (VAR4->VAR23 != -1)
                {
                    if (VAR4->VAR17 & VAR18)
                    {
                        int class;
                        class = VAR2->VAR11[0x0a] | (VAR2->VAR11[0x0b] << 8);
                        if (class == 0x0101 && VAR4->VAR16 == 4)
                        {
                            FUN4(VAR4->VAR23 + 2, 1);
                        }
                        else
                        {
                            FUN4(VAR4->VAR23, VAR4->VAR16);
                        }
                    }
                    else
                    {
                        FUN5(FUN6(VAR4->VAR23), VAR4->VAR16, VAR24);
                    }
                }
                VAR4->VAR23 = VAR8;
                if (VAR4->VAR23 != -1)
                {
                    VAR4->FUN7(VAR2, VAR6, VAR4->VAR23, VAR4->VAR16, VAR4->VAR17);
                }
            }
        }
    }