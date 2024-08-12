#VAR1 ""
#define CHAR_ARRAY_SIZE 8
void FUN1(short VAR2)
{
    {
        char VAR3 = (char)VAR2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    short VAR2;
    VAR2 = -1;
    {
        char VAR4[VAR5] = "";
        if (fgets(VAR4, VAR5, stdin) != NULL)
        {
            VAR2 = (short)FUN4(VAR4);
        }
        else
        {
        }
    }
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}