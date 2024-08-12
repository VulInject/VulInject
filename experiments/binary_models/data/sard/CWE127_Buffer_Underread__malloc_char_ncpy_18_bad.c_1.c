#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    goto VAR5;
VAR5:
    {
        char * VAR6 = (char *)malloc(100*sizeof(char));
        if (VAR6 == NULL) {FUN2(-1);}
        memset(VAR6, '', 100-1);
        VAR6[100-1] = '';
        VAR4 = VAR6 - 8;
    }
    {
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        strncpy(VAR7, VAR4, strlen(VAR7));
        VAR7[100-1] = '';
        FUN3(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}