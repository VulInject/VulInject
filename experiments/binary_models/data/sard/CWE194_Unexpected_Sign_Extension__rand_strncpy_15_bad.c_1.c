#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    switch(6)
    {
    case 6:
        VAR2 = (short)FUN2();
        break;
    default:
        break;
    }
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
    FUN1();
    return 0;
}