#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    VAR2 * VAR3;
    twoIntsStruct VAR4[50];
    twoIntsStruct VAR5[100];
    if(FUN1())
    {
        VAR3 = VAR4;
    }
    {
        twoIntsStruct VAR6[100];
        {
            size_t VAR7;
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR6[VAR7].VAR8 = 0;
                VAR6[VAR7].VAR9 = 0;
            }
        }
        {
            size_t VAR7;
            for (VAR7 = 0; VAR7 < 100; VAR7++)
            {
                VAR3[VAR7] = VAR6[VAR7];
            }
            FUN4(&VAR3[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}