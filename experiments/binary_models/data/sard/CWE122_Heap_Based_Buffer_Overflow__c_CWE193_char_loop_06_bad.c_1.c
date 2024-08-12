#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
static const int VAR5 = 5;
void FUN1()
{
    char * VAR6;
    VAR6 = NULL;
    if(VAR5==5)
    {
        VAR6 = (char *)malloc(10*sizeof(char));
        if (VAR6 == NULL) {FUN2(-1);}
    }
    {
        char VAR7[10+1] = VAR4;
        size_t VAR8, VAR9;
        VAR9 = strlen(VAR7);
        for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
        {
            VAR6[VAR8] = VAR7[VAR8];
        }
        FUN3(VAR6);
        free(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}