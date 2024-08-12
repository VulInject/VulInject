int FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
        if (VAR2->VAR5[VAR3]->VAR6 & VAR7 && VAR2->VAR5[VAR3]->VAR8 < VAR9)
        {
            AVPacket copy = VAR2->VAR5[VAR3]->VAR10;
            if (copy.VAR11 <= 0)
            {
                FUN2(VAR2, VAR12, ""
                                          "",
                       VAR3);
                continue;
            }
            copy.VAR13 = FUN3(copy.VAR13);
            if (!copy.VAR13)
                return FUN4(VAR14);
            FUN5(&VAR2->VAR15, &copy, &VAR2->VAR16);
        }
    return 0;
}