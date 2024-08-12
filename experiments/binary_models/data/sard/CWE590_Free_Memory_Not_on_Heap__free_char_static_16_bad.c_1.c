#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL; 
    while(1)
    {
        {
            char VAR5[100];
            memset(VAR5, '', 100-1); 
            VAR5[100-1] = ''; 
            VAR4 = VAR5;
        }
        break;
    }
    FUN2(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}