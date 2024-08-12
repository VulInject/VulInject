static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR5 *VAR8 = (VAR6 + VAR7);
    int VAR9, VAR10;
    if (VAR4->VAR11 >= VAR2->VAR12 || VAR4->VAR13 > VAR2->VAR12 || VAR4->VAR14 >= VAR2->VAR15 || VAR4->VAR16 > VAR2->VAR15 || VAR4->VAR11 >= VAR4->VAR13 || VAR4->VAR14 >= VAR4->VAR16)
        while ((VAR6 + 4) <= VAR8)
        {
            VAR9 = FUN2(&VAR6[0]);
            VAR10 = FUN2(&VAR6[2]) - 4;
            VAR6 += 4;
            VAR10 = ((VAR6 + VAR10) > VAR8) ? (VAR8 - VAR6) : VAR10;
            switch (VAR9)
            {
            case 0x2000:
            case 0x2100:
            case 0x2400:
            case 0x2500:
                FUN3(VAR4->VAR17, VAR9, VAR10, VAR6);
                break;
            case 0x2200:
            case 0x2300:
            case 0x2600:
            case 0x2700:
                FUN3(VAR4->VAR18, VAR9, VAR10, VAR6);
                break;
            case 0x3000:
            case 0x3100:
            case 0x3200:
                return FUN4(VAR2, VAR4, VAR9, VAR10, VAR6);
            }
            VAR6 += VAR10;
        }