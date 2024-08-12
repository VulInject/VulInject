#VAR1 ""
#VAR1 <VAR2.VAR3>
char * FUN1(char * VAR4)
{
    {
        char * VAR5 = (char *)malloc(100*sizeof(char));
        if (VAR5 == NULL) {FUN2(-1);}
        memset(VAR5, '', 100-1);
        VAR5[100-1] = '';
        VAR4 = VAR5 - 8;
    }
    return VAR4;
}
void FUN3()
{
    char * VAR4;
    VAR4 = NULL;
    VAR4 = FUN1(VAR4);
    {
        char VAR6[100];
        memset(VAR6, '', 100-1); 
        VAR6[100-1] = ''; 
        strcpy(VAR4, VAR6);
        FUN4(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}