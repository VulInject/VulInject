#VAR1 ""
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        VAR2 * VAR3 = (VAR2 *)FUN2(sizeof(VAR2));
        twoIntsStruct VAR4 = *VAR3; 
        FUN3(VAR4.VAR5);
        FUN3(VAR4.VAR6);
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}