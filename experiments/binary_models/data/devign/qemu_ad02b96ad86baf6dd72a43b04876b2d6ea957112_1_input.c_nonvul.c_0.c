void FUN1(int VAR1, int VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    void *VAR9;
    int VAR10, VAR11;
    if (!FUN2() && !FUN3(VAR12))
    {
        return;
    }
    if (FUN4(&VAR13))
    {
        return;
    }
    VAR6 = FUN5(&VAR13);
    VAR8 = VAR6->VAR14;
    VAR9 = VAR6->VAR15;
    if (VAR8)
    {
        if (VAR6->VAR16)
        {
            VAR10 = 0x7fff;
            VAR11 = 0x7fff;
        }
        else
        {
            VAR10 = VAR17 - 1;
            VAR11 = VAR18 - 1;
        }
        switch (VAR19)
        {
        case 0:
            FUN6(VAR9, VAR1, VAR2, VAR3, VAR4);
            break;
        case 90:
            FUN6(VAR9, VAR10 - VAR2, VAR1, VAR3, VAR4);
            break;
        case 180:
            FUN6(VAR9, VAR10 - VAR1, VAR11 - VAR2, VAR3, VAR4);
            break;
        case 270:
            FUN6(VAR9, VAR2, VAR11 - VAR1, VAR3, VAR4);
            break;
        }
    }
}