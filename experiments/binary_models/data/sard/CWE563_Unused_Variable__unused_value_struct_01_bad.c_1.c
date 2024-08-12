#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    twoIntsStruct VAR4;
    VAR4.VAR5 = 0;
    VAR4.VAR6 = 0;
    VAR4.VAR5 = 1;
    VAR4.VAR6 = 1;
    FUN2(&VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}