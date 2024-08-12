static VAR1 *FUN1(int argc, char *argv[])
{
    VAR1 *this = FUN2(sizeof(VAR1));
    if (this != NULL)
    {
        int VAR2[2];
        int VAR3[2];
        if (!FUN3(VAR2))
            return NULL;
        if (!FUN3(VAR3))
            return NULL;
        this->VAR4 = FUN4();
        if (this->VAR4 == 0)
        {
            char *VAR5 = FUN2(VAR6);
            int VAR7;
            strcpy(VAR5, "");
            for (VAR7 = 0; VAR7 < argc; VAR7++)
            {
                FUN5(VAR5, argv[VAR7], VAR6);
                FUN5(VAR5, "", VAR6);
            }
            FUN6(VAR3[0], VAR8);
            FUN6(VAR2[1], VAR9);
            close(VAR2[0]);
            close(VAR2[1]);
            close(VAR3[0]);
            close(VAR3[1]);
            FUN7("", "", "", VAR5, (char *)NULL);
            FUN8(255);
        }
        else
        {
            close(VAR2[1]);
            close(VAR3[0]);
            this->VAR10 = FUN9(VAR2[0], "");
            this->VAR11 = FUN9(VAR3[1], "");
        }
    }
    return this;
}