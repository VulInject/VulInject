#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    while(1)
    {
        ; 
        break;
    }
    while(1)
    {
        FUN2(VAR5->VAR6);
        FUN2(VAR5->VAR7);
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}