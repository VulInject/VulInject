#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    VAR5 = NULL; 
    if(5==5)
    {
        {
            twoIntsStruct VAR6[100];
            {
                size_t VAR7;
                for (VAR7 = 0; VAR7 < 100; VAR7++)
                {
                    VAR6[VAR7].VAR8 = 1;
                    VAR6[VAR7].VAR9 = 1;
                }
            }
            VAR5 = VAR6;
        }
    }
    FUN2(&VAR5[0]);
    free(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}