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
        memcpy(VAR3, VAR4, 100*sizeof(VAR2));
        FUN2(&VAR3[0]);
    }
}
void FUN3()
{
    VAR2 * VAR3;
    twoIntsStruct VAR8[50];
    twoIntsStruct VAR9[100];
    VAR3 = VAR8;
    FUN1(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}