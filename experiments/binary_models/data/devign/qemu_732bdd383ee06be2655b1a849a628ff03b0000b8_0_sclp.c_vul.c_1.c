static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8 = FUN2();
    assert(VAR8);
    ram_addr_t VAR9 = (VAR6->VAR10 - 1) * VAR8->VAR11;
    VAR3 *VAR12 = FUN3();
    if ((VAR9 % VAR13 == 0) && (VAR9 >= VAR8->VAR14))
    {
        VAR8->VAR15[(VAR9 - VAR8->VAR14) / VAR13] = 0;
        VAR4 = FUN4(VAR12, VAR9, 1).VAR4;
        if (VAR4)
        {
            int VAR16;
            int VAR17 = 1;
            ram_addr_t VAR18 = (VAR9 - VAR8->VAR14 - (VAR9 - VAR8->VAR14) % VAR8->VAR19);
            for (VAR16 = 0; VAR16 < (VAR8->VAR19 / VAR13); VAR16++)
            {
                if (VAR8->VAR15[VAR16 + VAR18 / VAR13])
                {
                    VAR17 = 0;
                    break;
                }
            }
            if (VAR17)
            {
                FUN5(VAR12, VAR4);
                FUN6(FUN7(VAR4));
                FUN8(VAR4);
            }
        }
    }
    VAR2->VAR20.VAR21 = FUN9(VAR22);
}