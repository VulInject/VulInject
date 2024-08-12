#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN2()
{
    if(VAR7)
    {
        {
            int VAR9 = rand();
            FUN3(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}