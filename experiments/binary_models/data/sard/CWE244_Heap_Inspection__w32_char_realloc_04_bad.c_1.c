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
            char * VAR9 = (char *)malloc(100*sizeof(char));
            if (VAR9 == NULL) {FUN3(-1);}
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
            VAR9 = realloc(VAR9, 200 * sizeof(char));
            if (VAR9 == NULL) {FUN3(-1);}
            FUN6(VAR9, 200 * sizeof(char));
            strcpy(VAR9, "");
            FUN7(VAR9);
            free(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN2();
    return 0;
}