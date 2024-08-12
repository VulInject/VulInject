#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    if(VAR2)
    {
        fscanf (stdin, "", &VAR4);
    }
    {
        char VAR5[100];
        char VAR6[100] = "";
        memset(VAR5, '', 100-1);
        VAR5[100-1] = '';
        if (VAR4 < 100)
        {
            memcpy(VAR6, VAR5, VAR4);
            VAR6[VAR4] = ''; 
        }
        FUN2(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}