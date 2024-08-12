#VAR1 ""
#VAR1 <VAR2.VAR3>
#define CHAR_ARRAY_SIZE 20
void FUN1()
{
    float VAR4;
    VAR4 = 0.0F;
    if(VAR5)
    {
        {
            char VAR6[VAR7];
            if (fgets(VAR6, VAR7, stdin) != NULL)
            {
                VAR4 = (float)FUN2(VAR6);
            }
            else
            {
            }
        }
    }
    if(VAR5)
    {
        {
            int VAR8 = (int)(100.0 / VAR4);
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