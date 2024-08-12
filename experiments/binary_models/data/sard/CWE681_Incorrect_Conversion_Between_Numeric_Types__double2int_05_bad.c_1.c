#VAR1 ""
#define CHAR_ARRAY_SIZE 256
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            char VAR4[VAR5];
            double VAR6 = 0;
            if (fgets(VAR4, VAR5, stdin) != NULL)
            {
                VAR6 = FUN2(VAR4);
            }
            else
            {
            }
            FUN3((int)VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}