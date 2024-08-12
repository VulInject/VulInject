#VAR1 ""
int FUN1(int VAR2)
{
    VAR2 = -1;
    return VAR2;
}
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    VAR2 = FUN1(VAR2);
    {
        char VAR3[100];
        char VAR4[100] = "";
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        if (VAR2 < 100)
        {
            strncpy(VAR4, VAR3, VAR2);
            VAR4[VAR2] = ''; 
        }
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}