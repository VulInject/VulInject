static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    int VAR6 = 0;
    int VAR7 = 0;
    uint64_t VAR8;
    if (VAR2->VAR9->VAR10 >= 1)
    {
        VAR11 *VAR12 = VAR2->VAR9->VAR13[VAR2->VAR9->VAR10 - 1]->VAR12;
        if (VAR12->VAR14 == VAR15)
            return 0;
        if (VAR5.VAR16 == 16)
        {
            VAR8 = VAR12->VAR17;
            VAR6 = FUN2(VAR12, VAR5);
            if (!VAR6)
            {
                VAR7 = FUN3(VAR2, VAR4, VAR5, VAR12, VAR12->VAR18 + VAR8);
                if (VAR7 == VAR5.VAR16)
                {
                    const uint8_t VAR19 = VAR12->VAR18[VAR8 + 19];
                    switch (VAR19)
                    {
                    case 1:
                        VAR12->VAR20 = VAR21;
                        break;
                    case 2:
                        VAR12->VAR20 = VAR22;
                        break;
                    default:
                        FUN4(VAR2, VAR23, "", VAR19);
                        break;
                    }
                    FUN5(VAR2, "", VAR12->VAR20);
                }
                else
                {
                    FUN4(VAR2, VAR24, "");
                }
            }
            else
            {
                FUN4(VAR2, VAR24, "");
            }
        }
        else
        {
            FUN4(VAR2, VAR23, "" VAR25 "", VAR5.VAR16);
        }
    }
    return VAR6;
}