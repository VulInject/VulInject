static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int64_t VAR9)
{
    static VAR10 *VAR11 = NULL;
    int VAR12 = 65536;
    int VAR13, VAR14, VAR15;
    VAR16 *VAR17;
    AVPacket VAR18;
    if (VAR9 == VAR19)
    {
        fprintf(VAR20, "");
        if (VAR21)
            return;
        VAR17 = VAR4->VAR22->VAR23;
        if (!VAR11)
        {
            VAR11 = FUN2(VAR12);
            if (VAR17->VAR24 == VAR25)
                VAR14 = 2;
            else
                VAR14 = 1;
            for (VAR15 = 0; VAR15 < VAR14; VAR15++)
            {
                VAR8->VAR9 = FUN3(VAR9, VAR6->VAR22->VAR26, VAR27);
                VAR13 = FUN4(VAR17, VAR11, VAR12, VAR8);
                FUN5(&VAR18);
                VAR18.VAR28 = VAR4->VAR29;
                VAR18.VAR30 = VAR11;
                VAR18.VAR31 = VAR13;
                VAR18.VAR9 = FUN3(VAR9, VAR6->VAR22->VAR26, VAR4->VAR22->VAR26);
                if (VAR17->VAR24 == VAR25)
                {
                    if (VAR15 == 0)
                        VAR18.VAR9 += 90 * VAR8->VAR32;
                    else
                        VAR18.VAR9 += 90 * VAR8->VAR33;
                    FUN6(VAR2, &VAR18, VAR4->VAR22->VAR23, VAR34[VAR4->VAR35][VAR18.VAR28]);