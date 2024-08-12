static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    const VAR12 *VAR13 = VAR6->VAR3;
    int VAR14 = VAR6->VAR15;
    int VAR16 = 0;
    int VAR17 = 0;
    int VAR18, VAR19;
    if (VAR13)
    {
        VAR20 *VAR21 = &VAR8->VAR22[0].VAR23;
        VAR19 = FUN2(VAR21, VAR13, VAR14, VAR8->VAR24 > 1);
        if (VAR19 < 0)
        {
            FUN3(VAR2, VAR25, "");
            return VAR19;
            VAR16 += VAR21->VAR26 * VAR21->VAR27;
            VAR8->VAR22[0].VAR28 = FUN4(VAR21->VAR29);
            VAR11->VAR30 = VAR16 + VAR8->VAR22[0].VAR31;
            if (!VAR11->VAR30)
            {
                *VAR4 = 0;
                return 0;
                VAR19 = FUN5(VAR2, VAR11, 0);
                if (VAR19 < 0)
                {
                    FUN3(VAR2, VAR25, "");
                    return VAR19;
                    VAR11->VAR30 = 0;
                    for (VAR18 = 0; VAR18 < VAR2->VAR32; VAR18++)
                    {
                        VAR33 *VAR34 = &VAR8->VAR35[VAR18];
                        if (!VAR34->copy)
                            VAR8->VAR22[VAR34->VAR36].VAR37[VAR34->VAR38] = (float *)VAR11->VAR39[VAR18];
                        for (VAR18 = 0; VAR18 < VAR8->VAR24; VAR18++)
                            VAR8->VAR22[VAR18].VAR40 = VAR11->VAR41[0];
                        for (VAR18 = 0; VAR18 < VAR8->VAR24; VAR18++)
                        {
                            VAR42 *VAR43 = &VAR8->VAR22[VAR18];
                            if (VAR18 && VAR13)
                            {
                                VAR19 = FUN2(&VAR43->VAR23, VAR13, VAR14, VAR18 != VAR8->VAR24 - 1);
                                if (VAR19 < 0)
                                {
                                    FUN3(VAR2, VAR25, "");
                                    return VAR19;
                                    VAR43->VAR28 = FUN4(VAR43->VAR23.VAR29);
                                    VAR19 = FUN6(&VAR8->VAR22[VAR18], VAR13, VAR43->VAR23.VAR44, VAR16);
                                    if (VAR19 < 0)
                                        return VAR19;
                                    if (VAR17 && VAR19 != VAR17)
                                    {
                                        FUN3(VAR2, VAR25, ""
                                                                    "");
                                        VAR17 = VAR19;
                                        VAR13 += VAR43->VAR23.VAR45;
                                        VAR14 -= VAR43->VAR23.VAR45;
                                        for (VAR18 = 0; VAR18 < VAR2->VAR32; VAR18++)
                                        {
                                            VAR33 *VAR34 = &VAR8->VAR35[VAR18];
                                            if (VAR34->copy)
                                            {
                                                memcpy(VAR11->VAR39[VAR18], VAR11->VAR39[VAR34->VAR46], VAR11->VAR41[0]);
                                            }
                                            else if (VAR34->VAR47)
                                            {
                                                memset(VAR11->VAR39[VAR18], 0, VAR11->VAR41[0]);
                                                if (VAR8->VAR48)
                                                {
                                                    VAR8->VAR49.FUN7((float *)VAR11->VAR39[VAR18], (float *)VAR11->VAR39[VAR18], VAR8->VAR50, FUN8(VAR17, 8));
                                                    VAR11->VAR30 = VAR17;
                                                    *VAR4 = !!VAR17;
                                                    return VAR6->VAR15