#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN2())
    {
        {
            int VAR7 = rand();
            FUN5(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN4();
    return 0;
}