#VAR1 ""
#define CHAR_ARRAY_SIZE 8
static const int VAR2 = 5;
void FUN1()
{
    short VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        {
            char VAR4[VAR5] = "";
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                VAR3 = (short)FUN2(VAR4);
            }
            else
            {
            }
        }
    }
    {
        char VAR6 = (char)VAR3;
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}