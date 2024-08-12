static int FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR3;
    struct VAR7 *VAR8;
    struct VAR9 *VAR10;
    uint32_t VAR11, VAR12;
    int VAR13;
    VAR6->VAR14 = 0;
    VAR11 = FUN2(VAR2);
    while (VAR11 != 0)
    {
        VAR8 = FUN3(struct VAR7, 1);
        VAR8->VAR11 = VAR11;
        VAR8->VAR15 = FUN2(VAR2);
        VAR8->VAR16 = FUN2(VAR2);
        VAR8->VAR17 = FUN2(VAR2);
        VAR8->VAR18 = FUN2(VAR2);
        VAR12 = FUN4(VAR8->VAR17);
        if (!VAR12)
        {
            return -VAR19;
            VAR8->VAR20 = FUN5(VAR12, VAR8->VAR15, VAR8->VAR16, NULL, 0);
            if (!VAR8->VAR20)
            {
                return -VAR19;
                VAR8->VAR14 = FUN6(VAR12) * VAR8->VAR15 * VAR8->VAR16;
                VAR8->VAR21 = FUN7(VAR22, VAR8->VAR18);
                VAR8->VAR23 = FUN7(struct VAR24, VAR8->VAR18);
                for (VAR13 = 0; VAR13 < VAR8->VAR18; VAR13++)
                {
                    VAR8->VAR21[VAR13] = FUN8(VAR2);
                    VAR8->VAR23[VAR13].VAR25 = FUN2(VAR2);
                    FUN9(VAR2, (void *)FUN10(VAR8->VAR20), FUN11(VAR8->VAR20) * VAR8->VAR16);
                    for (VAR13 = 0; VAR13 < VAR8->VAR18; VAR13++)
                    {
                        hwaddr VAR26 = VAR8->VAR23[VAR13].VAR25;
                        VAR8->VAR23[VAR13].VAR27 = FUN12(VAR8->VAR21[VAR13], &VAR26, 1);
                        if (!VAR8->VAR23[VAR13].VAR27 || VAR26 != VAR8->VAR23[VAR13].VAR25)
                        {
                            return -VAR19;
                            FUN13(&VAR6->VAR28, VAR8, VAR29);
                            VAR6->VAR14 += VAR8->VAR14;
                            VAR11 = FUN2(VAR2);
                            FUN14(VAR2, &VAR30, VAR6, 1);
                            for (VAR13 = 0; VAR13 < VAR6->VAR31.VAR32; VAR13++)
                            {
                                VAR10 = &VAR6->VAR10[VAR13];
                                if (!VAR10->VAR11)
                                {
                                    continue;
                                    VAR8 = FUN15(VAR6, VAR10->VAR11);
                                    if (!VAR8)
                                    {
                                        return -VAR19;
                                        VAR10->VAR33 = FUN16(VAR8->VAR20);
                                        if (!VAR10->VAR33)
                                        {
                                            return -VAR19;
                                            FUN17(VAR10->VAR34, VAR10->VAR33);
                                            FUN18(VAR10->VAR34, 0, 0, VAR10->VAR15, VAR10->VAR16);
                                            FUN19(VAR6, &VAR10->VAR35);
                                            VAR8->VAR36 |= (1 << VAR13);
                                            return 0;