#VAR1 ""
void FUN1() 
{
    if (FUN2()) 
    {
    }
}
int main(int argc, char * argv[]) 
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}