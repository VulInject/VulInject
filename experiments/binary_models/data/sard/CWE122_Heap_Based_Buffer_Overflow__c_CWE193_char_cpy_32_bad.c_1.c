#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    char * *VAR6 = &VAR5;
    char * *VAR7 = &VAR5;
    VAR5 = NULL;
    {
        char * VAR5 = *VAR6;
        VAR5 = (char *)malloc(10*sizeof(char));
        if (VAR5 == NULL) {FUN2(-1);}
        *VAR6 = VAR5;
    }
    {
        char * VAR5 = *VAR7;
        {
            char VAR8[10+1] = VAR4;
            strcpy(VAR5, VAR8);
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