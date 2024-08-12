#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
static const int VAR5 = 1; 
static const int VAR6 = 0; 
void FUN1()
{
    char * VAR7;
    VAR7 = NULL;
    if(VAR5)
    {
        VAR7 = (char *)malloc(10*sizeof(char));
        if (VAR7 == NULL) {FUN2(-1);}
    }
    {
        char VAR8[10+1] = VAR4;
        memcpy(VAR7, VAR8, (strlen(VAR8) + 1) * sizeof(char));
        FUN3(VAR7);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}