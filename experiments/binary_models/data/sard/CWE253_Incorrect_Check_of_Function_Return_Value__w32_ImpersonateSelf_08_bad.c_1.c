#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1(VAR5, "")
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
        if (FUN5(VAR6) > 0)
        {
            FUN6(1);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}