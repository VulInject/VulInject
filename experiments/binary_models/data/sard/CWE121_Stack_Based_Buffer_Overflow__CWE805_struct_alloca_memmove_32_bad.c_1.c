#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR2 * *VAR4 = &VAR3;
    VAR2 * *VAR5 = &VAR3;
    VAR2 * VAR6 = (VAR2 *)FUN2(50*sizeof(VAR2));
    VAR2 * VAR7 = (VAR2 *)FUN2(100*sizeof(VAR2));
    {
        VAR2 * VAR3 = *VAR4;
        VAR3 = VAR6;
        *VAR4 = VAR3;
    }
    {
        VAR2 * VAR3 = *VAR5;
        {
            twoIntsStruct VAR8[100];
            {
                size_t VAR9;
                for (VAR9 = 0; VAR9 < 100; VAR9++)
                {
                    VAR8[VAR9].VAR10 = 0;
                    VAR8[VAR9].VAR11 = 0;
                }
            }
            memmove(VAR3, VAR8, 100*sizeof(VAR2));
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