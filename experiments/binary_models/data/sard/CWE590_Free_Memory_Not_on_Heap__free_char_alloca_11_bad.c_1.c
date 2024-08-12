#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    VAR4 = NULL; 
    if(FUN2())
    {
        {
            char * VAR5 = (char *)FUN3(100*sizeof(char));
            memset(VAR5, '', 100-1); 
            VAR5[100-1] = ''; 
            VAR4 = VAR5;
        }
    }
    FUN4(VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}