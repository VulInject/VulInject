void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR3++;
    VAR4++;
    VAR2->VAR6[(VAR4)*VAR2->VAR7 + VAR3] |= VAR8;
    if (VAR5)
    {
        VAR2->VAR6[(VAR4)*VAR2->VAR7 + VAR3 + 1] |= VAR9 | VAR10;
        VAR2->VAR6[(VAR4)*VAR2->VAR7 + VAR3 - 1] |= VAR11 | VAR12;
        VAR2->VAR6[(VAR4 + 1) * VAR2->VAR7 + VAR3] |= VAR13 | VAR14;
        VAR2->VAR6[(VAR4 - 1) * VAR2->VAR7 + VAR3] |= VAR15 | VAR16;
    }
    else
    {
        VAR2->VAR6[(VAR4)*VAR2->VAR7 + VAR3 + 1] |= VAR9;
        VAR2->VAR6[(VAR4)*VAR2->VAR7 + VAR3 - 1] |= VAR11;
        VAR2->VAR6[(VAR4 + 1) * VAR2->VAR7 + VAR3] |= VAR13;
        VAR2->VAR6[(VAR4 - 1) * VAR2->VAR7 + VAR3] |= VAR15;
    }
    VAR2->VAR6[(VAR4 + 1) * VAR2->VAR7 + VAR3 + 1] |= VAR17;
    VAR2->VAR6[(VAR4 + 1) * VAR2->VAR7 + VAR3 - 1] |= VAR18;
    VAR2->VAR6[(VAR4 - 1) * VAR2->VAR7 + VAR3 + 1] |= VAR19;
    VAR2->VAR6[(VAR4 - 1) * VAR2->VAR7 + VAR3 - 1] |= VAR20;
}