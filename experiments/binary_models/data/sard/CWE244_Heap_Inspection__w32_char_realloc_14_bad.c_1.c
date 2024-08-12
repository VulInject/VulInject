#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    if(VAR7==5)
    {
        {
            char * VAR8 = (char *)malloc(100*sizeof(char));
            if (VAR8 == NULL) {FUN3(-1);}
            size_t VAR9 = 0;
            HANDLE VAR10;
            char * VAR11 = "";
            char * VAR12 = "";
            VAR8[0] = '';
            if (fgets(VAR8, 100, stdin) == NULL)
            {
                VAR8[0] = '';
            }
            VAR9 = strlen(VAR8);
            if (VAR9 > 0)
            {
                VAR8[VAR9-1] = '';
            }
            if (FUN4(
                        VAR11,
                        VAR12,
                        VAR8,
                        VAR13,
                        VAR14,
                        &VAR10) != 0)
            {
                FUN5(VAR10);
            }
            else
            {
            }
            VAR8 = realloc(VAR8, 200 * sizeof(char));
            if (VAR8 == NULL) {FUN3(-1);}
            FUN6(VAR8, 200 * sizeof(char));
            strcpy(VAR8, "");
            FUN7(VAR8);
            free(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN2();
    return 0;
}