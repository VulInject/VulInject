#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        fscanf(stdin, "", &VAR3);
    }
    {
        char VAR4[100];
        char VAR5[100] = "";
        memset(VAR4, '', 100-1);
        VAR4[100-1] = '';
        if (VAR3 < 100)
        {
            strncpy(VAR5, VAR4, VAR3);
            VAR5[VAR3] = ''; 
        }
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}