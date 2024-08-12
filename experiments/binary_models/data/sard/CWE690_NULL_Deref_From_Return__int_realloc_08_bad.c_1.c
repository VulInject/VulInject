#VAR1 ""
#VAR1 <VAR2.VAR3>
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
    int * VAR4;
    VAR4 = NULL; 
    VAR4 = (int *)realloc(VAR4, 1*sizeof(int));
    if(FUN1())
    {
        VAR4[0] = 5;
        FUN4(VAR4[0]);
        free(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}