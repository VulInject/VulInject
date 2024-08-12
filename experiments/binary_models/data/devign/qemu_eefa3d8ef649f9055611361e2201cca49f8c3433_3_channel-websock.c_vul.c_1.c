static void FUN1(VAR1 *VAR2)
{
    size_t VAR3;
    union
    {
        char VAR4[VAR5];
        QIOChannelWebsockHeader VAR6;
    } VAR7;
    if (!VAR2->VAR8.VAR9)
    {
        return;
    }
    VAR7.VAR6.VAR10 = (1 << VAR11) | (VAR12 & VAR13);
    if (VAR2->VAR8.VAR9 < VAR14)
    {
        VAR7.VAR6.VAR15 = (VAR16)VAR2->VAR8.VAR9;
        VAR3 = VAR17;
    }
    else if (VAR2->VAR8.VAR9 < VAR18)
    {
        VAR7.VAR6.VAR15 = VAR19;
        VAR7.VAR6.VAR20.VAR21.VAR22 = FUN2((VAR23)VAR2->VAR8.VAR9);
        VAR3 = VAR24;
    }
    else
    {
        VAR7.VAR6.VAR15 = VAR25;
        VAR7.VAR6.VAR20.VAR26.VAR27 = FUN3(VAR2->VAR8.VAR9);
        VAR3 = VAR5;
    }
    VAR3 -= VAR28;
    FUN4(&VAR2->VAR29, VAR3 + VAR2->VAR8.VAR9);
    FUN5(&VAR2->VAR29, VAR7.VAR4, VAR3);
    FUN5(&VAR2->VAR29, VAR2->VAR8.VAR30, VAR2->VAR8.VAR9);
    FUN6(&VAR2->VAR8);
}