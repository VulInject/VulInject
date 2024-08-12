#VAR1 ""
#VAR1 <VAR2.VAR3>
#define CHAR_ARRAY_SIZE 20
typedef union
{
    float VAR4;
    float VAR5;
} VAR6;
void FUN1()
{
    float VAR7;
    CWE369_Divide_by_Zero__float_fgets_34_unionType VAR8;
    VAR7 = 0.0F;
    {
        char VAR9[VAR10];
        if (fgets(VAR9, VAR10, stdin) != NULL)
        {
            VAR7 = (float)FUN2(VAR9);
        }
        else
        {
        }
    }
    VAR8.VAR4 = VAR7;
    {
        float VAR7 = VAR8.VAR5;
        {
            int VAR11 = (int)(100.0 / VAR7);
            FUN3(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}