#VAR1 ""
#VAR1 <VAR2.VAR3>
#define CHAR_ARRAY_SIZE 20
float FUN1(float VAR4)
{
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
    return VAR4;
}
void FUN3()
{
    float VAR4;
    VAR4 = 0.0F;
    VAR4 = FUN1(VAR4);
    {
        int VAR7 = (int)(100.0 / VAR4);
        FUN4(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}