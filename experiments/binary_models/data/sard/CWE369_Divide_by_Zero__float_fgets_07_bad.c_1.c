#VAR1 ""
#VAR1 <VAR2.VAR3>
#define CHAR_ARRAY_SIZE 20
int VAR4 = 5;
void FUN1()
{
    float VAR5;
    VAR5 = 0.0F;
    if(VAR4==5)
    {
        {
            char VAR6[VAR7];
            if (fgets(VAR6, VAR7, stdin) != NULL)
            {
                VAR5 = (float)FUN2(VAR6);
            }
            else
            {
            }
        }
    }
    if(VAR4==5)
    {
        {
            int VAR8 = (int)(100.0 / VAR5);
            FUN3(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}