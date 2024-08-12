int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    int VAR4;
    VAR2->VAR5 = VAR3->VAR5;
    VAR2->VAR6 = VAR3->VAR6;
    VAR2->VAR7 = VAR3->VAR7;
    VAR2->VAR8 = VAR3->VAR8;
    VAR2->VAR9 = VAR3->VAR9;
    VAR2->VAR10 = VAR3->VAR10;
    VAR2->VAR11 = VAR3->VAR11;
    for (VAR4 = 0; VAR4 < VAR3->VAR12; VAR4++)
    {
        enum AVPacketSideDataType VAR13 = VAR3->VAR14[VAR4].VAR13;
        int VAR15 = VAR3->VAR14[VAR4].VAR15;
        VAR16 *VAR17 = VAR3->VAR14[VAR4].VAR18;
        VAR16 *VAR19 = FUN2(VAR2, VAR13, VAR15);
        if (!VAR19)
        {
            FUN3(VAR2);
            return FUN4(VAR20);
        }
        memcpy(VAR19, VAR17, VAR15);
    }
    return 0;
}