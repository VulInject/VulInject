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
            char * VAR6 = (char *)FUN2(100*sizeof(char));
            memset(VAR6, '', 100-1); 
            VAR6[100-1] = ''; 
            VAR5 = VAR6;
        }
    }
    FUN3(VAR5);
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}