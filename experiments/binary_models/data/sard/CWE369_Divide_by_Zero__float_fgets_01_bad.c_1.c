#VAR1 ""
#VAR1 <VAR2.VAR3>
#define CHAR_ARRAY_SIZE 20
void FUN1()
{
    float VAR4;
    VAR4 = 0.0F;
    {
        char VAR5[VAR6];
        if (fgets(VAR5, VAR6, stdin) != NULL)
        {
            VAR4 = (float)FUN2(VAR5);
        }
        else
        {
        }
    }
    {
        int VAR7 = (int)(100.0 / VAR4);
        FUN3(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}