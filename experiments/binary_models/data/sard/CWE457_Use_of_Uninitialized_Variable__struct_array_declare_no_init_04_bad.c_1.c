#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    VAR4 * VAR5;
    twoIntsStruct VAR6[10];
    VAR5 = VAR6;
    if(VAR2)
    {
        ; 
    }
    if(VAR2)
    {
        {
            int VAR7;
            for(VAR7=0; VAR7<10; VAR7++)
            {
                FUN2(VAR5[VAR7].VAR8);
                FUN2(VAR5[VAR7].VAR9);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}