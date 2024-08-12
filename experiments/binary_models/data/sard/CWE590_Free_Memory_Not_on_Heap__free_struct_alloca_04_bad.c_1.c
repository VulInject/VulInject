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
            VAR6 * VAR8 = (VAR6 *)FUN2(100*sizeof(VAR6));
            {
                size_t VAR9;
                for (VAR9 = 0; VAR9 < 100; VAR9++)
                {
                    VAR8[VAR9].VAR10 = 1;
                    VAR8[VAR9].VAR11 = 1;
                }
            }
            VAR7 = VAR8;
        }
    }
    FUN3(&VAR7[0]);
    free(VAR7);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}