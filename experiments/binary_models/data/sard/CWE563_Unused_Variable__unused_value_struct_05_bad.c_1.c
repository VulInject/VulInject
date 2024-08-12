#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    twoIntsStruct VAR6;
    if(VAR4)
    {
        VAR6.VAR7 = 0;
        VAR6.VAR8 = 0;
    }
    if(VAR4)
    {
        VAR6.VAR7 = 1;
        VAR6.VAR8 = 1;
        FUN2(&VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}