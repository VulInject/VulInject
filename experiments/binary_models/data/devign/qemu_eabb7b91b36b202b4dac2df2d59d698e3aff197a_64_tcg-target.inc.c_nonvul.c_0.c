static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, intptr_t VAR8)
{
    int VAR9, VAR10;
    if (VAR6 < 0 && VAR5 < 0)
    {
        if (VAR11 == 64)
        {
            intptr_t VAR12 = (VAR13)VAR2->VAR14 + 5 + ~VAR5;
            intptr_t VAR15 = VAR8 - VAR12;
            if (VAR15 == (VAR16)VAR15)
            {
                FUN2(VAR2, VAR3, VAR4, 0, 0);
                FUN3(VAR2, (FUN4(VAR4) << 3) | 5);
                FUN5(VAR2, VAR15);
                return;
            }
            if (VAR8 == (VAR16)VAR8)
            {
                FUN2(VAR2, VAR3, VAR4, 0, 0);
                FUN3(VAR2, (FUN4(VAR4) << 3) | 4);
                FUN3(VAR2, (4 << 3) | 5);
                FUN5(VAR2, VAR8);
                return;
            }
            FUN6();
        }
        else
        {
            FUN2(VAR2, VAR3, VAR4, 0, 0);
            FUN3(VAR2, (VAR4 << 3) | 5);
            FUN5(VAR2, VAR8);
            return;
        }
    }
    if (VAR5 < 0)
    {
        VAR9 = 0, VAR10 = 4, VAR5 = 5;
    }
    else if (VAR8 == 0 && FUN4(VAR5) != VAR17)
    {
        VAR9 = 0, VAR10 = 0;
    }
    else if (VAR8 == (VAR18)VAR8)
    {
        VAR9 = 0x40, VAR10 = 1;
    }
    else
    {
        VAR9 = 0x80, VAR10 = 4;
    }
    if (VAR6 < 0 && FUN4(VAR5) != VAR19)
    {
        FUN2(VAR2, VAR3, VAR4, VAR5, 0);
        FUN3(VAR2, VAR9 | (FUN4(VAR4) << 3) | FUN4(VAR5));
    }
    else
    {
        if (VAR6 < 0)
        {
            VAR6 = 4;
        }
        else
        {
            FUN7(VAR6 != VAR19);
        }
        FUN2(VAR2, VAR3, VAR4, VAR5, VAR6);
        FUN3(VAR2, VAR9 | (FUN4(VAR4) << 3) | 4);
        FUN3(VAR2, (VAR7 << 6) | (FUN4(VAR6) << 3) | FUN4(VAR5));
    }
    if (VAR10 == 1)
    {
        FUN3(VAR2, VAR8);
    }
    else if (VAR10 == 4)
    {
        FUN5(VAR2, VAR8);
    }
}