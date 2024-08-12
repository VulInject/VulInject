#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    VAR6 = NULL; 
    if(VAR4)
    {
        {
            char * VAR7 = (char *)FUN2(100*sizeof(char));
            memset(VAR7, '', 100-1); 
            VAR7[100-1] = ''; 
            VAR6 = VAR7;
        }
    }
    FUN3(VAR6);
    free(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}