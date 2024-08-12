#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        if (fprintf(VAR4, "", "") == 0)
        {
        }
    }
    else
    {
        if (fprintf(VAR4, "", "") < 0)
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