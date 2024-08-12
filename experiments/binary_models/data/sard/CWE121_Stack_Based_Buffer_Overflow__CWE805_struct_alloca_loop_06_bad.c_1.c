#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    VAR3 * VAR4;
    VAR3 * VAR5 = (VAR3 *)FUN2(50*sizeof(VAR3));
    VAR3 * VAR6 = (VAR3 *)FUN2(100*sizeof(VAR3));
    if(VAR2==5)
    {
        VAR4 = VAR5;
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
                VAR4[VAR8] = VAR7[VAR8];
            }
            FUN3(&VAR4[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}