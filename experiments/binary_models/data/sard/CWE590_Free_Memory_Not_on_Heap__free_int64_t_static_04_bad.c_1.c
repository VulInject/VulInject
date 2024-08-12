#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    VAR6 * VAR7;
    VAR7 = NULL; 
    if(VAR4)
    {
        {
            int64_t VAR8[100];
            {
                size_t VAR9;
                for (VAR9 = 0; VAR9 < 100; VAR9++)
                {
                    VAR8[VAR9] = 5LL;
                }
            }
            VAR7 = VAR8;
        }
    }
    FUN2(VAR7[0]);
    free(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}