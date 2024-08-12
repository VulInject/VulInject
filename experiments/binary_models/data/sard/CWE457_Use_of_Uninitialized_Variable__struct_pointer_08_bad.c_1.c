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
    VAR4 * VAR5;
    if(FUN1())
    {
        ; 
    }
    if(FUN1())
    {
        FUN4(VAR5->VAR6);
        FUN4(VAR5->VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}