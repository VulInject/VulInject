static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    KLVPacket VAR5;
    while (!VAR2->VAR6->VAR7)
    {
        if (FUN2(&VAR5, VAR2->VAR6) < 0)
            return -1;
        FUN3(VAR2, "", VAR5.VAR8);
        FUN4(VAR2, "" VAR9 "" VAR10 "", VAR5.VAR11, VAR5.VAR12);
        if (FUN5(VAR5.VAR8, VAR13))
        {
            int VAR14 = FUN6(VAR2, VAR4, &VAR5);
            if (VAR14 < 0)
            {
                FUN7(VAR2, VAR15, "");
                return -1;
            }
            return 0;
        }
        if (FUN5(VAR5.VAR8, VAR16))
        {
            int VAR17 = FUN8(VAR2, &VAR5);
            if (VAR17 < 0)
            {
                FUN7(VAR2, VAR15, "", FUN9(VAR5.VAR8 + 12));
                goto VAR18;
            }
            if (VAR2->VAR19[VAR17]->VAR20 == VAR21)
                goto VAR18;
            if (VAR5.VAR8[12] == 0x06 && VAR5.VAR8[13] == 0x01 && VAR5.VAR8[14] == 0x10)
            {
                if (FUN10(VAR2->VAR6, VAR2->VAR19[VAR17], VAR4, VAR5.VAR11) < 0)
                {
                    FUN7(VAR2, VAR15, "");
                    return -1;
                }
            }
            else
                FUN11(VAR2->VAR6, VAR4, VAR5.VAR11);
            VAR4->VAR22 = VAR17;
            VAR4->VAR23 = VAR5.VAR12;
            return 0;
        }
        else
        VAR18:
            FUN12(VAR2->VAR6, VAR5.VAR11);
    }
    return VAR24;
}