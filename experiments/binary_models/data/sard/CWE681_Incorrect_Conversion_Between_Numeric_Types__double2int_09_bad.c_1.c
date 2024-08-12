#VAR1 ""
#define CHAR_ARRAY_SIZE 256
void FUN1()
{
    if(VAR2)
    {
        {
            char VAR3[VAR4];
            double VAR5 = 0;
            if (fgets(VAR3, VAR4, stdin) != NULL)
            {
                VAR5 = FUN2(VAR3);
            }
            else
            {
            }
            FUN3((int)VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}