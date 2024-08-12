#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1()
{
    short VAR2;
    VAR2 = -1;
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
        char VAR5 = (char)VAR2;
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}