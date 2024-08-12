static bool FUN1(VAR1 *VAR2, uint32_t VAR3, MMUAccessType VAR4, ARMMMUIdx VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = FUN2(VAR2);
    int VAR13;
    bool VAR14 = FUN3(VAR2, VAR5);
    *VAR7 = VAR3;
    *VAR8 = 0;
    if (FUN4(VAR2, VAR5) || FUN5(VAR2, VAR3))
    {
        FUN6(VAR2, VAR5, VAR3, VAR8);
    }
    else
    {
        for (VAR13 = (int)VAR12->VAR15 - 1; VAR13 >= 0; VAR13--)
        {
            uint32_t VAR16 = VAR2->VAR17.VAR18[VAR13];
            uint32_t VAR19 = FUN7(VAR2->VAR17.VAR20[VAR13], 1, 5);
            uint32_t VAR21;
            bool VAR22 = false;
            if (!(VAR2->VAR17.VAR20[VAR13] & 0x1))
            {
                continue;
                if (!VAR19)
                {
                    FUN8(VAR23, "", VAR13);
                    continue;
                    VAR19++;
                    VAR21 = (1ull << VAR19) - 1;
                    if (VAR16 & VAR21)
                    {
                        FUN8(VAR23, "" VAR24 ""
                                                       "" VAR24 "",
                                      VAR13, VAR16, VAR21);
                        continue;
                        if (VAR3 < VAR16 || VAR3 > VAR16 + VAR21)
                        {
                            continue;
                            if (VAR19 >= 8)
                            {
                                int VAR25, VAR26;
                                uint32_t VAR27;
                                VAR19 -= 3;
                                VAR26 = ((VAR3 - VAR16) >> VAR19) & 0x7;
                                VAR22 = FUN7(VAR2->VAR17.VAR20[VAR13], VAR26 + 8, 1);
                                VAR27 = VAR22 ? 0x3 : 0x0;
                                for (VAR25 = 2; VAR25 <= 8 && VAR19 < VAR28; VAR25 *= 2)
                                {
                                    int VAR29 = VAR26 & ~(VAR25 - 1);
                                    uint32_t VAR30 = FUN7(VAR2->VAR17.VAR20[VAR13], VAR29 + 8, VAR25);
                                    if (VAR27 ^ VAR30)
                                    {
                                        VAR27 = (VAR27 << VAR25) | VAR27;
                                        VAR19++;
                                        if (VAR19 < VAR28)
                                        {
                                            FUN8(VAR31, ""
                                                                     "" VAR32 "",
                                                          VAR13, VAR19, VAR28);
                                            continue;
                                            if (VAR22)
                                            {
                                                continue;
                                                if (VAR13 == -1)
                                                {
                                                    if (!FUN9(VAR12, VAR5, VAR14))
                                                    {
                                                        VAR10->VAR33 = VAR34;
                                                        return true;
                                                        FUN6(VAR2, VAR5, VAR3, VAR8);
                                                    }
                                                    else
                                                    {
                                                        uint32_t VAR35 = FUN7(VAR2->VAR17.VAR36[VAR13], 8, 3);
                                                        uint32_t VAR37 = FUN7(VAR2->VAR17.VAR36[VAR13], 12, 1);
                                                        if (FUN10(VAR2, VAR3))
                                                        {
                                                            VAR37 = 1;
                                                            if (VAR14)
                                                            {
                                                                switch (VAR35)
                                                                {
                                                                case 0:
                                                                case 1:
                                                                case 5:
                                                                    break;
                                                                case 3:
                                                                    *VAR8 |= VAR38;
                                                                case 2:
                                                                case 6:
                                                                default:
                                                                    FUN8(VAR23, "" VAR24 "", VAR13, VAR35);
                                                                }
                                                                else
                                                                {
                                                                    switch (VAR35)
                                                                    {
                                                                    case 0:
                                                                        break;
                                                                    case 1:
                                                                    case 2:
                                                                    case 3:
                                                                        *VAR8 |= VAR38;
                                                                    case 5:
                                                                    case 6:
                                                                    default:
                                                                        FUN8(VAR23, "" VAR24 "", VAR13, VAR35);
                                                                        if (VAR37)
                                                                        {
                                                                            *VAR8 &= ~VAR39;
                                                                            VAR10->VAR33 = VAR40;
                                                                            VAR10->VAR41 = 1;
                                                                            return !(*VAR8 & (1 << VAR4));