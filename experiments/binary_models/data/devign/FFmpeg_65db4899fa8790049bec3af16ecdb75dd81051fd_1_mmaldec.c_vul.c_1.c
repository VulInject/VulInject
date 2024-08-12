static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    while (VAR4->VAR6)
    {
        VAR7 *VAR8;
        VAR9 *VAR10;
        MMAL_STATUS_T VAR11;
        VAR8 = FUN2(VAR4->VAR12->VAR13);
        if (!VAR8)
            return 0;
        VAR10 = VAR4->VAR6;
        FUN3(VAR8);
        VAR8->VAR14 = 0;
        VAR8->VAR15 = VAR10->VAR15;
        VAR8->VAR16 = VAR10->VAR16;
        VAR8->VAR17 = VAR10->VAR17;
        VAR8->VAR18 = VAR10->VAR18;
        VAR8->VAR19 = VAR10->VAR19;
        VAR8->VAR20 = VAR10->VAR21;
        VAR8->VAR22 = VAR4->VAR23->VAR24[0]->VAR25;
        if ((VAR11 = FUN4(VAR4->VAR23->VAR24[0], VAR8)))
        {
            FUN5(VAR8);
            FUN6(&VAR10->VAR21);
        }
        VAR4->VAR6 = VAR10->VAR26;
        if (VAR4->VAR27 == VAR10)
            VAR4->VAR27 = NULL;
        FUN7(VAR10);
        if (VAR11)
        {
            FUN8(VAR2, VAR28, "", (int)VAR11);
            return VAR29;
        }
    }
    return 0;
}