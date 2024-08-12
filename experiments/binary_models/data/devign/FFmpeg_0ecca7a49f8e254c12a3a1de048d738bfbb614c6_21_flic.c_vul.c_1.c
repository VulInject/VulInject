static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    int VAR10 = 0;
    unsigned int VAR11;
    int VAR12;
    int VAR13 = 0;
    unsigned char VAR14[VAR15];
    while (!VAR10)
    {
        if ((VAR13 = FUN2(VAR9, VAR14, VAR15)) != VAR15)
        {
            VAR13 = VAR16;
            break;
        }
        VAR11 = FUN3(&VAR14[0]);
        VAR12 = FUN4(&VAR14[4]);
        if ((VAR12 == VAR17) || (VAR12 == VAR18))
        {
            if (FUN5(VAR4, VAR11))
            {
                VAR13 = VAR16;
                break;
            }
            VAR4->VAR19 = VAR6->VAR20;
            VAR4->VAR21 = VAR6->VAR21;
            memcpy(VAR4->VAR22, VAR14, VAR15);
            VAR13 = FUN2(VAR9, VAR4->VAR22 + VAR15, VAR11 - VAR15);
            if (VAR13 != VAR11 - VAR15)
            {
                FUN6(VAR4);
                VAR13 = VAR16;
            }
            VAR6->VAR21 += VAR6->VAR23;
            VAR10 = 1;
        }
        else
        {
            FUN7(VAR9, VAR11 - 6, VAR24);
        }
    }
    return VAR13;
}