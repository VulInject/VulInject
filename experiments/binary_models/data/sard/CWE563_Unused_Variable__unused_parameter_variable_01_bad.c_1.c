#VAR1 ""
void FUN1(int VAR2) 
{
}
void FUN2() 
{
    FUN1(5);
}
int main(int argc, char * argv[]) 
{
    srand( (unsigned)FUN3(NULL) );
    FUN2();
    return 0;
}