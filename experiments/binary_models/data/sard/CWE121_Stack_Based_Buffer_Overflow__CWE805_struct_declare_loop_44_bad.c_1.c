#VAR1 ""
void FUN1(VAR2 * VAR3)
{
    {
        twoIntsStruct VAR4[100];
        {
            size_t VAR5;
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR4[VAR5].VAR6 = 0;
                VAR4[VAR5].VAR7 = 0;
            }
        }
        {
            size_t VAR5;
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR3[VAR5] = VAR4[VAR5];
            }
            FUN2(&VAR3[0]);
        }
    }
}
void FUN3()
{
    VAR2 * VAR3;
    void (*VAR8) (VAR2 *) = VAR9;
    twoIntsStruct VAR10[50];
    twoIntsStruct VAR11[100];
    VAR3 = VAR10;
    FUN4(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}