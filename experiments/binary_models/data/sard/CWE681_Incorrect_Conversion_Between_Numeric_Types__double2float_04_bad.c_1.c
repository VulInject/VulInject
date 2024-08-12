#VAR1 ""
#VAR1 <float.VAR2>
#define CHAR_ARRAY_SIZE 256
static const int VAR3 = 1; 
static const int VAR4 = 0; 
void FUN1()
{
    if(VAR3)
    {
        {
            char VAR5[VAR6];
            double VAR7 = 0;
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR7 = FUN2(VAR5);
            }
            else
            {
            }
            FUN3((float)VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}