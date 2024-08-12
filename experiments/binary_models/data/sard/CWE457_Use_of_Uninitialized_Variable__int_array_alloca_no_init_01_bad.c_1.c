#VAR1 ""
void FUN1()
{
    int * VAR2;
    VAR2 = (int *)FUN2(10*sizeof(int));
    ; 
    {
        int VAR3;
        for(VAR3=0; VAR3<10; VAR3++)
        {
            FUN3(VAR2[VAR3]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}