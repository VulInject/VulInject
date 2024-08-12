void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR6->VAR7 = VAR6->VAR8;
    if (VAR6->VAR9 & VAR10)
    {
        VAR6->VAR9 &= ~VAR10;
        VAR6->VAR11 |= VAR12;
        VAR6->VAR7 -= 4;
        if (VAR2->VAR13 == VAR14)
        {
            VAR6->VAR7 += 4;
            FUN3(VAR2);
            VAR6->VAR15 = VAR6->VAR11;
            VAR6->VAR11 &= ~VAR16;
            VAR6->VAR11 &= ~VAR17;
            VAR6->VAR11 |= VAR18;
            VAR6->VAR11 &= ~VAR19;
            VAR6->VAR11 &= ~VAR20;
            VAR6->VAR21->VAR22 = &VAR23;
            VAR6->VAR21->VAR24 = &VAR23;
            if (VAR2->VAR13 > 0 && VAR2->VAR13 < VAR25)
            {
                VAR6->VAR8 = (VAR2->VAR13 << 8);
                FUN4(VAR2, "", VAR2->VAR13);
                VAR2->VAR13 = -1;