#VAR1 ""
#define CHAR_ARRAY_SIZE 8
short FUN1(short VAR2)
{
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
    return VAR2;
}
void FUN3()
{
    short VAR2;
    VAR2 = -1;
    VAR2 = FUN1(VAR2);
    {
        char VAR5 = (char)VAR2;
        FUN4(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}