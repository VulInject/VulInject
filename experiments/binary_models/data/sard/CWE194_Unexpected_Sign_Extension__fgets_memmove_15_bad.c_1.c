#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    switch(6)
    {
    case 6:
    {
        char VAR3[VAR4] = "";
        if (fgets(VAR3, VAR4, stdin) != NULL)
        {
            VAR2 = (short)FUN2(VAR3);
        }
        else
        {
        }
    }
    break;
    default:
        break;
    }
    {
        char VAR5[100];
        char VAR6[100] = "";
        memset(VAR5, '', 100-1);
        VAR5[100-1] = '';
        if (VAR2 < 100)
        {
            memmove(VAR6, VAR5, VAR2);
            VAR6[VAR2] = ''; 
        }
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}