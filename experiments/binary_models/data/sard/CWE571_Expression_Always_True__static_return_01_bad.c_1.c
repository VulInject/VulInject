#VAR1 ""
int FUN1() 
{
    return 1;
}
void FUN2() 
{
    if (FUN1()) 
    {
    }
}
int main(int argc, char * argv[]) 
{
    srand( (unsigned)FUN3(NULL) );
    FUN2();
    return 0;
}