static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = (VAR7 *)VAR4;
    VAR9 *VAR10 = FUN2();
    ram_addr_t VAR11;
    VAR5 *VAR12 = FUN3();
    if (!VAR10)
    {
        VAR4->VAR13.VAR14 = FUN4(VAR15);
        return;
    }
    VAR11 = (VAR8->VAR16 - 1) * VAR10->VAR17;
    if ((VAR11 % VAR18 == 0) && (VAR11 >= VAR10->VAR19))
    {
        VAR10->VAR20[(VAR11 - VAR10->VAR19) / VAR18] = 0;
        VAR6 = FUN5(VAR12, VAR11, 1).VAR6;
        FUN6(VAR6);
        if (VAR6)
        {
            int VAR21;
            int VAR22 = 1;
            ram_addr_t VAR23 = (VAR11 - VAR10->VAR19 - (VAR11 - VAR10->VAR19) % VAR10->VAR24);
            for (VAR21 = 0; VAR21 < (VAR10->VAR24 / VAR18); VAR21++)
            {
                if (VAR10->VAR20[VAR21 + VAR23 / VAR18])
                {
                    VAR22 = 0;
                    break;
                }
            }
            if (VAR22)
            {
                FUN7(VAR12, VAR6);
                FUN8(FUN9(VAR6));
            }
        }
    }
    VAR4->VAR13.VAR14 = FUN4(VAR25);
}