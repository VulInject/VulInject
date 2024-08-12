#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    if(VAR5==5)
    {
        {
            char * VAR6 = (char *)malloc(100*sizeof(char));
            if (VAR6 == NULL) {FUN2(-1);}
            memset(VAR6, '', 100-1);
            VAR6[100-1] = '';
            VAR4 = VAR6 - 8;
        }
    }
    {
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        memcpy(VAR4, VAR7, 100*sizeof(char));
        VAR4[100-1] = '';
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}