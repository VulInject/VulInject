#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN2()
{
    if(VAR7)
    {
        {
            char * VAR9 = (char *)FUN3(100*sizeof(char));
            size_t VAR10 = 0;
            HANDLE VAR11;
            char * VAR12 = "";
            char * VAR13 = "";
            VAR9[0] = '';
            if (fgets(VAR9, 100, stdin) == NULL)
            {
                VAR9[0] = '';
            }
            VAR10 = strlen(VAR9);
            if (VAR10 > 0)
            {
                VAR9[VAR10-1] = '';
            }
            if (FUN4(
                        VAR12,
                        VAR13,
                        VAR9,
                        VAR14,
                        VAR15,
                        &VAR11) != 0)
            {
                FUN5(VAR11);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}