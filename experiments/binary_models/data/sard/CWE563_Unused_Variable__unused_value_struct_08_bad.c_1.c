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
    twoIntsStruct VAR4;
    if(FUN1())
    {
        VAR4.VAR5 = 0;
        VAR4.VAR6 = 0;
    }
    if(FUN1())
    {
        VAR4.VAR5 = 1;
        VAR4.VAR6 = 1;
        FUN4(&VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}