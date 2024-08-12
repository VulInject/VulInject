#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    long * VAR6;
    VAR6 = NULL; 
    if(VAR4)
    {
        {
            long VAR7[100];
            {
                size_t VAR8;
                for (VAR8 = 0; VAR8 < 100; VAR8++)
                {
                    VAR7[VAR8] = 5L;
                }
            }
            VAR6 = VAR7;
        }
    }
    FUN2(VAR6[0]);
    free(VAR6);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}