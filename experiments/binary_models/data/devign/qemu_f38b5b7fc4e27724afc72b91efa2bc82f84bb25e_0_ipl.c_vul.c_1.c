static bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR4 = FUN2(0);
    if (VAR4)
    {
        VAR5 *VAR6 = (VAR5 *)FUN3(FUN4(FUN5(VAR4)->VAR7), VAR8);
        VAR9 *VAR10 = (VAR9 *)FUN3(FUN4(VAR4), VAR11);
        if (VAR6)
        {
            VAR12 *VAR13 = FUN6(VAR6);
            VAR2->VAR14.VAR15 = FUN7(VAR16);
            VAR2->VAR14.VAR17 = FUN7(VAR16 - VAR18);
            VAR2->VAR14.VAR19 = VAR20;
            VAR2->VAR14.VAR21.VAR22 = FUN8(VAR13->VAR23->VAR22);
            VAR2->VAR14.VAR21.VAR24 = VAR13->VAR23->VAR24 & 3;
            return true;
        }
        else if (VAR10)
        {
            VAR25 *VAR26 = FUN9(VAR10);
            VAR27 *VAR28 = FUN10(VAR26, VAR27, VAR26);
            VAR29 *VAR30 = FUN10(VAR28, VAR29, VAR28);
            VAR12 *VAR13 = FUN6(VAR30);
            VAR2->VAR14.VAR15 = FUN7(VAR31);
            VAR2->VAR14.VAR17 = FUN7(VAR31 - VAR18);
            VAR2->VAR14.VAR19 = VAR32;
            VAR2->VAR14.VAR33.VAR34 = FUN7(VAR10->VAR34);
            VAR2->VAR14.VAR33.VAR35 = FUN8(VAR10->VAR36);
            VAR2->VAR14.VAR33.VAR37 = FUN8(VAR10->VAR37);
            VAR2->VAR14.VAR33.VAR22 = FUN8(VAR13->VAR23->VAR22);
            VAR2->VAR14.VAR33.VAR24 = VAR13->VAR23->VAR24 & 3;
            return true;
            return false