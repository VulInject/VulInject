#VAR1 ""
#define CHAR_ARRAY_SIZE 256
void FUN1()
{
    if(FUN2())
    {
        {
            char VAR2[VAR3];
            double VAR4 = 0;
            if (fgets(VAR2, VAR3, stdin) != NULL)
            {
                VAR4 = FUN3(VAR2);
            }
            else
            {
            }
            FUN4((int)VAR4);
        }
    }
    else
    {
        {
            char VAR2[VAR3];
            double VAR4 = 0;
            if (fgets(VAR2, VAR3, stdin) != NULL)
            {
                VAR4 = FUN3(VAR2);
            }
            else
            {
            }
            if (VAR4 > VAR5 || VAR4 < VAR6)
            {
            }
            else
            {
                FUN4((int)VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}