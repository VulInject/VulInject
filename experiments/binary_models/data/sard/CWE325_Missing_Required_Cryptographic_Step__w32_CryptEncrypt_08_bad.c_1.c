#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
#define VAR7 "" 
#define VAR8 ""
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
            BYTE VAR9[100];
            DWORD VAR10 = strlen(VAR8);
            HCRYPTPROV VAR11 = (VAR12)NULL;
            HCRYPTHASH VAR13 = (VAR14)NULL;
            HCRYPTKEY VAR15 = (VAR16)NULL;
            char VAR17[100] = VAR7;
            do
            {
                memcpy(VAR9, VAR8, VAR10);
                if(!FUN5(&VAR11, NULL, VAR18, VAR19, 0))
                {
                    break;
                }
                if(!FUN6(VAR11, VAR20, 0, 0, &VAR13))
                {
                    break;
                }
                if(!FUN7(VAR13, (VAR21*)VAR17, strlen(VAR17), 0))
                {
                    break;
                }
                if(!FUN8(VAR11, VAR22, VAR13, 0, &VAR15))
                {
                    break;
                }
            }
            while (0);
            if (VAR15)
            {
                FUN9(VAR15);
            }
            if (VAR13)
            {
                FUN10(VAR13);
            }
            if (VAR11)
            {
                FUN11(VAR11, 0);
            }
            FUN12(VAR9, VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN13(NULL) );
    FUN4();
    return 0;
}