#VAR1 ""
#VAR1 <VAR2.VAR3>
typedef union
{
    float VAR4;
    float VAR5;
} VAR6;
void FUN1()
{
    float VAR7;
    CWE369_Divide_by_Zero__float_zero_34_unionType VAR8;
    VAR7 = 0.0F;
    VAR7 = 0.0F;
    VAR8.VAR4 = VAR7;
    {
        float VAR7 = VAR8.VAR5;
        {
            int VAR9 = (int)(100.0 / VAR7);
            FUN2(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}