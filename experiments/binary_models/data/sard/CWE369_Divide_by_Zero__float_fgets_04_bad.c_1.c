#VAR1 ""
#VAR1 <VAR2.VAR3>
#define CHAR_ARRAY_SIZE 20
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    float VAR6;
    VAR6 = 0.0F;
    if(VAR4)
    {
        {
            char VAR7[VAR8];
            if (fgets(VAR7, VAR8, stdin) != NULL)
            {
                VAR6 = (float)FUN2(VAR7);
            }
            else
            {
            }
        }
    }
    if(VAR4)
    {
        {
            int VAR9 = (int)(100.0 / VAR6);
            FUN3(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}