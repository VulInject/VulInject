static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    int VAR16;
    int VAR17;
    void *VAR18;
    if (VAR11 < 3)
    {
        FUN2(VAR2, VAR19, "");
        return VAR20;
        if ((VAR16 = FUN3(VAR2, VAR10)))
            return VAR16;
        VAR10 += 3;
        VAR11 -= 3;
        VAR17 = (VAR11 + VAR14->VAR21) / VAR14->VAR22;
        VAR8->VAR23 = VAR17 * VAR14->VAR24;
        if ((VAR16 = FUN4(VAR2, VAR8, 0)) < 0)
        {
            FUN2(VAR2, VAR19, "");
            return VAR16;
            VAR18 = VAR8->VAR3[0];
            if (VAR14->VAR21)
            {
                int VAR25 = VAR14->VAR22 - VAR14->VAR21;
                if (VAR11 >= VAR25)
                {
                    memcpy(VAR14->VAR26 + VAR14->VAR21, VAR10, VAR25);
                    VAR18 = FUN5(VAR2, VAR14->VAR26, VAR18, 1);
                    VAR10 += VAR25;
                    VAR11 -= VAR25;
                    VAR17--;
                }
                else
                {
                    memcpy(VAR14->VAR26 + VAR14->VAR21, VAR10, VAR11);
                    VAR14->VAR21 += VAR11;
                    return VAR6->VAR12;
                    if (VAR17)
                    {
                        FUN5(VAR2, VAR10, VAR18, VAR17);
                        VAR11 -= VAR17 * VAR14->VAR22;
                        if (VAR11)
                        {
                            VAR10 += VAR17 * VAR14->VAR22;
                            memcpy(VAR14->VAR26, VAR10, VAR11);
                            VAR14->VAR21 = VAR11;
                            *VAR4 = 1;
                            return VAR6->VAR12;