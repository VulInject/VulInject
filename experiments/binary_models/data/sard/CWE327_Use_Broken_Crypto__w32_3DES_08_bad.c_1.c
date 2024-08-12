#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#pragma FUN1 (VAR5, "")
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN2())
    {
        {
            VAR6 *VAR7;
            HCRYPTPROV VAR8;
            HCRYPTKEY VAR9;
            HCRYPTHASH VAR10;
            char VAR11[100];
            size_t VAR12;
            char VAR13[100];
            DWORD VAR14 = sizeof(VAR13)-1;
            if (fgets(VAR11, 100, stdin) == NULL)
            {
                VAR11[0] = '';
            }
            VAR12 = strlen(VAR11);
            if (VAR12 > 0)
            {
                VAR11[VAR12-1] = '';
            }
            VAR7 = fopen("", "");
            if (VAR7 == NULL)
            {
                FUN5(1);
            }
            if (fread(VAR13, sizeof(char), 100, VAR7) != 100)
            {
                fclose(VAR7);
                FUN5(1);
            }
            VAR13[99] = '';
            if(!FUN6(&VAR8, NULL, VAR15, VAR16, 0))
            {
                if(!FUN6(&VAR8, NULL, VAR15, VAR16, VAR17))
                {
                    FUN5(1);
                }
            }
            if(!FUN7(VAR8, VAR18, 0, 0, &VAR10))
            {
                FUN5(1);
            }
            if(!FUN8(VAR10, (VAR19 *) VAR11, VAR12, 0))
            {
                FUN5(1);
            }
            if(!FUN9(VAR8, VAR20, VAR10, 0, &VAR9))
            {
                FUN5(1);
            }
            if(!FUN10(VAR9, 0, 1, 0, (VAR19 *)VAR13, &VAR14))
            {
                FUN5(1);
            }
            VAR13[VAR14] = '';
            FUN11(VAR13);
            if (VAR9)
            {
                FUN12(VAR9);
            }
            if (VAR10)
            {
                FUN13(VAR10);
            }
            if (VAR8)
            {
                FUN14(VAR8, 0);
            }
            if (VAR7)
            {
                fclose(VAR7);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN15(NULL) );
    FUN4();
    return 0;
}