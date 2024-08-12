static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 < VAR6)
    {
        if (VAR7 == 64 && VAR2->VAR8 & VAR9)
        {
            FUN2(VAR2->VAR10[VAR11[VAR5]]);
        }
        else if (VAR5 < VAR12)
        {
            FUN3(VAR2->VAR10[VAR13[VAR5]]);
        }
    }
    else if (VAR5 >= VAR14 && VAR5 < VAR14 + 8)
    {
        memcpy(VAR4, &VAR2->VAR15[VAR5 - VAR14], 10);
        memset(VAR4, 0, 10);
        return 10;
    }
    else if (VAR5 >= VAR16 && VAR5 < VAR16 + VAR6)
    {
        VAR5 -= VAR16;
        if (VAR5 < VAR12 || (VAR7 == 64 && VAR2->VAR8 & VAR9))
        {
            FUN4(VAR4, VAR2->VAR17[VAR5].FUN5(0));
            FUN4(VAR4 + 8, VAR2->VAR17[VAR5].FUN5(1));
            return 16;
        }
    }
    else
    {
        switch (VAR5)
        {
        case VAR18:
            if (VAR7 == 64 && VAR2->VAR8 & VAR9)
            {
                FUN2(VAR2->VAR19);
            }
            else
            {
                FUN3(VAR2->VAR19);
            }
        case VAR20:
            FUN3(VAR2->VAR21);
        case VAR22:
            FUN3(VAR2->VAR23[VAR24].VAR25);
        case VAR22 + 1:
            FUN3(VAR2->VAR23[VAR26].VAR25);
        case VAR22 + 2:
            FUN3(VAR2->VAR23[VAR27].VAR25);
        case VAR22 + 3:
            FUN3(VAR2->VAR23[VAR28].VAR25);
        case VAR22 + 4:
            FUN3(VAR2->VAR23[VAR29].VAR25);
        case VAR22 + 5:
            FUN3(VAR2->VAR23[VAR30].VAR25);
        case VAR14 + 8:
            FUN3(VAR2->VAR31);
        case VAR14 + 9:
            FUN3((VAR2->VAR32 & ~0x3800) | (VAR2->VAR33 & 0x7) << 11);
        case VAR14 + 10:
            FUN3(0);
        case VAR14 + 11:
            FUN3(0);
        case VAR14 + 12:
            FUN3(0);
        case VAR14 + 13:
            FUN3(0);
        case VAR14 + 14:
            FUN3(0);
        case VAR14 + 15:
            FUN3(0);
        case VAR34:
            FUN3(VAR2->VAR35);
        }
    }
    return 0;
}