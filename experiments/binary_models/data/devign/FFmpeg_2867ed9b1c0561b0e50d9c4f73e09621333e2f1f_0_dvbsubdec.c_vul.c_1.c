static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR2->VAR8;
    VAR3 *VAR9 = VAR4 + VAR5;
    int VAR10, VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18;
    if (VAR5 < 10)
        return;
    VAR10 = *VAR4++;
    VAR13 = FUN2(VAR7, VAR10);
    if (VAR13 == NULL)
    {
        VAR13 = FUN3(sizeof(VAR12));
        VAR13->VAR19 = VAR10;
        VAR13->VAR20 = VAR7->VAR21;
        VAR7->VAR21 = VAR13;
        VAR18 = ((*VAR4++) >> 3) & 1;
        VAR13->VAR22 = FUN4(VAR4);
        VAR4 += 2;
        VAR13->VAR23 = FUN4(VAR4);
        VAR4 += 2;
        if (VAR13->VAR22 * VAR13->VAR23 != VAR13->VAR5)
        {
            if (VAR13->VAR24 != 0)
                FUN5(VAR13->VAR24);
            VAR13->VAR5 = VAR13->VAR22 * VAR13->VAR23;
            VAR13->VAR24 = FUN6(VAR13->VAR5);
            VAR18 = 1;
            VAR13->VAR25 = 1 << (((*VAR4++) >> 2) & 7);
            VAR13->VAR26 = *VAR4++;
            if (VAR13->VAR25 == 8)
                VAR13->VAR27 = *VAR4++;
            else
            {
                VAR4 += 1;
                if (VAR13->VAR25 == 4)
                    VAR13->VAR27 = (((*VAR4++) >> 4) & 15);
                else
                    VAR13->VAR27 = (((*VAR4++) >> 2) & 3);
                FUN7(VAR2, VAR28, "", VAR10, VAR13->VAR22, VAR13->VAR23);
                if (VAR18)
                {
                    memset(VAR13->VAR24, VAR13->VAR27, VAR13->VAR5);
                    FUN7(VAR2, VAR28, "", VAR13->VAR27);
                    FUN8(VAR7, VAR13);
                    while (VAR4 + 5 < VAR9)
                    {
                        VAR11 = FUN4(VAR4);
                        VAR4 += 2;
                        VAR15 = FUN9(VAR7, VAR11);
                        if (VAR15 == NULL)
                        {
                            VAR15 = FUN3(sizeof(VAR14));
                            VAR15->VAR19 = VAR11;
                            VAR15->VAR20 = VAR7->VAR29;
                            VAR7->VAR29 = VAR15;
                            VAR15->VAR30 = (*VAR4) >> 6;
                            VAR17 = FUN3(sizeof(VAR16));
                            VAR17->VAR11 = VAR11;
                            VAR17->VAR10 = VAR10;
                            VAR17->VAR31 = FUN4(VAR4) & 0xfff;
                            VAR4 += 2;
                            VAR17->VAR32 = FUN4(VAR4) & 0xfff;
                            VAR4 += 2;
                            if ((VAR15->VAR30 == 1 || VAR15->VAR30 == 2) && VAR4 + 1 < VAR9)
                            {
                                VAR17->VAR33 = *VAR4++;
                                VAR17->VAR27 = *VAR4++;
                                VAR17->VAR34 = VAR13->VAR35;
                                VAR13->VAR35 = VAR17;
                                VAR17->VAR36 = VAR15->VAR35;
                                VAR15->VAR35 = VAR17;