#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    int VAR5;
    if(VAR4==5)
    {
        ; 
    }
    if(VAR4==5)
    {
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}