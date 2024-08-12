#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1(char * VAR5)
{
    {
        char VAR6[10+1] = VAR4;
        strcpy(VAR5, VAR6);
        FUN2(VAR5);
        free(VAR5);
    }
}
void FUN3()
{
    char * VAR5;
    VAR5 = NULL;
    VAR5 = (char *)malloc(10*sizeof(char));
    if (VAR5 == NULL) {FUN4(-1);}
    FUN1(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}