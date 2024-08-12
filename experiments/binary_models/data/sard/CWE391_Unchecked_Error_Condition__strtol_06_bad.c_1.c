#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    if(VAR4==5)
    {
        {
            long VAR5;
            VAR5 = FUN2("", NULL, 0);
            FUN3("", VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}