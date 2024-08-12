#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
int VAR5 = 5;
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
        memcpy(VAR6, VAR7, (strlen(VAR7) + 1) * sizeof(char));
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