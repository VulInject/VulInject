#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    switch(6)
    {
    case 6:
        ; 
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
        FUN2(VAR5->VAR6);
        FUN2(VAR5->VAR7);
        break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}