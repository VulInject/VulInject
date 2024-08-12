#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    char * VAR5;
    VAR5 = NULL; 
    if(VAR4==5)
    {
        {
            char VAR6[100];
            memset(VAR6, '', 100-1); 
            VAR6[100-1] = ''; 
            VAR5 = VAR6;
        }
    }
    FUN2(VAR5);
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}