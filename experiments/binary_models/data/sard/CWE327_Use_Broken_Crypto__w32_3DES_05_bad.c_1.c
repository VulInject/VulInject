#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#pragma FUN1 (VAR5, "")
int VAR6 = 1; 
int VAR7 = 0; 
void FUN2()
{
    if(VAR6)
    {
        {
            VAR8 *VAR9;
            HCRYPTPROV VAR10;
            HCRYPTKEY VAR11;
            HCRYPTHASH VAR12;
            char VAR13[100];
            size_t VAR14;
            char VAR15[100];
            DWORD VAR16 = sizeof(VAR15)-1;
            if (fgets(VAR13, 100, stdin) == NULL)
            {
                VAR13[0] = '';
            }
            VAR14 = strlen(VAR13);
            if (VAR14 > 0)
            {
                VAR13[VAR14-1] = '';
            }
            VAR9 = fopen("", "");
            if (VAR9 == NULL)
            {
                FUN3(1);
            }
            if (fread(VAR15, sizeof(char), 100, VAR9) != 100)
            {
                fclose(VAR9);
                FUN3(1);
            }
            VAR15[99] = '';
            if(!FUN4(&VAR10, NULL, VAR17, VAR18, 0))
            {
                if(!FUN4(&VAR10, NULL, VAR17, VAR18, VAR19))
                {
                    FUN3(1);
                }
            }
            if(!FUN5(VAR10, VAR20, 0, 0, &VAR12))
            {
                FUN3(1);
            }
            if(!FUN6(VAR12, (VAR21 *) VAR13, VAR14, 0))
            {
                FUN3(1);
            }
            if(!FUN7(VAR10, VAR22, VAR12, 0, &VAR11))
            {
                FUN3(1);
            }
            if(!FUN8(VAR11, 0, 1, 0, (VAR21 *)VAR15, &VAR16))
            {
                FUN3(1);
            }
            VAR15[VAR16] = '';
            FUN9(VAR15);
            if (VAR11)
            {
                FUN10(VAR11);
            }
            if (VAR12)
            {
                FUN11(VAR12);
            }
            if (VAR10)
            {
                FUN12(VAR10, 0);
            }
            if (VAR9)
            {
                fclose(VAR9);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN13(NULL) );
    FUN2();
    return 0;
}