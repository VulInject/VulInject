#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    if(1)
    {
        {
            char * VAR5 = (char *)malloc(100*sizeof(char));
            if (VAR5 == NULL) {FUN2(-1);}
            memset(VAR5, '', 100-1);
            VAR5[100-1] = '';
            VAR4 = VAR5 - 8;
        }
    }
    {
        char VAR6[100];
        memset(VAR6, '', 100-1); 
        VAR6[100-1] = ''; 
        memmove(VAR6, VAR4, 100*sizeof(char));
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