#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    VAR5 = NULL;
    VAR5 = (char *)malloc(10*sizeof(char));
    if (VAR5 == NULL) {FUN2(-1);}
    {
        char * VAR6 = VAR5;
        char * VAR5 = VAR6;
        {
            char VAR7[10+1] = VAR4;
            size_t VAR8, VAR9;
            VAR9 = strlen(VAR7);
            for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
            {
                VAR5[VAR8] = VAR7[VAR8];
            }
            FUN3(VAR5);
            free(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}