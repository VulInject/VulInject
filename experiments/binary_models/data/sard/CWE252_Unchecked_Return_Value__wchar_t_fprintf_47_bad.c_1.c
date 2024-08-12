#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        fwprintf(VAR4, VAR5"", VAR5"");
    }
    else
    {
        if (fwprintf(VAR4, VAR5"", VAR5"") < 0)
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}