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
    VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
    if (VAR3 == NULL) {FUN4(-1);}
    if(FUN1())
    {
        ; 
    }
    if(FUN1())
    {
        {
            int VAR4;
            for(VAR4=0; VAR4<10; VAR4++)
            {
                FUN5(VAR3[VAR4].VAR5);
                FUN5(VAR3[VAR4].VAR6);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}