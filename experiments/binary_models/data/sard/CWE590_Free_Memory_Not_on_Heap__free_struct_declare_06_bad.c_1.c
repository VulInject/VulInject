#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 5;
void FUN1()
{
    VAR5 * VAR6;
    VAR6 = NULL; 
    if(VAR4==5)
    {
        {
            twoIntsStruct VAR7[100];
            {
                size_t VAR8;
                for (VAR8 = 0; VAR8 < 100; VAR8++)
                {
                    VAR7[VAR8].VAR9 = 1;
                    VAR7[VAR8].VAR10 = 1;
                }
            }
            VAR6 = VAR7;
        }
    }
    FUN2(&VAR6[0]);
    free(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}