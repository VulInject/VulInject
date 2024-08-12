static int FUN1(VAR1 *VAR2, int VAR3)
{
    FLACFrameInfo VAR4;
    VAR5 *VAR6;
    int VAR7 = 0;
    VAR6 = FUN2(VAR2, VAR3, VAR8, &VAR2->VAR9, &VAR2->VAR10);
    if (FUN3(VAR2->VAR11, VAR6, &VAR4))
    {
        VAR12 **VAR13 = &VAR2->VAR14;
        int VAR15;
        VAR7 = 0;
        while (*VAR13)
        {
            VAR13 = &(*VAR13)->VAR16;
            VAR7++;
            *VAR13 = FUN4(sizeof(**VAR13));
            if (!*VAR13)
            {
                FUN5(VAR2->VAR11, VAR17, "");
                (*VAR13)->VAR4 = VAR4;
                (*VAR13)->VAR3 = VAR3;
                (*VAR13)->VAR18 = FUN6(sizeof(int) * VAR19);
                for (VAR15 = 0; VAR15 < VAR19; VAR15++)
                    (*VAR13)->VAR18[VAR15] = VAR20;
                VAR2->VAR21++;
                VAR7++;
                return VAR7