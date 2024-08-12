static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4;
    if (VAR2->VAR5->VAR6 == VAR2->VAR7)
    {
        VAR2->VAR8 |= VAR9;
        return;
    }
    switch (VAR2->VAR5->VAR10)
    {
    case VAR11:
        VAR2->VAR5->VAR12 = VAR3 & 0x831f37ff;
        VAR2->VAR5->VAR6++;
        VAR2->VAR5->VAR10 = VAR13;
        VAR2->VAR5->VAR14 = FUN2(VAR2->VAR5->VAR12, 0, 11);
        VAR2->VAR5->VAR15 = FUN2(VAR2->VAR5->VAR12, 16, 5);
        break;
    case VAR13:
        if (VAR2->VAR5->VAR12 & 0x2000)
        {
            VAR2->VAR5->VAR16 = VAR3;
            VAR2->VAR5->VAR6++;
            VAR4 = (VAR2->VAR5->VAR14 + VAR2->VAR5->VAR15 + 3) >> 2;
            switch ((VAR4 >> 24) & 3)
            {
            case 1:
                VAR4 = (-VAR4) & 3;
                break;
            case 2:
                VAR4 = (-VAR4) & 7;
                break;
            default:
                VAR4 = 0;
            }
            VAR2->VAR5->VAR17 = VAR4;
            VAR2->VAR5->VAR18 = 0;
        }
        FUN3("", VAR2->VAR5->VAR14, VAR2->VAR5->VAR15, VAR2->VAR5->VAR17, VAR2->VAR5->VAR12);
        VAR2->VAR5->VAR10 = VAR19;
        break;
    case VAR19:
        if (VAR2->VAR5->VAR15 >= 4)
        {
            VAR2->VAR5->VAR15 -= 4;
            break;
        }
        if (VAR2->VAR5->VAR14 <= 0 && VAR2->VAR5->VAR17 != 0)
        {
            VAR2->VAR5->VAR17--;
        }
        else
        {
            VAR4 = FUN4(4, VAR2->VAR5->VAR14 + VAR2->VAR5->VAR15);
            while (VAR2->VAR5->VAR15)
            {
                VAR3 >>= 8;
                VAR4--;
                VAR2->VAR5->VAR15--;
            }
            while (VAR4--)
            {
                VAR2->VAR5->VAR20[VAR2->VAR5->VAR18] = VAR3 & 0xff;
                VAR2->VAR5->VAR18++;
                VAR3 >>= 8;
                VAR2->VAR5->VAR14--;
            }
            VAR2->VAR5->VAR6++;
        }
        if (VAR2->VAR5->VAR14 <= 0 && VAR2->VAR5->VAR17 == 0)
        {
            if (VAR2->VAR5->VAR12 & 0x1000)
            {
                FUN5(VAR2);
            }
            if (VAR2->VAR5->VAR12 & 0x80000000)
            {
                VAR2->VAR8 |= VAR21;
            }
            VAR2->VAR5->VAR10 = VAR11;
        }
        break;
    }
}