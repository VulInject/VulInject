#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    VAR5 = NULL;
    if(VAR4==5)
    {
        {
            char * VAR6 = (char *)malloc(100*sizeof(char));
            if (VAR6 == NULL) {FUN2(-1);}
            memset(VAR6, '', 100-1);
            VAR6[100-1] = '';
            VAR5 = VAR6 - 8;
        }
    }
    {
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        memcpy(VAR7, VAR5, 100*sizeof(char));
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