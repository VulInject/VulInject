#VAR1 ""
#VAR1 <VAR2.VAR3>
#define CHAR_ARRAY_SIZE 20
void FUN1(float VAR4)
{
    {
        int VAR5 = (int)(100.0 / VAR4);
        FUN2(VAR5);
    }
}
void FUN3()
{
    float VAR4;
    void (*VAR6) (float) = VAR7;
    VAR4 = 0.0F;
    {
        char VAR8[VAR9];
        if (fgets(VAR8, VAR9, stdin) != NULL)
        {
            VAR4 = (float)FUN4(VAR8);
        }
        else
        {
        }
    }
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}