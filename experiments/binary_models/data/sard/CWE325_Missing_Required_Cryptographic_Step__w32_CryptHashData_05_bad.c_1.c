#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define VAR7 "" 
#define VAR8 ""
int VAR9 = 1; 
int VAR10 = 0; 
void FUN2()
{
    if(VAR9)
    {
        {
            BYTE VAR11[100];
            DWORD VAR12 = strlen(VAR8);
            HCRYPTPROV VAR13 = (VAR14)NULL;
            HCRYPTHASH VAR15 = (VAR16)NULL;
            HCRYPTKEY VAR17 = (VAR18)NULL;
            char VAR19[100] = VAR7;
            do
            {
                memcpy(VAR11, VAR8, VAR12);
                if(!FUN3(&VAR13, NULL, VAR20, VAR21, 0))
                {
                    break;
                }
                if(!FUN4(VAR13, VAR22, 0, 0, &VAR15))
                {
                    break;
                }
                if(!FUN5(VAR13, VAR23, VAR15, 0, &VAR17))
                {
                    break;
                }
                if(!FUN6(VAR17, 0, 1, 0, VAR11, &VAR12, sizeof(VAR11)))
                {
                    break;
                }
            }
            while (0);
            if (VAR17)
            {
                FUN7(VAR17);
            }
            if (VAR15)
            {
                FUN8(VAR15);
            }
            if (VAR13)
            {
                FUN9(VAR13, 0);
            }
            FUN10(VAR11, VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN11(NULL) );
    FUN2();
    return 0;
}