static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    struct VAR5 *VAR6 = VAR2->VAR7;
    struct v4l2_requestbuffers VAR8 = {.VAR9 = VAR10, .VAR11 = VAR12, .VAR13 = VAR14};
    VAR4 = FUN2(VAR6->VAR15, VAR16, &VAR8);
    if (VAR4 < 0)
    {
        if (VAR17 == VAR18)
        {
            FUN3(VAR2, VAR19, "");
        }
        else
        {
            FUN3(VAR2, VAR19, "");
        }
        return FUN4(VAR17);
    }
    if (VAR8.VAR11 < 2)
    {
        FUN3(VAR2, VAR19, "");
        return FUN4(VAR20);
    }
    VAR6->VAR21 = VAR8.VAR11;
    VAR6->VAR22 = FUN5(sizeof(void *) * VAR6->VAR21);
    if (!VAR6->VAR22)
    {
        FUN3(VAR2, VAR19, "");
        return FUN4(VAR20);
    }
    VAR6->VAR23 = FUN5(sizeof(unsigned int) * VAR6->VAR21);
    if (!VAR6->VAR23)
    {
        FUN3(VAR2, VAR19, "");
        FUN6(VAR6->VAR22);
        return FUN4(VAR20);
    }
    for (VAR3 = 0; VAR3 < VAR8.VAR11; VAR3++)
    {
        struct v4l2_buffer VAR24 = {.VAR9 = VAR10, .VAR25 = VAR3, .VAR13 = VAR14};
        VAR4 = FUN2(VAR6->VAR15, VAR26, &VAR24);
        if (VAR4 < 0)
        {
            FUN3(VAR2, VAR19, "");
            return FUN4(VAR17);
        }
        VAR6->VAR23[VAR3] = VAR24.VAR27;
        if (VAR6->VAR28 > 0 && VAR6->VAR23[VAR3] < VAR6->VAR28)
        {
            FUN3(VAR2, VAR19, "", VAR3, VAR6->VAR23[VAR3], VAR6->VAR28);
            return -1;
        }
        VAR6->VAR22[VAR3] = FUN7(NULL, VAR24.VAR27, VAR29 | VAR30, VAR31, VAR6->VAR15, VAR24.VAR32.VAR33);
        if (VAR6->VAR22[VAR3] == VAR34)
        {
            FUN3(VAR2, VAR19, "", strerror(VAR17));
            return FUN4(VAR17);
        }
    }
    return 0;
}