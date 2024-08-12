#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(VAR3==5)
    {
        VAR2 = -1;
    }
    {
        char VAR4[100];
        char VAR5[100] = "";
        memset(VAR4, '', 100-1);
        VAR4[100-1] = '';
        if (VAR2 < 100)
        {
            memmove(VAR5, VAR4, VAR2);
            VAR5[VAR2] = ''; 
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