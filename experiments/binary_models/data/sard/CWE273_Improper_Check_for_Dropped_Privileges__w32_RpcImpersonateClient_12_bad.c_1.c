#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
# VAR5 FUN1(VAR6, "")
void FUN2()
{
    if(FUN3())
    {
        FUN4(0);
    }
    else
    {
        if (FUN4(0) != VAR7)
        {
            FUN5(1);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}