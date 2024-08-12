#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SLEEP VAR4
#VAR1 <VAR5.VAR3>
#define SLEEP VAR6
static const int VAR7 = 5;
void FUN1()
{
    int VAR8;
    VAR8 = -1;
    if(VAR7==5)
    {
        fscanf(stdin, "", &VAR8);
    }
    if(VAR7==5)
    {
        FUN2(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}