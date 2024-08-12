#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        memmove(VAR5, VAR4, 100*sizeof(char));
        VAR5[100-1] = '';
        FUN2(VAR5);
    }
}
void FUN3()
{
    char * VAR4;
    VAR4 = NULL;
    {
        char * VAR6 = (char *)malloc(100*sizeof(char));
        if (VAR6 == NULL) {FUN4(-1);}
        memset(VAR6, '', 100-1);
        VAR6[100-1] = '';
        VAR4 = VAR6 - 8;
    }
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}