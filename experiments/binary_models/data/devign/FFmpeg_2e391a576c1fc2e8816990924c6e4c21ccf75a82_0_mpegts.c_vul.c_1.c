static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    const VAR3 *VAR17, *VAR18;
    int64_t VAR19;
    VAR8 = FUN2(VAR4 + 1) & 0x1fff;
    if (VAR8 && FUN3(VAR2, VAR8))
        return 0;
    VAR13 = VAR4[1] & 0x40;
    VAR6 = VAR2->VAR20[VAR8];
    if (VAR2->VAR21 && !VAR6 && VAR13)
    {
        FUN4(VAR2, VAR8, -1);
        VAR6 = VAR2->VAR20[VAR8];
        if (!VAR6)
            return 0;
        VAR2->VAR22 = VAR8;
        VAR12 = (VAR4[3] >> 4) & 3;
        if (VAR12 == 0)
            return 0;
        VAR15 = VAR12 & 2;
        VAR16 = VAR12 & 1;
        VAR14 = VAR15 && VAR4[4] != 0 && (VAR4[5] & 0x80);
        VAR9 = (VAR4[3] & 0xf);
        VAR10 = VAR16 ? (VAR6->VAR23 + 1) & 0x0f : VAR6->VAR23;
        VAR11 = VAR8 == 0x1FFF || VAR14 || VAR6->VAR23 < 0 || VAR10 == VAR9;
        VAR6->VAR23 = VAR9;
        if (!VAR11)
        {
            FUN5(VAR2->VAR24, VAR25, "", VAR8, VAR10, VAR9);
            VAR17 = VAR4 + 4;
            if (VAR15)
            {
                int64_t VAR26;
                int VAR27;
                if (FUN6(&VAR26, &VAR27, VAR4) == 0)
                    VAR6->VAR28 = VAR26 * 300 + VAR27;
                VAR17 += VAR17[0] + 1;
                VAR18 = VAR4 + VAR29;
                if (VAR17 >= VAR18 || !VAR16)
                    return 0;
                VAR19 = FUN7(VAR2->VAR24->VAR30);
                if (VAR19 >= 0)
                {
                    FUN8(VAR19 >= VAR29);
                    VAR2->VAR31 = VAR19 - VAR29;
                    if (VAR6->VAR32 == VAR33)
                    {
                        if (VAR13)
                        {
                            VAR7 = *VAR17++;
                            if (VAR7 > VAR18 - VAR17)
                                return 0;
                            if (VAR7 && VAR11)
                            {
                                FUN9(VAR2, VAR6, VAR17, VAR7, 0);
                                if (!VAR2->VAR20[VAR8])
                                    return 0;
                                VAR17 += VAR7;
                                if (VAR17 < VAR18)
                                {
                                    FUN9(VAR2, VAR6, VAR17, VAR18 - VAR17, 1);
                                }
                                else
                                {
                                    if (VAR11)
                                    {
                                        FUN9(VAR2, VAR6, VAR17, VAR18 - VAR17, 0);
                                        if (VAR2->VAR24->VAR34 & VAR35 && VAR2->VAR36 <= 0)
                                        {
                                            int VAR37;
                                            for (VAR37 = 0; VAR37 < VAR2->VAR38; VAR37++)
                                            {
                                                if (!VAR2->VAR39[VAR37].VAR40)
                                                    break;
                                                if (VAR37 == VAR2->VAR38 && VAR2->VAR38 > 0)
                                                {
                                                    int VAR41 = 0;
                                                    for (VAR37 = 0; VAR37 < VAR2->VAR24->VAR42; VAR37++)
                                                    {
                                                        VAR43 *VAR44 = VAR2->VAR24->VAR45[VAR37];
                                                        if (VAR44->VAR46->VAR47 >= 0)
                                                            VAR41 |= 1 << VAR44->VAR46->VAR47;
                                                        if ((VAR41 & (1 << VAR48) && VAR41 & (1 << VAR49)) || VAR19 > 100000)
                                                        {
                                                            FUN5(VAR2->VAR24, VAR25, "");
                                                            VAR2->VAR24->VAR34 &= ~VAR35;
                                                        }
                                                        else
                                                        {
                                                            int VAR50;
                                                            if ((VAR50 = VAR6->VAR51.VAR52.FUN10(VAR6, VAR17, VAR18 - VAR17, VAR13, VAR19 - VAR2->VAR53)) < 0)
                                                                return VAR50;
                                                            return 0