#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(1)
    {
        {
            long VAR4;
            VAR4 = FUN2("", NULL, 0);
            FUN3("", VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}