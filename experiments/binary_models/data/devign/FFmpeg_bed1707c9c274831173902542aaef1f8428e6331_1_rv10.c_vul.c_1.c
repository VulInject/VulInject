static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    if (VAR2->VAR6->VAR7 == 0x30202002 || VAR2->VAR6->VAR7 == 0x30203002)
    {
        if (FUN2(&VAR2->VAR8, 3))
        {
            FUN3(VAR2->VAR6, VAR9, "");
            return -1;
        }
    }
    VAR5 = FUN2(&VAR2->VAR8, 2);
    switch (VAR5)
    {
    case 0:
        VAR2->VAR10 = VAR11;
        break;
    case 1:
        VAR2->VAR10 = VAR11;
        break;
    case 2:
        VAR2->VAR10 = VAR12;
        break;
    case 3:
        VAR2->VAR10 = VAR13;
        break;
    default:
        FUN3(VAR2->VAR6, VAR9, "");
        return -1;
    }
    if (FUN2(&VAR2->VAR8, 1))
    {
        FUN3(VAR2->VAR6, VAR9, "");
        return -1;
    }
    VAR2->VAR14 = FUN2(&VAR2->VAR8, 5);
    if (VAR2->VAR14 == 0)
    {
        FUN3(VAR2->VAR6, VAR9, "");
        return -1;
    }
    if (VAR2->VAR6->VAR7 == 0x30203002)
    {
        if (FUN2(&VAR2->VAR8, 1))
        {
            FUN3(VAR2->VAR6, VAR9, "");
            return -1;
        }
    }
    if (VAR2->VAR6->VAR15)
    {
        if (FUN2(&VAR2->VAR8, 1))
        {
            FUN3(VAR2->VAR6, VAR9, "");
            return -1;
        }
        VAR3 = FUN2(&VAR2->VAR8, 15);
    }
    else
        VAR3 = FUN2(&VAR2->VAR8, 8) * 128;
    VAR3 |= VAR2->VAR16 & ~0x7FFF;
    if (VAR3 - VAR2->VAR16 > 0x4000)
        VAR3 -= 0x8000;
    if (VAR3 - VAR2->VAR16 < -0x4000)
        VAR3 += 0x8000;
    if (VAR3 != VAR2->VAR16)
    {
        if (VAR2->VAR10 != VAR13)
        {
            VAR2->VAR16 = VAR3;
            VAR2->VAR17 = VAR2->VAR16 - VAR2->VAR18;
            VAR2->VAR18 = VAR2->VAR16;
        }
        else
        {
            VAR2->VAR16 = VAR3;
            VAR2->VAR19 = VAR2->VAR17 - (VAR2->VAR18 - VAR2->VAR16);
            if (VAR2->VAR17 <= VAR2->VAR19 || VAR2->VAR17 <= VAR2->VAR17 - VAR2->VAR19 || VAR2->VAR17 <= 0)
            {
                FUN4("");
                return VAR20;
            }
        }
    }
    VAR4 = FUN5(VAR2);
    VAR2->VAR21 = FUN6(&VAR2->VAR8);
    VAR2->VAR22 = 1;
    VAR2->VAR23 = 1;
    VAR2->VAR24 = VAR2->VAR10 == VAR11;
    VAR2->VAR25 = 1;
    VAR2->VAR26 = 1;
    if (VAR2->VAR6->VAR27 & VAR28)
    {
        FUN3(VAR2->VAR6, VAR29, "", VAR3, VAR2->VAR30, VAR2->VAR31, VAR2->VAR10, VAR2->VAR14, VAR2->VAR21);
    }
    assert(VAR2->VAR10 != VAR13 || !VAR2->VAR32);
    return VAR2->VAR33 * VAR2->VAR34 - VAR4;
}