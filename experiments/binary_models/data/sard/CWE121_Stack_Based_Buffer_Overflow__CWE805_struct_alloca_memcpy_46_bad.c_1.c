#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
    VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
    if(FUN3())
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
        memcpy(VAR3, VAR6, 100*sizeof(VAR2));
        FUN4(&VAR3[0]);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}