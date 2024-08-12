#VAR1 ""
typedef union
{
    int VAR2;
    int VAR3;
} VAR4;
void FUN1()
{
    int VAR5;
    CWE126_Buffer_Overread__CWE129_rand_34_unionType VAR6;
    VAR5 = -1;
    VAR5 = FUN2();
    VAR6.VAR2 = VAR5;
    {
        int VAR5 = VAR6.VAR3;
        {
            int VAR7[10] = { 0 };
            if (VAR5 >= 0)
            {
                FUN3(VAR7[VAR5]);
            }
            else
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}