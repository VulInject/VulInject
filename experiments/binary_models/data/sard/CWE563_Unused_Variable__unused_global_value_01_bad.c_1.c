#VAR1 ""
int VAR2 = 0;
void FUN1() 
{
    VAR2 = 10;
    FUN2(VAR2);
}
int main(int argc, char * argv[]) 
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}