static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11;
    for (VAR11 = 0; VAR11 < VAR8->VAR12->VAR13; VAR11++)
    {
        int VAR14 = VAR4->VAR15->VAR14;
        int VAR16 = VAR4->VAR15->VAR16;
        int VAR17 = VAR8->VAR18->VAR19[VAR11];
        int VAR20 = FUN2(VAR17);
        int VAR21 = (VAR8->VAR12->VAR22[VAR11].VAR23 + 8) / 8;
        if (VAR11 == 1 || VAR11 == 2)
        {
            VAR14 >>= VAR8->VAR12->VAR24;
            VAR16 >>= VAR8->VAR12->VAR25;
        }
        if (VAR8->VAR26 < VAR20)
        {
            FUN3(VAR8->VAR27);
            VAR8->VAR27 = FUN4(2 * 64 + 5 * VAR20);
            VAR8->VAR26 = VAR20;
        }
        for (VAR10 = 0; VAR10 < VAR16; VAR10++)
        {
            if ((VAR10 ^ VAR5) & 1)
            {
                VAR28 *VAR29 = &VAR8->VAR29->VAR30[VAR11][VAR10 * VAR17];
                VAR28 *VAR18 = &VAR8->VAR18->VAR30[VAR11][VAR10 * VAR17];
                VAR28 *VAR31 = &VAR8->VAR31->VAR30[VAR11][VAR10 * VAR17];
                VAR28 *VAR32 = &VAR4->VAR30[VAR11][VAR10 * VAR4->VAR19[VAR11]];
                int VAR33 = VAR10 == 1 || VAR10 + 2 == VAR16 ? 2 : VAR8->VAR33;
                int VAR34 = VAR10 + 1 < VAR16 ? VAR17 : -VAR17;
                int VAR35 = VAR10 ? -VAR17 : VAR17;
                if (VAR10 <= 1 || VAR10 + 2 >= VAR16)
                {
                    int VAR36;
                    VAR28 *VAR37 = VAR8->VAR27 + 64 + 2 * VAR20;
                    if (VAR33 < 2)
                        memcpy(VAR37 + 2 * VAR35, VAR18 + 2 * VAR35, VAR14 * VAR21);
                    memcpy(VAR37 + VAR35, VAR18 + VAR35, VAR14 * VAR21);
                    memcpy(VAR37, VAR18, VAR14 * VAR21);
                    if (VAR34 != VAR35)
                    {
                        memcpy(VAR37 + VAR34, VAR18 + VAR34, VAR14 * VAR21);
                        if (VAR33 < 2)
                            memcpy(VAR37 + 2 * VAR34, VAR18 + 2 * VAR34, VAR14 * VAR21);
                    }
                    VAR18 = VAR37;
                }
                VAR8->FUN5(VAR32, VAR29, VAR18, VAR31, VAR14, VAR34, VAR35, VAR5 ^ VAR6, VAR33);
            }
            else
            {
                memcpy(&VAR4->VAR30[VAR11][VAR10 * VAR4->VAR19[VAR11]], &VAR8->VAR18->VAR30[VAR11][VAR10 * VAR17], VAR14 * VAR21);
            }
        }
    }
    FUN6();
}