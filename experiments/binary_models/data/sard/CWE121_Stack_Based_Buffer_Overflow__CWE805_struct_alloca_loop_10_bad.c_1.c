#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
    VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
    if(VAR6)
    {
        VAR3 = VAR4;
    }
    {
        twoIntsStruct VAR7[100];
        {
            size_t VAR8;
            for (VAR8 = 0; VAR8 < 100; VAR8++)
            {
                VAR7[VAR8].VAR9 = 0;
                VAR7[VAR8].VAR10 = 0;
            }
        }
        {
            size_t VAR8;
            for (VAR8 = 0; VAR8 < 100; VAR8++)
            {
                VAR3[VAR8] = VAR7[VAR8];
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