int FUN1(VAR1 *VAR2)
{
    enum AVMediaType VAR3 = VAR2->VAR4[0] ? VAR2->VAR4[0]->VAR3 : VAR2->VAR5[0] ? VAR2->VAR5[0]->VAR3
                                                                                    : VAR6;
    FUN2(VAR2, FUN3(VAR3));
    return 0;
}