#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    twoIntsStruct VAR4[50];
    twoIntsStruct VAR5[100];
    if(FUN2())
    {
        VAR3 = VAR4;
    }
    else
    {
        VAR3 = VAR5;
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
            FUN3(&VAR3[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}