#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1()
{
    short VAR2;
    VAR2 = -1;
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
    {
        short VAR5 = VAR2;
        short VAR2 = VAR5;
        {
            char VAR6 = (char)VAR2;
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}