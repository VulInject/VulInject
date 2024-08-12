#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL;
    {
        char * VAR5 = (char *)malloc(100*sizeof(char));
        if (VAR5 == NULL) {FUN2(-1);}
        memset(VAR5, '', 100-1);
        VAR5[100-1] = '';
        VAR4 = VAR5 - 8;
    }
    {
        size_t VAR6;
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        for (VAR6 = 0; VAR6 < 100; VAR6++)
        {
            VAR7[VAR6] = VAR4[VAR6];
        }
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