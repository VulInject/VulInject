#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    if(FUN3())
    {
        {
            char * VAR7 = (char *)malloc(100*sizeof(char));
            if (VAR7 == NULL) {FUN4(-1);}
            size_t VAR8 = 0;
            HANDLE VAR9;
            char * VAR10 = "";
            char * VAR11 = "";
            VAR7[0] = '';
            if (fgets(VAR7, 100, stdin) == NULL)
            {
                VAR7[0] = '';
            }
            VAR8 = strlen(VAR7);
            if (VAR8 > 0)
            {
                VAR7[VAR8-1] = '';
            }
            if (FUN5(
                        VAR10,
                        VAR11,
                        VAR7,
                        VAR12,
                        VAR13,
                        &VAR9) != 0)
            {
                FUN6(VAR9);
            }
            else
            {
            }
            free(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN2();
    return 0;
}