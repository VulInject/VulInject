#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    VAR6 = NULL;
    if(VAR4)
    {
        {
            char * VAR7 = (char *)malloc(100*sizeof(char));
            if (VAR7 == NULL) {FUN2(-1);}
            memset(VAR7, '', 100-1);
            VAR7[100-1] = '';
            VAR6 = VAR7 - 8;
        }
    }
    {
        char VAR8[100];
        memset(VAR8, '', 100-1); 
        VAR8[100-1] = ''; 
        memcpy(VAR6, VAR8, 100*sizeof(char));
        VAR6[100-1] = '';
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}