void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    uint8_t VAR6 = VAR2->VAR6;
    uint8_t VAR7 = VAR2->VAR7;
    uint16_t VAR8 = VAR2->VAR8;
    uint8_t VAR9 = VAR2->VAR9;
    FUN2("", VAR3, VAR4, VAR5, VAR7, VAR6);
    if (!VAR2->VAR3 && VAR3)
    {
        FUN2("");
        VAR6 = 0;
        VAR9 = 0x0;
        VAR8 = 0x0;
    }
    else if (VAR2->VAR3 && !VAR3)
    {
        if (VAR2->VAR10)
        {
            uint8_t VAR11 = VAR8 >> (VAR2->VAR12 - 2);
            if (VAR9 == 0 && VAR11 == 2)
            {
                for (VAR8 = 0; VAR8 < VAR2->VAR13; VAR8++)
                {
                    VAR2->VAR14[VAR8] = 0xffff;
                }
            }
            else if (VAR9 == 3)
            {
                VAR2->VAR14[VAR8] = 0xffff;
            }
            else if (VAR6 >= 2 + 2 + VAR2->VAR12 + 16)
            {
                if (VAR9 == 1)
                {
                    VAR2->VAR14[VAR8] &= VAR2->VAR15;
                }
                else if (VAR9 == 0 && VAR11 == 1)
                {
                    for (VAR8 = 0; VAR8 < VAR2->VAR13; VAR8++)
                    {
                        VAR2->VAR14[VAR8] &= VAR2->VAR15;
                    }
                }
            }
        }
        VAR7 = 1;
    }
    else if (VAR3 && !VAR2->VAR4 && VAR4)
    {
        if (VAR6 == 0)
        {
            if (VAR5 == 0)
            {
                FUN2("");
                VAR6++;
            }
            else
            {
                FUN2("");
                VAR6 = 2;
            }
        }
        else if (VAR6 == 1)
        {
            if (VAR5 != 0)
            {
                FUN2("");
                VAR6++;
            }
            else
            {
                FUN2("");
            }
        }
        else if (VAR6 < 2 + 2)
        {
            VAR6++;
            VAR9 <<= 1;
            if (VAR5)
            {
                VAR9 += 1;
            }
        }
        else if (VAR6 < 2 + 2 + VAR2->VAR12)
        {
            VAR6++;
            VAR8 = ((VAR8 << 1) | VAR5);
            if (VAR6 == 2 + 2 + VAR2->VAR12)
            {
                FUN2("", VAR16[VAR9], VAR8, VAR2->VAR14[VAR8]);
                if (VAR9 == 2)
                {
                    VAR7 = 0;
                }
                VAR8 = VAR8 % VAR2->VAR13;
                if (VAR9 == 0)
                {
                    switch (VAR8 >> (VAR2->VAR12 - 2))
                    {
                    case 0:
                        FUN2("");
                        VAR2->VAR10 = 0;
                        break;
                    case 1:
                        FUN2("");
                        break;
                    case 2:
                        FUN2("");
                        break;
                    case 3:
                        FUN2("");
                        VAR2->VAR10 = 1;
                        break;
                    }
                }
                else
                {
                    VAR2->VAR15 = VAR2->VAR14[VAR8];
                }
            }
        }
        else if (VAR6 < 2 + 2 + VAR2->VAR12 + 16)
        {
            VAR6++;
            if (VAR9 == 2)
            {
                VAR7 = ((VAR2->VAR15 & 0x8000) != 0);
            }
            VAR2->VAR15 <<= 1;
            VAR2->VAR15 += VAR5;
        }
        else
        {
            FUN2("");
        }
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR3 = VAR3;
    VAR2->VAR4 = VAR4;
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = VAR8;
    VAR2->VAR9 = VAR9;
}