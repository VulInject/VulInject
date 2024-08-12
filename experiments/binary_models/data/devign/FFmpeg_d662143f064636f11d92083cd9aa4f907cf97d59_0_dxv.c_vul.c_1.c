static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7;
    uint32_t VAR8, VAR9;
    int VAR10, VAR11, VAR12 = 0;
    int VAR13 = 4;
    int VAR14 = 0;
    int VAR15, VAR16;
    FUN2(VAR4->VAR17 + 0, FUN3(VAR7));
    FUN2(VAR4->VAR17 + 4, FUN3(VAR7));
    FUN2(VAR4->VAR17 + 8, FUN3(VAR7));
    FUN2(VAR4->VAR17 + 12, FUN3(VAR7));
    while (VAR13 + 2 <= VAR4->VAR18 / 4)
    {
        if (VAR14)
        {
            VAR14--;
            VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - 4));
            FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
            VAR13++;
            VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - 4));
            FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
            VAR13++;
        }
        else
        {
            if (VAR12 == 0)
            {
                VAR8 = FUN3(VAR7);
                VAR12 = 16;
            }
            VAR9 = VAR8 & 0x3;
            VAR8 >>= 2;
            VAR12--;
            switch (VAR9)
            {
            case 0:
                VAR16 = FUN5(VAR7) + 1;
                if (VAR16 == 256)
                {
                    do
                    {
                        VAR15 = FUN6(VAR7);
                        VAR16 += VAR15;
                    } while (VAR15 == 0xFFFF);
                }
                while (VAR16 && VAR13 + 4 <= VAR4->VAR18 / 4)
                {
                    VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - 4));
                    FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                    VAR13++;
                    VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - 4));
                    FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                    VAR13++;
                    VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - 4));
                    FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                    VAR13++;
                    VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - 4));
                    FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                    VAR13++;
                    VAR16--;
                }
                continue;
                break;
            case 1:
                VAR14 = FUN5(VAR7);
                if (VAR14 == 255)
                {
                    do
                    {
                        VAR15 = FUN6(VAR7);
                        VAR14 += VAR15;
                    } while (VAR15 == 0xFFFF);
                }
                VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - 4));
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
                VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - 4));
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
                break;
            case 2:
                VAR10 = 8 + FUN6(VAR7);
                if (VAR10 > VAR13 || (unsigned int)(VAR13 - VAR10) + 2 > VAR4->VAR18 / 4)
                    VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - VAR10));
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
                VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - VAR10));
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
                break;
            case 3:
                VAR11 = FUN3(VAR7);
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
                VAR11 = FUN3(VAR7);
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
                break;
            }
        }
        FUN7(4);
        if (VAR13 + 2 > VAR4->VAR18 / 4)
            if (VAR9)
            {
                if (VAR10 > VAR13 || (unsigned int)(VAR13 - VAR10) + 2 > VAR4->VAR18 / 4)
                    VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - VAR10));
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
                VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - VAR10));
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
            }
            else
            {
                FUN7(4);
                if (VAR9 && (VAR10 > VAR13 || (unsigned int)(VAR13 - VAR10) + 2 > VAR4->VAR18 / 4))
                    if (VAR9)
                        VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - VAR10));
                    else
                        VAR11 = FUN3(VAR7);
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
                FUN7(4);
                if (VAR9)
                    VAR11 = FUN4(VAR4->VAR17 + 4 * (VAR13 - VAR10));
                else
                    VAR11 = FUN3(VAR7);
                FUN2(VAR4->VAR17 + 4 * VAR13, VAR11);
                VAR13++;
            }
    }
    return 0;