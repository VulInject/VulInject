void FUN1(target_ulong VAR1, int VAR2, int VAR3)
{
    if ((VAR2 < 0x80 && (VAR4->VAR5 & VAR6) == 0) || ((VAR4->VAR7->VAR8 & VAR9) && VAR2 >= 0x30 && VAR2 < 0x80 && !(VAR4->VAR10 & VAR11)))
        FUN2(VAR12);
    switch (VAR2)
    {
    case 0x24:
    case 0x2c:
        FUN3(VAR1, 0xf);
        if (VAR3 == 0)
        {
            VAR4->VAR13[1] = FUN4(VAR1 + 8);
            if (VAR2 == 0x2c)
                FUN5(&VAR4->VAR13[1]);
        }
        else if (VAR3 < 8)
        {
            VAR4->VAR13[VAR3] = FUN4(VAR1);
            VAR4->VAR13[VAR3 + 1] = FUN4(VAR1 + 8);
            if (VAR2 == 0x2c)
            {
                FUN5(&VAR4->VAR13[VAR3]);
                FUN5(&VAR4->VAR13[VAR3 + 1]);
            }
        }
        else
        {
            VAR4->VAR14[VAR3] = FUN4(VAR1);
            VAR4->VAR14[VAR3 + 1] = FUN4(VAR1 + 8);
            if (VAR2 == 0x2c)
            {
                FUN5(&VAR4->VAR14[VAR3]);
                FUN5(&VAR4->VAR14[VAR3 + 1]);
            }
        }
        break;
    default:
        FUN3(VAR1, 0x3);
        if (VAR3 == 0)
            VAR4->VAR13[1] = FUN6(VAR1 + 4, VAR2, 4, 0);
        else if (VAR3 < 8)
        {
            VAR4->VAR13[VAR3] = FUN6(VAR1, VAR2, 4, 0);
            VAR4->VAR13[VAR3 + 1] = FUN6(VAR1 + 4, VAR2, 4, 0);
        }
        else
        {
            VAR4->VAR14[VAR3] = FUN6(VAR1, VAR2, 4, 0);
            VAR4->VAR14[VAR3 + 1] = FUN6(VAR1 + 4, VAR2, 4, 0);
        }
        break;
    }
}