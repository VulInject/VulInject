#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * *VAR5 = &VAR4;
    char * *VAR6 = &VAR4;
    VAR4 = NULL;
    {
        char * VAR4 = *VAR5;
        {
            char * VAR7 = (char *)malloc(100*sizeof(char));
            if (VAR7 == NULL) {FUN2(-1);}
            memset(VAR7, '', 100-1);
            VAR7[100-1] = '';
            VAR4 = VAR7 - 8;
        }
        *VAR5 = VAR4;
    }
    {
        char * VAR4 = *VAR6;
        {
            char VAR8[100];
            memset(VAR8, '', 100-1); 
            VAR8[100-1] = ''; 
            strncpy(VAR8, VAR4, strlen(VAR8));
            VAR8[100-1] = '';
            FUN3(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}