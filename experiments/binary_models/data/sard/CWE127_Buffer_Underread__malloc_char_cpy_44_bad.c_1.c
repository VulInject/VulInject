#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        char VAR5[100*2];
        memset(VAR5, '', 100*2-1); 
        VAR5[100*2-1] = ''; 
        strcpy(VAR5, VAR4);
        FUN2(VAR5);
    }
}
void FUN3()
{
    char * VAR4;
    void (*VAR6) (char *) = VAR7;
    VAR4 = NULL;
    {
        char * VAR8 = (char *)malloc(100*sizeof(char));
        if (VAR8 == NULL) {FUN4(-1);}
        memset(VAR8, '', 100-1);
        VAR8[100-1] = '';
        VAR4 = VAR8 - 8;
    }
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}