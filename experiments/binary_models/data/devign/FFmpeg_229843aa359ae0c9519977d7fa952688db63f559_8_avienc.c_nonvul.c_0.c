static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[VAR3]->VAR8;
    VAR9 *VAR10 = VAR2->VAR7[VAR3]->VAR11;
    FUN2(VAR2, "", FUN3(VAR4), VAR6->VAR12, VAR3);
    while (VAR10->VAR13 == 0 && VAR4 != VAR14 && VAR4 > VAR6->VAR12 && VAR10->VAR15 != VAR16 && VAR6->VAR12)
    {
        AVPacket VAR17;
        if (VAR4 - VAR6->VAR12 > 60000)
        {
            FUN4(VAR2, VAR18, "" VAR19 "", VAR4 - VAR6->VAR12);
            return FUN5(VAR20);
        }
        FUN6(&VAR17);
        VAR17.VAR21 = 0;
        VAR17.VAR22 = NULL;
        VAR17.VAR3 = VAR3;
        FUN7(VAR2, &VAR17);
        FUN2(VAR2, "", FUN3(VAR4), VAR6->VAR12);
    }
    return 0;
}