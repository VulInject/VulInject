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
    VAR2 * VAR4 = (VAR2 *)FUN4(50*sizeof(VAR2));
    VAR2 * VAR5 = (VAR2 *)FUN4(100*sizeof(VAR2));
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
            FUN5(&VAR3[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}