#VAR1 ""
#define CHAR_ARRAY_SIZE 256
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            char VAR2[VAR3];
            double VAR4 = 0;
            if (fgets(VAR2, VAR3, stdin) != NULL)
            {
                VAR4 = FUN4(VAR2);
            }
            else
            {
            }
            FUN5((int)VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}